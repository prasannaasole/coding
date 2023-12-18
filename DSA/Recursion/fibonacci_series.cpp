#include <iostream>
using namespace std; 


int fib(int n)
{
    static int ans;
    if(n==0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }

    else{
        return ans = fib(n-1)+fib(n-2);
        cout<<ans<<" ";
    }
}

void print(int n)
{
    cout<<fib(n)<<" ";
}
int main(){
    int n = 5;
    print(n);
    return 0; 
}