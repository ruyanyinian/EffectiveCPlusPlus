#include "item2.hpp"

TextBook::TextBook(const std::string text) {
    m_text = text;
}

TextBook::TextBook(const TextBook& obj) {
    m_text = obj.m_text;
}

char& TextBook::operator[](std::size_t position) {
    return m_text[position];
}