#include "Identify.hpp"

int main (void)
{
    Base *base1 = generate();
    identify(base1);

    Base &base2 = *generate();
    identify(base2);
}