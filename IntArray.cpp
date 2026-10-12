#include <iostream>
#include"IntArray.h"


IntArray::IntArray(int newSize) {
    if (newSize < 0){
        newSize = 0;
    } 
    size = newSize;
    data = new int[size]();
}

IntArray::~IntArray() {
    delete[] data;
    data = nullptr;
}

 void IntArray::Print() {
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " " << "\n";
    }
}

void IntArray::set(int index, int value) {
    if (index < 0 || index >= size) {
        std::cout << "Error. Exit of range" << "\n";
        return;
    }

    if (value < -100 && value > 100) {
        std::cout << "Error of value" << "\n";
        return;
    }
    data[index] = value;

}

int IntArray::get(int index) {
    if (index < 0 || index >= size) {
        std::cout << "Error. Exit of range" << "\n";
        return 0;
    }    
}

IntArray::IntArray(const IntArray& other) {
    size = other.size;
    data = new int[size]();
    for (int i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }
}

// задание 3
void IntArray::push_back(int value) {
    if (value < -100 || value > 100) {
        std::cout << "Ошибка: значение " << value
                  << " вне диапазона [-100, 100]\n";
        return;
    }

    int newSize = size + 1;
    int* newData = new int[newSize]();

    for (int i = 0; i < size; ++i) {
        newData[i] = data[i];
    }

    newData[size] = value;
    delete[] data;
    data = newData;
    size = newSize;
}

//задание 4
void IntArray::add(const IntArray& other) {
    int limit = (size < other.size) ? size : other.size;

    for (int i = 0; i < limit; ++i) {
        int result = data[i] + other.data[i];
        if (result > 100)  result = 100;
        if (result < -100) result = -100;
        data[i] = result;
    }
}

void IntArray::sub(const IntArray& other) {
    int limit = (size < other.size) ? size : other.size;

    for (int i = 0; i < limit; ++i) {
        int result = data[i] - other.data[i];

        if (result > 100)  result = 100;
        if (result < -100) result = -100;

        data[i] = result;
    }
}





