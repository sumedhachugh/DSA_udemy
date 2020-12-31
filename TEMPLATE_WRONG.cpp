/******************************************************************************

                             Template
                             CPP PROGRAMMING
                        
                             Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// MAIN DOES USER INTERACTION REST BY FUNCTION
#include <iostream>

using namespace std;
template <class T>
class rect{ 
    // in struct everythig public , in class by default private make it public
private:

    T l;
    T b;
public:
rect(){
    l = 0;
    b=0;}; // default constructor if user doesn't pass a value
rect (T len, T br);// parameterized Constructor
T area();
T per();

// getlength, set etc. can also be used oops like (Mutators, destructor and Accesors)

};
template <class T>
rect :: rect(T len, T br){
    l = len;
    b = br;
}
template <class T>
T rect <T>:: area(){
    return l*b;
}
template <class T>
T rect<T> :: per(){
    return 2*(l+b);
}



int main()
{
    rect <int>r(10,5);                  // Calling constructor with initial l = 10, b=5
    
    cout<<"area"<<r.area()<<endl;
    cout<<"perimeter"<<r.per()<<endl;
    
}