#include "Reader.h"
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

Reader::Reader(const std::string& filename)
    :filename(filename)
    {
        std::cout << "Attempting to read file \"" << filename << "\"\n";
    }

void Reader::read() const
{
    std::ifstream file(this->filename);
    if (!file.is_open())
    {
        std::cerr << "cat: " << this->filename << ": No such file or directory\n";
        return;
    }
    if (std::filesystem::is_directory(this->filename))
    {
        std::cerr << "cat: " << this->filename << ": Is a directory\n";
        return;
    }

    std::string line;
    while(std::getline(file, line))
    {
        std::cout << line << std::endl;
    }
}
