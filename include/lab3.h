#ifndef LAB3_H // Include guard to prevent multiple inclusions
#define LAB3_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <cstdlib>

// no size necessary for vector: const size_t ARRSIZE = 100;
void print(const std::vector<std::string>& names, std::string filename);
void load(std::vector<std::string>& names, std::string filename);
void sort_vec(std::vector<std::string>& names);
template <typename T>
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}


#endif