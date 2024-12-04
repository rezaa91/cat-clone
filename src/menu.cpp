#include "include/menu.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

Menu::Menu(std::vector<std::string>& options)
    :options(options), m_isValid(true)
{
    this->validate();
}

void Menu::show() const
{
    std::cout <<
        "Usage: cat [OPTION]... [FILE]...\n"
        "Concatenate FILE(s) to standard output.\n\n"
        "--number\t\t\tnumber all output lines\n\n"
        "Examples:\n"
        "cat f -n Output f's contents with lines numbered\n";
}

void Menu::validate() const
{
    if (std::find(this->options.begin(), this->options.end(), "help") != this->options.end())
    {
        this->show();
        this->m_isValid = false;
    }
}

bool Menu::isValid() const
{
    return this->m_isValid;
}
