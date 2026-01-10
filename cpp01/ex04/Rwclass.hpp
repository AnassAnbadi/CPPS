# ifndef RWCLASS_HPP
# define RWCLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
class Rwclass
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Rwclass(std::string filename, std::string s1, std::string s2);
        int    replace();
        ~Rwclass();
};
# endif