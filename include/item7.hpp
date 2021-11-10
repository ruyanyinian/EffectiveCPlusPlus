#ifndef ITEM7_HPP
#define ITEM7_HPP

#include <iostream>
#include <string.h>
class A {
public:
    A();
    ~A();
private:
    char *m_a = NULL;
};

class B: public A {
public:
    B();
    ~B();
private:
    char *m_b = NULL;
};

class C: public B {
public:
    C();
    ~C();
private:
    char *m_c = NULL;
};
#endif