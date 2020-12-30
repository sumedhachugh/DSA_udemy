/******************************************************************************

                             Pointer to structure
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
struct rect
{
    int l;
    int b;
};

int main()
{
    /*struct rect r = {10,5};
    cout<<r.l<<endl;
    cout<<r.b<<endl;
    
    rect *p = &r;
    cout<< p->l<<endl;
    cout<<p->b<<endl;*/
    
    // creating object in heap
    rect *p;
    p = new rect;
    p->l = 45;
    p->b = 23;
    cout<< p->l <<endl;
    cout<< p->b <<endl;
    
    return 0;
}
