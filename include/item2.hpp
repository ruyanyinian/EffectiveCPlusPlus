#ifndef ITEM2_HPP
#define ITEM2_HPP

#include <iostream>

class TextBook {
public:
    TextBook(const std::string text);
    TextBook(const TextBook& obj);
    char& operator[](std::size_t position);

private:
    std::string m_text; 
};
#endif