/******************************************************************************
                              TREE RECURSION
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void fun (int n){
    if (n>0){
        cout<<n;
        fun(n-1);
        fun(n-1);
    }
};
int main()
{
    fun(3);

    return 0;
}
