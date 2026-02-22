#ifndef LAB3a_H // Include guard to prevent multiple inclusions
#define LAB3a_H

#include <string>
#include <array>

const size_t ARRSIZE = 100;
//void print(const array<string, ARRSIZE>& names, int numElts);
//int load(array<string, ARRSIZE>& names, string filename);
//void sort_arr(array<string, ARRSIZE>& names, int numElts);    
template <typename T>
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

#endif