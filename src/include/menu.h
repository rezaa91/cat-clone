#pragma once
#include <string>
#include <vector>

class Menu
{
private:
    std::vector<std::string>& options;
    mutable bool m_isValid;

public:
    Menu() = delete;
    Menu(std::vector<std::string>& options);
    void show() const;
    bool isValid() const;

private:
    void validate() const;
};
