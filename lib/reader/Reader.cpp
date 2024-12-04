#include "Reader.h"
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include <vector>

Reader::Reader(const std::vector<std::string>& files, const std::vector<std::string>& options)
    :files(files), options(options)
    {
    }

void Reader::read() const
{
    for (const std::string& filename : this->files)
    {
        this->readFile(filename);
    }
}

void Reader::readFile(const std::string& filename) const
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "cat: " << filename << ": No such file or directory\n";
        return;
    }
    if (std::filesystem::is_directory(filename))
    {
        std::cerr << "cat: " << filename << ": Is a directory\n";
        return;
    }

    std::string line;
    while (std::getline(file, line))
    {
        std::cout << line << std::endl;
    }
}
