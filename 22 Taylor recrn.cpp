/******************************************************************************

                              TAYLOR SERIES USING RECRSION (m^n)
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

    

/*double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if (n==0)
        return 1;
    else{
        r = e(x,n-1);
        p = p*x;
        f = f*n;
        r = r+(p/f);
        return r;
    }
    
}

// For faster mul
double e(int x,int n)
{
    static double s=1;
    if (n==0)
        return s;
    else{
        s= 1+(x*s/n);
    }
    return e(x,n-1);
}
*/

// USING LOOP 


double e(int x,int n)
{
    double s=1;
 int i;
 double num=1;
 double den=1;

 for(i=1;i<=n;i++)
 {
 num*=x;
 den*=i;
 s+=num/den;
 }
 return s;
}

int main()
{
    int x,n;
    cout<<"Enter the power";
    cin>>x;
    cout<<"Enter the number of terms upto which you want to add";
    cin>>n;
    double O = e(x,n);
    cout<<O;
    return 0;
}
