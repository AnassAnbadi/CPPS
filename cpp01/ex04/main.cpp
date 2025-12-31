/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 03:02:09 by aanbadi           #+#    #+#             */
/*   Updated: 2026/01/01 00:22:42 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int ac , char *av[])
{
    if (ac != 4)
        return 1;

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
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
    if (!s1.empty())
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
