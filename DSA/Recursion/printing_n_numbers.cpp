#include <iostream>
using namespace std; 

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int n;
    cout<<"Please enter the number till which you want to print the natural number series"<<endl;
    cin>>n;
    fun(n);
    return 0; 
}