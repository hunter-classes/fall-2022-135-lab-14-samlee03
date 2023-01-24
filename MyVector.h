#pragma once

template <class T>
class MyVector{
public:
    MyVector();
    MyVector(T a);
    int size();
    int capacity();
    bool empty();
    void push_back(T item);
    void pop_back(int n);
    void pop_back();
    void clear();
    T &operator[] (int i);
    void printIt();
private:
    T *arr;
    void expand_arr();
    int arr_size;
    int arr_capacity;
};

#include "MyVector.cxx"