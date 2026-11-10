#include <iostream>
#include <stdexcept>
#include "IntArray.h"

int main() {
    IntArray arr(5);

    try {
        std::cout << "Try index 10 (size 5)\n";
        arr.set(10, 42);
    } 
    catch (const std::out_of_range& e) {
        std::cout << "std::out_of_range: " << e.what() << "\n\n";
    }

    try {
        std::cout << "Try value 200 (-100;100)\n";
        arr.set(0, 200);
    } 
    catch (const std::invalid_argument& e) {
        std::cout << "std::invalid_argument: " << e.what() << "\n\n";
    }

    try {
        std::cout << "Try huge array\n";
        IntArray huge(2000000000); 
    } 
    catch (const std::bad_alloc& e) {
        std::cout << "std::bad_alloc: " << e.what();
    }
}