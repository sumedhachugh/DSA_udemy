/******************************************************************************

                             Function
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
};
int main()
{
    int num1 = 10, num2 = 30, sum;
    sum = add(num1,num2);
    cout<<sum;
    return 0;
}
