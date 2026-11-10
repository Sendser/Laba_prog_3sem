#include "IntArray.h"
#include <iostream>
#include <stdexcept>
#include <new>

IntArray::IntArray(int newSize) {
    if (newSize < 0) {
        newSize = 0;
    }
    size = newSize;
    data = new int[size](); 
}

IntArray::~IntArray() {
    delete[] data;
    data = nullptr;
}

IntArray::IntArray(const IntArray& other) {
    size = other.size;
    data = new int[size]();
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

void IntArray::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << "]";
}

void IntArray::set(int index, int value) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index is out");
    }
    if (value < -100 || value > 100) {
        throw std::invalid_argument("Value in range [-100, 100]");
    }
    data[index] = value;
}

int IntArray::get(int index) const {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index is out");
    }
    return data[index];
}

int IntArray::getSize() const {
    return size;
}

void IntArray::push_back(int value) {
    if (value < -100 || value > 100) {
        throw std::invalid_argument("Value in range [-100, 100]");
    }

    int newSize = size + 1;
    int* newData = new int[newSize]();

    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }

    newData[size] = value;
    delete[] data;
    data = newData;
    size = newSize;
}


void IntArray::add(const IntArray& other) {
    int limit = (size < other.size) ? size : other.size;

    for (int i = 0; i < limit; i++) {
        int result = data[i] + other.data[i];
        
        if (result > 100)  result = 100;
        if (result < -100) result = -100;
        
        data[i] = result;
    }
}

void IntArray::sub(const IntArray& other) {
    int limit = (size < other.size) ? size : other.size;

    for (int i = 0; i < limit; i++) {
        int result = data[i] - other.data[i];
        
        if (result > 100)  result = 100;
        if (result < -100) result = -100;
        
        data[i] = result;
    }
}