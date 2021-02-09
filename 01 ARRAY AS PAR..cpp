/******************************************************************************

                             ARRAY AS PARAMETERS
                        
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
/*
void fun (int B[ ], int n)
{
    //for(int x:B){                 For each loop can't be used here bcz B here is pointer to A, not an array
      //  cout<<x<<endl;
    // };
    
    for(int i=0;i<n;i++)
    {
        cout<<B[i]<<endl;
    }
};
int main()
{
    int A[] = {2,4,6,8,10};
    int n = 5;
    fun(A,n);
    
}
*/

// Function returning an array

int * fun(int size){
    int *p;
    p = new int[size];
    for(int i = 0; i<size; i++){
        p[i] = i+1;
    }
    return p;
};
int main()
{
    int *q;
    int n = 5;
    q = fun(n);
    
    for(int i=0;i<n;i++)
    {
        cout<<q[i]<<endl;
    }
}
