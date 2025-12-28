#include <string>
#include <iostream>
#include <fcntl.h>
#include <unistd.h>

int main(int ac , char *av[])
{
    if (ac != 4)
        return 1;

    std::string filename = av[1];
    std::string s1_replace = av[2];
    std::string s2_replaced_s1 = av[3];
    std::string result;

    size_t pos = 0;
    size_t s1_length = s1_replace.length();
    
    int fd = open(filename.c_str(), O_RDONLY); 
    if (fd == -1)
        return 1;

    char buffer[1024];
    ssize_t bytes_read;
    while ((bytes_read = read(fd, buffer, sizeof(buffer) - 1)) > 0)
    {
        buffer[bytes_read] = '\0';
        result += buffer;
    }
    close(fd);

    pos = 0;
    while ((pos = result.find(s1_replace, pos)) != std::string::npos)
    {
        result.erase(pos, s1_length);
        result.insert(pos, s2_replaced_s1);
        pos += s2_replaced_s1.length();
    }

    std::cout << result << std::endl;

    return 0;

}