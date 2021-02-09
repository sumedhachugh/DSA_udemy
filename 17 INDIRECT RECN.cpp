/******************************************************************************
                              INDIRECT RECURSION
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void funB (int n);   // declaring fun b so that it can be called later
void funA (int n){
    if (n>0){
        cout<<n;
        funB(n-1);
    }
}

void funB (int n){
    if (n>0){
        cout<<n;
        funA(n/2);
    }
}

int main()
{
    funA(20);

    return 0;
}
