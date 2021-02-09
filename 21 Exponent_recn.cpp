/******************************************************************************

                              EXPONENT USING RECRSION (m^n)
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
/*int powe(int m,int n)
{
    if (n==0){
        return 1;
    }
    else
    {
        return powe(m,n-1)*m;
    } */

// Faster one with lesser multiplications

int powe(int m,int n)
{
    if (n==0)
        return 1;

    if(n%2 == 0)
        return powe(m*m,n/2);
    
    if(n%2 != 0)
        return m*powe(m*m,(n-1)/2);
  
}
int main()
{
    int m,n;
    cout<<"Enter the number";
    cin>>m;
    cout<<"Enter the power";
    cin>>n;
    int O = powe(m,n);
    cout<<O;
    return 0;
}
