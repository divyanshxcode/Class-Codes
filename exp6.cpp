//AIM: Write a prpgarm to find mean of two numbers using friend fucntion
/*----------------------------*/
#include<iostream>
using namespace std;

class B;
class A{
    int x;
    public:
    void getdata(){
        cin>>x;
    }
    friend float mean(A&, B&);
};

class B{
    int y;
    public:
    void getdata(){
        cin>>y;
    }
    friend float mean(A&, B&);  
};
float mean (A& a,B& b){
    return (float)(a.x+b.y)/2;
}
int main(){
    A a;
    B b;
    cout<<"Enter x"<<endl;
    a.getdata();
    cout<<"Enter y"<<endl;
    b.getdata();
    cout<<"The mean is "<< mean(a,b);
    return 0;
}