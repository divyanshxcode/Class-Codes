//AIM: Using concept of function overloading, compute area of triangle, area of rectangle and area of circle
/*----------------------------*/
#include<iostream>
#include<math.h>

using namespace std;

int area(int x, int y){
    return x*y;    
}

double area(int x,int y, int z){
    double s=(x+y+z)/2;
    return sqrt(s*(s-x)*(s-y)*(s-z));
}

double area(int x){
    return 3.14*x*x;
}

int main(){
    cout<<"Area of circle - "<<area(2)<<endl;
    cout<<"Area of rectangle - "<<area(5,4)<<endl;
    cout<<"Area of triangle - "<<area(3,5,4)<<endl;
    return 0;
}