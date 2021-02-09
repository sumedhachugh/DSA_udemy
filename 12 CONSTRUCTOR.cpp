/******************************************************************************

                             Constructor
                             CPP PROGRAMMING
                        
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// MAIN DOES USER INTERACTION REST BY FUNCTION
#include <iostream>

using namespace std;

class rect{ 
    // in struct everythig public , in class by default private make it public
private:

    int l;
    int b;
public:
rect(){
    l = 0;
    b=0;}; // default constructor if user doesn't pass a value
rect(int len, int br);// parameterized Constructor
int area();
int per();

// getlength, set etc. can also be used oops like (Mutators, destructor and Accesors)

};

rect :: rect(int len, int br){
    l = len;
    b = br;
}
int rect :: area(){
    return l*b;
}

int rect :: per(){
    return 2*(l+b);
}



int main()
{
    rect r(10,5);                  // Calling constructor with initial l = 10, b=5
    
    cout<<"area"<<r.area()<<endl;
    cout<<"perimeter"<<r.per()<<endl;
    
}
