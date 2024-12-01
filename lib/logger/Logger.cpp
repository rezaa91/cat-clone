#include "Logger.h"
#include <string>
#include <iostream>

void Logger::debug(const std::string& message)
{
    std::cout << message << std::endl;
}

void Logger::info(const std::string &message)
{
    std::cout << message << std::endl;
}

void Logger::warn(const std::string &message)
{
    std::cout << message << std::endl;
}

void Logger::error(const std::string &message)
{
    std::cerr << message << std::endl;
}
