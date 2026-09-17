/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    using namespace std;
    int a,b,c;
    cout<<"Entre the values of a,b,c "<<endl;
    cin>>a>>b>>c;
    cout<<" a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
    
    if(a>b&&a>c)
    {
        cout<<"a is greater than b & c";
        
    }
    else if(b>a&&b>c)
    {
         cout<<"b is greater than a & c";
    }
    else
    {
         cout<<"c is greater than a & b";
    }
    return 0;
}