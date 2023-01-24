#include <iostream>
#include "MyVector.h"

int main(){
    MyVector<int> v;
    for (int i = 0; i < 10; i++){
        v.push_back(i);
    }
    std::cout << "-- MyVector<int> usage --\n";
    v.printIt();
    std::cout << "empty(): " << v.empty() << std::endl << std::endl;
    v.push_back(3);
    v.push_back(2);
    v[10] = 1;
    v.printIt();
    std::cout << "--\n\n";

    MyVector<std::string> str_v;
    for (int i = 0; i < 10; i++){
        str_v.push_back("string" + std::to_string(i + 1));
    }
    std::cout << "-- MyVector<string> usage --\n";

    str_v.printIt();
    std::cout << "\npop_back(4)\n";
    str_v.pop_back(4);
    str_v.printIt();

    std::cout << "\nclear()";
    str_v.clear();
    str_v.printIt();
    std::cout <<"--\n";
    return 0;
}