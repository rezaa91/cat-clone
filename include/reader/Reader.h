#pragma once
#include <string>
#include <vector>

class Reader
{
private:
    const std::vector<std::string>& files;
    const std::vector<std::string>& options;
public:
    Reader() = delete;
    Reader(const std::vector<std::string>& files, const std::vector<std::string>& options);
    void read() const;

private:
    void readFile(const std::string& filename) const;
};
