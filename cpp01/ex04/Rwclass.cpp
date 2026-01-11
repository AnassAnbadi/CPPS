# include "Rwclass.hpp"
Rwclass::Rwclass(std::string filename, std::string s1, std::string s2)
{
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
}

int    Rwclass::replace()
{
    std::string filename_replace= filename + ".replace";

    size_t pos = 0;
    
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }
    std::ofstream outfile(filename_replace.c_str());
      if (!outfile.is_open())
    {
        std::cerr << "Error: Could not open file " << filename_replace << std::endl;
        return 1;
    }
    std::string line;
    getline(file, line, '\0');
    file.close();
    if (!s1.empty() && s1 != s2)
    {
        while ((pos=line.find(s1)) != std::string::npos)
        {
          line.erase(pos, s1.size());
          line.insert(pos, s2);
        }
    }
    outfile << line;
    outfile.close();
    return 0;
}
Rwclass::~Rwclass()
{
}
