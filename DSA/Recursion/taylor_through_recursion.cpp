#include <iostream>
using namespace std; 

double e(double x, double n){
    static double p = 1, f = 1;
    double r;
    if(n == 0)
    {
        return 1;

    }
    else{
        r = e(x,n-1);
        p = p*x;
        f = f*n;
        return r + p/f;
    }
}

int main(){
    cout<<"The taylor series for e(1,10) is "<<e(3,10);
    return 0; 
}