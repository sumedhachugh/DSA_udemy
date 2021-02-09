/******************************************************************************


                             STRUCTURE
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct rectangle

{
    int l;
    int b;
}; // globally declaring r1,r2,r3;

// or struct rectangle r1 =

int main()
{
    // locally declaring
    struct rectangle r1 = {10,5};
    cout<< sizeof(r1)<<endl;
    cout<<r1.l<<endl;
    cout<<r1.b<<endl;
    r1.l = 15;
    r1.b =7;
    cout<<"updated len"<< r1.l<<endl;
    cout<<"updated bre"<< r1.b<<endl;

    return 0;
}
