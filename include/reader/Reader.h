#pragma once
#include <string>

class Reader
{
private:
    const std::string& filename;
public:
    Reader() = delete;
    Reader(const std::string& filename);
    void read() const;
};
