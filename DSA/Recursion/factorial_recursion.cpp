#include <iostream>
using namespace std; 

int fac(int n)
{
    if(n>0)
    {
        return fac(n-1)*n;
    }
    else{
        return 1;
    }
}
int main(){
    int r = -5;
    cout<<fac(r);
    return 0; 
}