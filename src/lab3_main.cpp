#include <fstream>
#include <iostream>
#include <cstdlib>
#include "../include/lab3.h"
using namespace std;
/***************************************************************************************
 * You can put this in to help you test your code. */

int main()
{
    string filename = "my_file.txt";

    vector<string> names;
    load(names, filename);
    print(names, "output.txt");
    sort_vec(names);
    cout << "After sorting: " << endl;
    print(names, "output.txt");
    return 0;
}
/************************************************************************************** */