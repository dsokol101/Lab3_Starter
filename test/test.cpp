#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/doctest.h"
#include "../include/lab3.h"


TEST_CASE("Testing swap with strings") {
    string str1 = "hello";
    string str2 = "world";
    swap(str1, str2);
    CHECK(str1 == "world");
    CHECK(str2 == "hello");
}
TEST_CASE("Testing sort of vector<string>") {
    vector<string> arr{"banana", "apple", "cherry"};
    sort_vec(arr);
    CHECK(arr[0] == "apple");
    CHECK(arr[1] == "banana");
    CHECK(arr[2] == "cherry");
}