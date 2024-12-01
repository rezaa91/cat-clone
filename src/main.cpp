#include <iostream>
#include <logger/Logger.h>
#include <reader/Reader.h>

int main(int argc, char* argv[])
{
    Logger::debug("Starting application...");
    Reader reader("somefile.txt");

    return 0;
}