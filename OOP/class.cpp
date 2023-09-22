#include <iostream>
using namespace std; 

class Rectangle{

int length;
int breadth;
public:
int getLength(){
    return length;
}
int setLength(int length){
    return this->length = length;
    
}
int getBreadth(){
    return breadth;
}
int setBreadth(int breadth){
    return this->breadth = breadth;
    
}
int area(){
    return getLength()*getBreadth();
}

};
int main(){
    Rectangle r;
   r.setLength(10);
   r.setBreadth(5);
    cout<<r.area()<<endl;
    return 0; 
}
