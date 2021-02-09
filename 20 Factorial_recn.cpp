/******************************************************************************

                              FACTORIAL USING RECRSION
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int fact(int n)
{
    if (n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int main()
{
    int n;
    cout<<"Enter value of n";
    cin>>n;
    int O = fact(n);
    cout<<O;
    return 0;
}
