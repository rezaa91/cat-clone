#include <iostream>
#include <logger/Logger.h>
#include <reader/Reader.h>

enum Codes {
    SUCCESS,
    NO_FILE
};

int main(int argc, char* argv[])
{
    Logger::debug("Starting application...");
    if (!argv[1])
    {
        std::cerr << "cat: No file or option passed\n";
        return Codes::NO_FILE;
    }

    Reader reader(argv[1]);
    reader.read();

    return Codes::SUCCESS;
}