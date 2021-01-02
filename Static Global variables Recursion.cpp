/******************************************************************************
STATIC AND GLOBAL VARIABLES IN RECURSION
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

/* int fun(int n){
    
    if(n>0)
    {
        return(fun(n-1)+n);
    }
    return 0;
        
}; */

/* int fun(int n){
    static int x = 0;
    if(n>0)
    {
        x++;
        return(fun(n-1)+x);
    }
    return 0;
        
};*/

int x = 0;
int fun(int n){
    if(n>0)
    {
        x++;
        return(fun(n-1)+x);
    }
    return 0;
        
};

int main()
{
    int x= 5;
    int O = fun(x);
    cout<< O;

    return 0;
}
