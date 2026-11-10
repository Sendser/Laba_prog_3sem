#pragma once

class IntArray {
private:
    int* data;
    int size;

public:
    explicit IntArray(int size);

    ~IntArray();

    IntArray(const IntArray& other);

    void print() const;

    void set(int index, int value);

    int get(int index) const;

    int getSize() const;

    void push_back(int value);

    void add(const IntArray& other);

    void sub(const IntArray& other);
};