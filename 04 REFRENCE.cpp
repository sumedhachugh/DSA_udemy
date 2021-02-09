/******************************************************************************

                             REFRENCE
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
    int a=10;
    int &r = a; // initialize and declare at same time o/w error
    // b = 25; int &r = b; wronggg
    r++;
    cout<<r<<endl;
    cout<<a<<endl;
    
    int c = 30;
    r = c;
    cout<<r<<endl;
    cout<<a<<endl;
    return 0;
}
