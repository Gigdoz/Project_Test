#include "../lib/math.h"
#include <iostream>

void test_1() {
    const char* flag = Sum(2, 3) == 2 + 3 ? "Passed" : "Failed";
    std::cout << "1. Test Sum int: " << flag << "\n";
}

void test_2() {
    const char* flag = Sum(2.323, 3.12) == 2.323 + 3.12 ? "Passed" : "Failed";
    std::cout << "2. Test Sum double: " << flag << "\n";
}


int main() {
    std::cout << "\n\n-----------------Start testing-------------------\n\n";
    std::cout << "  math.cpp\n";
    test_1();
    test_2();
    std::cout << "\n\n-----------------Finish testing-------------------\n\n";
    return 0;
}
