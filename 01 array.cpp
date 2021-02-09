/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array";
    cin>>n;
    // GIVES ERROR int A[n] = {3, 4}; WRONG DECLARATION
    int A[n]; // CORRECT INITIALIZATION
    // variable size array // CORRECT DECLARATION
    A[0] = 10;
    A[1] = 12;
    A[8] = 4;
    for(int x:A)
    {
        cout<<x<<endl;
    }
    
    //OR  variable size array  // CORRECT DECLARATION
    /* for (int i=0; i<n; i++)
    {
        int number;
        cout << "Enter number"<<i;
        cin >> number;
        A[i] = number;
    }
    for(int x:A)
    {
        cout<<x<<endl;
    }
    //Normal array
/*    int A[10] = {2,4,6,8,10,23,34};
    for(int i=0; i<10; i++)
    {
        // cout<<i<<endl;
        // printf("%d", i);
    }
 /*for(int x:A)
  {
        cout<<x<<endl;
    }

    return 0;*/
}
