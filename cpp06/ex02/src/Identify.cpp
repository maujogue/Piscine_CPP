#include "Identify.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base * generate() {
    srand(time(0));
    int random = rand() % 3;
    switch (random) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return 0;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    }
    else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    }
}

void identify(Base& p) {
    try {
        p = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }catch (std::exception&){}
    try {
        p = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } catch (std::exception&){}
    try {
        p = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } catch (std::exception&) {}
}
