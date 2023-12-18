#include <iostream>
using namespace std; 

int power(int m, int n)
{
        if(n>0)
        {
            return power(m, n - 1)*m;
        }
        else{
            return 1;
        }

}


int power2(int m, int n)
{
    if(n>0)
    {
        if(n%2==0)
        {
            return power2(m*m, n/2);
        }

        else{
            return m*power2(m*m, (n-1)/2);
        }
    }
    else{
        return 1;
    }
}
int main(){
    int m = 2;
    int n = 5;
    cout<<power(m,n)<<endl;
    cout<<power2(m,n);
    return 0; 
}