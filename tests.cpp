#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"
TEST_CASE("Testing push_back and pop_back functions"){
    MyVector<std::string> string_vector;
    //CHECK push_back();
    for(int i = 1; i < 6; i++){
        string_vector.push_back("string" + std::to_string(i));
    }
    CHECK(string_vector[0] == "string1");
    CHECK(string_vector[1] == "string2");
    CHECK(string_vector.size() == 5);

    //CHECK pop_back();
    string_vector.pop_back();
    CHECK(string_vector[0] == "string1");
    CHECK(string_vector.size() == 4);

    //CHECK pop_back(int n);
    string_vector.pop_back(3);
    CHECK(string_vector[0] == "string1");
    CHECK(string_vector.size() == 1);
}
TEST_CASE("Test \"size(), capacity(), empty(), clear()\" Functions"){
    MyVector<int> integer_vector;

    //CHECK size(), capacity(), empty()
    for (int i = 0; i < 5; i++){
        integer_vector.push_back(i);
    }
    CHECK(integer_vector.size() == 5);
    CHECK(integer_vector.capacity() == 10);
    CHECK(integer_vector.empty() == false);

    integer_vector.pop_back(3);
    CHECK(integer_vector.size() == 2);
    CHECK(integer_vector.capacity() == 10);
    CHECK(integer_vector.empty() == false);

    for (int i = 0; i < 9; i++){
        integer_vector.push_back(i);
    }
    CHECK(integer_vector.size() == 11);
    CHECK(integer_vector.capacity() == 20);
    CHECK(integer_vector.empty() == false);

    //CHECK clear();
    integer_vector.clear();
    CHECK(integer_vector.size() == 0);
    CHECK(integer_vector.capacity() == 20);
    CHECK(integer_vector.empty() == true);
}

TEST_CASE("Testing [] operator"){
    MyVector<bool> v;
    for (int i = 0; i < 10; i++){
        v.push_back(true);
    }
    CHECK(v[0] == true);
    v[0] = false;
    CHECK(v[0] == false);
    CHECK(v[1] == true);
}