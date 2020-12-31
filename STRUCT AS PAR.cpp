/******************************************************************************

                             STRUCTS AS PARAMETERS

                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


// struct rect{
   //  int l;
    //int b;
// };

/* CALL BY VALUE
void fun (rect r2){
    r2.l++;
    cout<<r2.l<<endl;
    cout<<r2.b<<endl;
};
int main()
{
    rect r1 = {10,5};
    cout<<r1.l<<endl;
    cout<<r1.b<<endl;
    fun(r1);
} */


/* CALL BY ADDRESS
void fun (rect *r2){
    r2->l = 12;
    cout<<r2->l<<endl;
    cout<<r2->b<<endl;
};
int main()
{
    rect r1 = {10,5};
    fun(&r1);
    cout<<r1.l<<endl;
    cout<<r1.b<<endl;
}

*/

//  PASSING STRUCT CONTAINING HEAP

struct rect{
    int l;
    int b;
};

struct rect *fun()
{
    rect *p;
    p = new rect;
    p->l = 23;
    p->b = 13;
    return p;
};

int main()
{
    rect *q = fun();
    cout<<q->l;
    cout<<q->b;

}
