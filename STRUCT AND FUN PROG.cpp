/******************************************************************************

                             STRUCTURE AND FUNCTION PROGRAMMING
                        
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// MAIN DOES USER INTERACTION REST BY FUNCTION
#include <iostream>

using namespace std;

struct rect{
    int l;
    int b;
};
int area(rect r1){
    return r1.l*r1.b;
};

int per(rect r2){
    return 2*(r2.l+r2.b);
};

int main()
{
    rect r = {0,0};
    cout<<"enter length and breadth"<<endl;
    cin>> r.l>>r.b;
    cout<<"area"<<area(r)<<endl;
    cout<<"perimeter"<<per(r)<<endl;
    
}