#include "item7.hpp"

A::A() {
    m_a = new char[20];
    strcpy(m_a, "obja");
    std::cout << m_a << std::endl;
}

A::~A() {
    delete[] m_a; //释放m_a数组的空间
    std::cout << "删除m_a" << std::endl;
}

B::B() {
    m_b = new char[20];
    strcpy(m_b, "objb");
    std::cout << m_b << std::endl;
}

B::~B() {
    delete[] m_b; //释放m_b数组的空间
    std::cout << "删除m_b" << std::endl;
}

C::C() {
    m_c = new char[20];
    strcpy(m_c, "objc");
    std::cout << m_c << std::endl;
}

C::~C() {
    delete[] m_c; //释放m_c数组的空间
    std::cout << "删除m_c" << std::endl;
}
