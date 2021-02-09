/******************************************************************************
                              NESTED RECURSION
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int fun(int n){
    if (n>100){
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}


int main()
{
    int p = fun(95);
    cout<<p;

    return 0;
}
