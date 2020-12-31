/******************************************************************************

                             OOPS LIKE PROGRAMMING
                        
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// MAIN DOES USER INTERACTION REST BY FUNCTION
#include <iostream>

using namespace std;

class rect{     // in struct everythig public , in class by default private make it public
public:

    int l;
    int b;
    
void init(int len, int br){
    l = len;
    b = br;
}

int area(){
    return l*b;
}

int per(){
    return 2*(l+b);
}

};

int main()
{
    rect r;                  // = {0,0}; class can't be initialized like this 
    int len, br;
    cout<<"enter length and breadth"<<endl;
    cin>> len >> br;
    r.init(len,br);
    cout<<"area"<<r.area()<<endl;
    cout<<"perimeter"<<r.per()<<endl;
    
}