#include <iostream>
#include "IntArray.h"


void checkEx1_Ex2_Ex3(){
    std::cout << "Ex1" << "\n";
    IntArray a(3);
    a.set(0, 23);
    a.set(1, 32);
    a.set(2,45);
    a.Print();
//-------------------
    std::cout << "Ex2" << "\n";
    IntArray b = a;
    b.set(1, 50);
    std::cout << "massive a" << "\n";
    a.Print();
    std::cout << "massive b" << "\n";
    b.Print();
//---------------------------
    std::cout << "Ex3" << "\n";
    a.push_back(99);
    std::cout << "after push_back" << "\n";
    a.Print();
}

void Check_Ex4() {
    std::cout << "Ex4" << "\n";
    IntArray a(3);
    a.set(0, 23);
    a.set(1, 32);
    a.set(2,45);

    IntArray b(3);
    b.set(0, 45);
    b.set(1, 56);
    b.set(2, 67);

    a.add(b);
    a.Print();
}


int main() {
    checkEx1_Ex2_Ex3();
    Check_Ex4();
}
