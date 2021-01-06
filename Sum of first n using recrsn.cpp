/******************************************************************************

                              SUM FOR FIRST N NATURAL NUMBER USING RECRSION(NOT RECOMMENDED)
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int sum(int n)
{
    if (n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}
int main()
{
    int n;
    cout<<"Enter value of n";
    cin>>n;
    int O = sum(n);
cout<<O;
    return 0;
}
