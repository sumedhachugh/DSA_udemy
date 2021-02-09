/******************************************************************************

                             PARAMETER PASSING
                        
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
/* CALL BY VALUE (USE WHEN WE WANT TO TAKE ACTUAL PARAMETERS AND RETURN A RESULT)
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
    a++
    cout<<a++
};
int main()
{
    int num1 = 10, num2 = 30, sum;
    sum = add(num1,num2);
    cout<<sum;
    return 0;
    cout<<num1
}
*/
/*
// CALL BY ADDRESS    MODIFIES ACTUAL PARAMETERS DIRECTLY  DOES NOT NEED TO RETURN ANYTHING 
// 
void swap(int *x,int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
};

int main()
{
    int num1 = 10, num2 = 30;
    swap (&num1,&num2);
    cout<<num1<<endl;
    cout<<num2<<endl;
    return 0;
}
*/
// CALL BY REFRENCE
void swap(int &x,int &y)
{
    int temp;
    temp = y;
    y = x;
    x = temp;
};

int main()
{
    int num1 = 10, num2 = 30;
    swap (num1,num2);
    cout<<num1<<endl;
    cout<<num2<<endl;
    return 0;
}
