
#include <string>
#include <iostream>
#include "../include/lab3.h"
using namespace std;

int main()
{
    string s1 = "hello";
    string s2 = "world";
    cout << "Before swap: s1 = " << s1 << ", s2 = " << s2 << endl;
    myswap(s1, s2);
    cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << endl;

    double d1 = 3.14;
    double d2 = 2.71;
    cout << "Before swap: d1 = " << d1 << ", d2 = " << d2 << endl;
    myswap(d1, d2);
    cout << "After swap: d1 = " << d1 << ", d2 =" << d2 << endl;

    return 0;
}