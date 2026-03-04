#include <fstream>
#include <string>
#include <iostream>
#include <array>
#include <cstdlib>
#include "../include/lab3.h"
using namespace std;

/* prints all elements in vector names to the file filename */
void print(const vector<string>& names, string filename)
{
    for (size_t i = 0; i < names.size(); i++)
    {
        cout << names[i] << endl;
    }   
}
/* reads in elements from a file and places them in the vector names */
void load(vector<string>& names, string filename)
{ 
    ifstream in(filename);
    if (!in)    
    {
        cerr << "Error opening file: " << filename << endl;
        exit(1);
    }   
    string name;
    while (getline(in, name))
    {
        names.push_back(name);
    }   
    in.close();
}    
/* sorts the elements in the vector names */
void sort_vec(vector<string>& names)
{

    for (size_t i = 0; i < names.size() - 1; i++)
    {
        for (size_t j = i + 1; j < names.size(); j++)
        {
            if (names[i] > names[j])
            {
                myswap(names[i], names[j]);
            }
        }
    }
}

/************************************************************************************/
/*  You can put in main to help you test your code. */
/************************************************************************************/