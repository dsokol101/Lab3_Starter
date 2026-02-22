#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/doctest.h"
#include "../include/lab2a.h"
using namespace std;
// Explicit instantiation for the specific type you're using:


TEST_CASE("Testing swap with strings") {
    string str1 = "hello";
    string str2 = "world";
    swap(str1, str2);
    CHECK(str1 == "world");
    CHECK(str2 == "hello");
}
TEST_CASE("Testing sort with strings using array<>") {
    //const size_t arrsize = 3;
    array<string, ARRSIZE> arr{"banana", "apple", "cherry"};
    sort_arr(arr, 3);
    CHECK(arr[0] == "apple");
    CHECK(arr[1] == "banana");
    CHECK(arr[2] == "cherry");
}