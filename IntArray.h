#pragma once
#include <iostream>

class IntArray {
private:
    int* data;
    int size;

public:
    void Print();

    IntArray(int size);

    ~IntArray();

    void set(int index, int value);

    int get(int index);

    IntArray(const IntArray& other);

    void push_back(int value);

    int getSize() const;

    void add(const IntArray& other);
    
    void sub(const IntArray& other);

};
