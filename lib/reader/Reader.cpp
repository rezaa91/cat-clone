#include "Reader.h"
#include <iostream>
#include <string>

Reader::Reader(const std::string& filename)
    :filename(filename)
    {
        std::cout << "Attempting to read file \"" << filename << "\"\n";
    }
