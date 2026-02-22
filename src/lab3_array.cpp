#include <fstream>
#include <string>
#include <iostream>
#include <array>
#include <cstdlib>
#include "../include/lab3_array.h"

using namespace std;

void print(const array<string, ARRSIZE>& names, int numElts) //, string filename)
{   
    
}

int load(array<string, ARRSIZE>& names, string filename)
{
    
}

void sort_arr(array<string, ARRSIZE>& names, int numElts) 
{
    for (int i = 0; i < numElts - 1; i++)
    {
        for (int j = i + 1; j < numElts; j++)
        {
            if (names[i] > names[j])
            {
                swap(names[i], names[j]);
            }
        }
    }
}

/*************************************************************************************** 
 * You can put this in to help you test your code. 
 
int main()
{
    string filename = "./my_file.txt";
   
    // from C-strings:
    //string names[SIZE];

    //int num_elts = load(names, SIZE, filename);
    //sort(names, num_elts);
    //print(names, num_elts, "output.txt");

    array<string, ARRSIZE> names_arr;
    // note: the size of the array is not passed to the load function
    // as it is included in the names_arr object
    int num_elts = load(names_arr, filename);
    // here we pass the num_elts since the array may be partially filled
    // note that with a vector you will not need to pass in the num_elts
    print(names_arr, num_elts); //, "output.txt");
    sort_arr(names_arr, num_elts);
    cout << "After sorting: " << endl;
    print(names_arr, num_elts); 
    return 0;
}
/************************************************************************************** */