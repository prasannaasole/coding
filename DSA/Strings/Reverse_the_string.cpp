#include <iostream>
#include <vector>
using namespace std; 

void reverse(vector<char>& s)
{
   int i = 0; 
   int j = s.size()-1;
while(i<j)
{
    char a;
    a = s[i];
    s[i]=s[j];
    s[j] = a;
i++;
j--;
}
}

int main(){
    
    vector<char> s = {'H', 'E', 'L', 'L', 'O'};
    for(int i = 0; i< s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
   cout<<endl;
   cout<<endl;

   reverse(s);

  
    for(int i = 0; i< s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    return 0; 
}