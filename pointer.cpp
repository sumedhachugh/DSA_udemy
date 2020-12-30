/******************************************************************************

                             POINTER
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
    /* int a =10;
    int *p; // Declrn of POINTER
    p = &a; // storing adress of a in POINTER
    cout<< "value of a using pointer " << *p <<endl; // initilzn */
 /*   
    // Accessing array using pointer
    int A[5] = {2,4,6,8,10};
    int*p;
    p = A;
    
    for (int i =0; i<5; i++)
    {
        cout << i<<"th element of array using pointer"<< p[i]<<endl;
    }
    */
    
    // Accessing array in heap using pointer
    
    int *p;
    p = new int[5]; // dynamically created array in heap using pointer
    p[0] = 1; p[2] = 34; p[3] = 54; p[4] = 43; 
    for (int i =0; i<5; i++)
    {
        cout << i<<"th element of array in heap using pointer"<< p[i]<<endl;
    }
    delete [ ] p; // releasing dynamically allocated memory
    return 0;
}
