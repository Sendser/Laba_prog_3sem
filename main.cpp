#include <iostream>
#include "IntArray.h"
#pragma once

int main() {
    IntArray arr(5);

    arr.set(0, 10);
    arr.set(1, -50);
    arr.set(2, 100);
    arr.set(3, -100);
    arr.set(4, 0);

    arr.Print();

    arr.set(10, 42);
    arr.set(0, 200);

//-----------------------------------------------------------------------
    std::cout << "2 exercise" << "\n";

    IntArray a(3);
    a.set(0, 10);
    a.set(1, 20);
    a.set(2, 30);

    IntArray b = a;
    b.Print();
    b.set(0, 99);
    std::cout << "After b.set(0, 99):\n";
    std::cout << "a = ";
    a.Print();
    std::cout << "b = ";
    b.Print();


    std::cout << "Exercise 3 push_back\n";

    IntArray arr(3);
    arr.set(0, 10);
    arr.set(1, 20);
    arr.set(2, 30);

    std::cout << "Start massive: ";
    arr.Print();
    std::cout << "Size: " << arr.getSize() << "\n";

    arr.push_back(40);
    std::cout << "After push_back(40): ";
    arr.Print();
    std::cout << "Size: " << arr.getSize() << "\n";

    arr.push_back(-50);
    std::cout << "After push_back(-50): ";
    arr.Print();
    std::cout << "Size: " << arr.getSize() << "\n";

    arr.push_back(200);
    std::cout << "After push_back(200): ";
    arr.Print();
    std::cout << "Size: " << arr.getSize() << "\n";


    std::cout << "Exercise 4 add and sub\n";

    IntArray a(3);
    a.set(0, 10);
    a.set(1, 20);
    a.set(2, 30);

    IntArray b(3);
    b.set(0, 1);
    b.set(1, 2);
    b.set(2, 3);

    std::cout << "a = "; a.Print();
    std::cout << "b = "; b.Print();

    a.add(b);
    std::cout << "a.add(b) -> a = "; a.Print();

    a.sub(b);
    std::cout << "a.sub(b) -> a = "; a.Print();

    IntArray c(3);
    c.set(0, 5);
    c.set(1, 6);
    c.set(2, 7);

    IntArray d(2);
    d.set(0, 1);
    d.set(1, 1);

    std::cout << "\nc = "; c.Print();
    std::cout << "d = "; d.Print(); 

    c.add(d);
    std::cout << "c.add(d) -> c = "; c.Print(); 

    IntArray e(2);
    e.set(0, 100);
    e.set(1, 100);

    IntArray f(4);
    f.set(0, 1);
    f.set(1, 2);
    f.set(2, 3);
    f.set(3, 4);

    std::cout << "\ne = "; e.Print();
    std::cout << "f = "; f.Print();

    e.sub(f);
    std::cout << "e.sub(f) -> e = "; e.Print();

}