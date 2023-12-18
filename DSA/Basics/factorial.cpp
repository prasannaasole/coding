    #include <iostream>
    using namespace std; 

    int fact(int n){
        if(n ==0)
        {
            return 1;
        }
        else
        {
        return n* fact(n-1);
        }
    }
    int main(){
        int n;
        cout<<"Please enter the number till which you want to have factorial:"<<endl;
        cin>>n;
    cout<< fact(n);
        return 0; 
    }