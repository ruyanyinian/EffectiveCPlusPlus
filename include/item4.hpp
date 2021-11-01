//成员列表初始化
#ifndef ITEM4_HPP
#define ITEM4_HPP
#include <iostream>
#include <list>
#include <string>
class PhoneNumber {};
class ABEntry {
public:
    ABEntry(const std::string& name, const std::string& address, const std::list<PhoneNumber>& phones);
private:
    std::string thename;
    std::string theAddress;
    std::list<PhoneNumber> thePhones;
};
#endif