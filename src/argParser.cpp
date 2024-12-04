#include "include/argParser.h"
#include <string>
#include <vector>
#include <logger/Logger.h>

std::vector<std::string> getFiles(int argc, char *argv[])
{
    std::vector<std::string> files;
    files.reserve(argc - 1);

    for (int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        if (arg.rfind("--", 0) != 0)
        {
            files.push_back(arg);
            Logger::debug("Added file: " + arg);
        }
    }

    return files;
}

std::vector<std::string> getOptions(int argc, char *argv[])
{
    std::vector<std::string> options;
    options.reserve(argc - 1);

    for (int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        if (arg.rfind("--", 0) == 0)
        {
            std::string option = arg.substr(2);
            options.push_back(option);
            Logger::debug("Added option: " + option);
        }
    }

    return options;
}
