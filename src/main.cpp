#include <dummy.h>
#include <iostream>

using namespace dum;

int main () {
    dummy d = dummy(2);

    std::cout << "THIS SHOULD BE THREE: " << d.get(5) << std::endl;

    return 0;
}