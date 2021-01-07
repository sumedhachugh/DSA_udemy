/******************************************************************************

                              Combination nCr
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

/*
// Using Loop


int fact(int n){
    int m = 1;
    if(n==0)
    return 1;
    for(int i=1;i<=n;i++){
        m = m*i;
    }
    return m;
}

int comb(int n, int r){
    if(r>n)
    cout<<"r can't be greater than n";
    int t0 = fact(n);
    int t1 = fact(r);
    int t2 = fact(n-r);
    return t0/(t1*t2);
}
*/

// Using Recursion (Makes use of pascal's triangle)

int comb(int n, int r){
    if(r>n)
    cout<<"r can't be greater than n";
    if(r==0 || n==r)
    return 1;
    return comb(n-1,r-1)+comb(n-1,r);
}

int main()
{
    int n,r;
    cout<<"enter total no. of terms (n)";
    cin>>n;
    cout<<"enter size of subset (r)";
    cin>>r;
    cout<< comb(n,r);

    return 0;
}
