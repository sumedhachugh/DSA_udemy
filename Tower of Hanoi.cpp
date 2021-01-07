/******************************************************************************

                            Tower of Hanoi using Recursion
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int TOH(int n,int A,int B,int C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("Move from %d to %d\n",A,C);
        TOH(n-1,B,A,C);
    }
return 0;

}
int main()
{
    int n;
    cout<<"enter total no. of disks";
    cin>>n;
    cout<< TOH(n,1,2,3);

    return 0;
}
