/******************************************************************************

                             MODULAR / Procedural PROGRAMMING
                        
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// MAIN DOES USER INTERACTION REST BY FUNCTION
#include <iostream>

using namespace std;
int area(int l1,int b1){
    return l1*b1;
};

int per(int l2,int b2){
    return 2*(l2+b2);
};

int main()
{
    int l,b;
    cout<<"enter length and breadth"<<endl;
    cin>> l>>b;
    cout<<"area"<<area(l,b)<<endl;
    cout<<"perimeter"<<per(l,b)<<endl;
    
}
