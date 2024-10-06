//AIM: Write a program to perform different functions like addition, subtraction, multiplication, division using inline function.
/*----------------------------*/
#include<iostream>
#include<math.h>

using namespace std;

class program{
    int a,b;
    char c;
    
  public: 
    void getdata(int x, int y){
        a=x;
        b=y;
    }
    void sum();
    void sub();
    void multiply();
    void divide();
};

inline void program::sum(){
    cout<<"Sum of "<<a<<" & "<<b<<" is: "<<a+b<<endl;
}

inline void program::sub(){
    cout<<"Difference of "<<a<<" & "<<b<<" is: "<<a-b<<endl; 
}
inline void program::multiply(){
    cout<<"Product of "<<a<<" & "<<b<<" is: "<<a*b<<endl; 
}     
inline void program::divide(){
    cout<<"Division of "<<a<<" & "<<b<<" is: "<<double(a/b)<<endl;
}
int main(){
    program p;
    p.getdata(10,45);
    p.sum();
    p.sub();
    p.multiply();
    p.divide();
}