#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector(){
    arr = new T[10];
    // for (int i = 0; i < 10; i++){
    //     arr[i] = 0;
    // }
    arr_size = 0;
    arr_capacity = 10;
}

template <class T>
MyVector<T>::MyVector(T a){
    arr = new T[a];
    // for (int i = 0; i < a; i++){
    //     arr[i] = a;
    // }
    arr_size = a;
    arr_capacity = a;
}

template <class T>
void MyVector<T>::expand_arr(){
    T *new_arr = new T[arr_size + 10];
    for (int i = 0; i < arr_size; i++){
        new_arr[i] = arr[i];
    }
    delete[] arr;
    arr = new_arr;
    new_arr = NULL;
    arr_capacity += 10;
}

template <class T>
int MyVector<T>::size(){
    return arr_size;
}
template <class T>
int MyVector<T>::capacity(){
    return arr_capacity;
}
template <class T>
bool MyVector<T>::empty(){
    if (arr_size == 0){
        return true;
    }
    return false;
}
template <class T>
void MyVector<T>::push_back(T item){
    // check capacity
    if (arr_size < arr_capacity){
        arr_size++;
        arr[arr_size - 1] = item;
    } else {
        // else make dynamic array
        expand_arr();
        arr_size++;
        arr[arr_size - 1] = item;
    }
}
template <class T>
void MyVector<T>::pop_back(){
    if (arr_size > 0){
        arr_size--;
    }
}
template <class T>
void MyVector<T>::pop_back(int n){
    for (int i = 0; i < n; i++){
        if (arr_size > 0){
            arr_size--;
        }
    }
}
template <class T>
void MyVector<T>::clear(){
    // for (int i = 0; i < arr_size; i++){
    //     arr[i] = 0;
    // }
    arr_size = 0;
}

template <class T>
void MyVector<T>::printIt(){
    for (int i = 0; i < arr_size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\nsize: " << arr_size << "\ncapacity: " << arr_capacity;
    std::cout << std::endl;
}

template <class T>
T &MyVector<T>::operator[] (int i) {
    return arr[i];
}