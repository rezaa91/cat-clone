#include <iostream>
#include <logger/Logger.h>
#include <reader/Reader.h>
#include "include/argParser.h"
#include "include/menu.h"

enum Codes {
    SUCCESS,
    NO_FILE,
    INVALID
};

int main(int argc, char* argv[])
{
    Logger::debug("Starting application...");
    if (!argv[1])
    {
        std::cerr << "cat: No file or option passed\n";
        return Codes::NO_FILE;
    }

    std::vector<std::string> files = getFiles(argc, argv);
    std::vector<std::string> options = getOptions(argc, argv);

    Menu menu(options);
    if (!menu.isValid())
    {
        return Codes::INVALID;
    }

    Reader reader(files, options);
    reader.read();

    return Codes::SUCCESS;
}