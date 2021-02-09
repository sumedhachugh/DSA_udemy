/******************************************************************************

                              Fibbonacci series
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

/*
// Using Loop
int fib(int n){
    int t0 = 0, t1 = 1,s,i;
    if(n<=1)
    return n;
    for(i=2;i<=n;i++)
    {
        s = t0+t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// Using Recursion
int fib(int n){
    if(n<=1)
    return n;
    return fib(n-2)+fib(n-1);
} */

// Using Memoization in Recursion

int F[10];

int fib(int n){
    
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1)
        F[n-2] = fib(n-2);
        if(F[n-1] == -1)
        F[n-1] = fib(n-1);
        return F[n-2]+F[n-1];
    }
    
    return fib(n-2)+fib(n-1);
}

int main()
{
    // Only for memoization fun
    for(int i=0;i<10;i++){
        F[i] = -1;
    }
    // memoization array defining ends
    int n;
    cout<<"enter terms you want in fibonacci series";
    cin>>n;
    cout<<fib(n);

    return 0;
}
