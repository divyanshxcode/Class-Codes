#include<iostream>
using namespace std;

class A{
    int x,y;
    public:
    friend int add(A&);
    void getdata(){
        cout<<"\nX: ";
        cin>>x;
        cout<<"\nY: ";
        cin>>y;
    }
    void showdata(){
        cout<<"\nX "<<x;
        cout<<"\nY "<<y;
    }
};

int add(A& a){
    int A::*ptrx=&A::x;
    int A::*ptry=&A::y;

    return a.*ptrx+a.*ptry;
}

int main(){
    void (A::*Get)(void)=&A::getdata;
    void (A::*Show)(void)=&A::showdata;
    A *a1=new A;
    (a1->*Get)();
    (a1->*Show)();
    cout<<"\nThe sum is: "<<add(*a1);
    
    return 0;
}