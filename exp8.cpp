#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class comp{
    private:
        double re;
        double im;
    public:

        comp() : re(0), im(0) {}
        
        comp(double r, double i) : re(r), im(i) {}

        void showdata() const {
            cout << "\nReal Part: " << re;
            cout << "\nImaginary Part: " << im << endl;
        }


        comp operator+(const comp &obj) const {
            return comp(re + obj.re, im + obj.im);
        }

        comp operator-(const comp &obj) const {
            return comp(re - obj.re, im - obj.im);
        }

        comp operator*(const comp &obj) const {
            return comp((re * obj.re - im * obj.im), (re * obj.im + im * obj.re));
        }

        comp operator/(const comp &obj) const {
            double denominator = obj.re * obj.re + obj.im * obj.im;
            return comp((re * obj.re + im * obj.im) / denominator, (im * obj.re - re * obj.im) / denominator);
        }
};

int main() {
    comp c1(4, 5); 
    comp c2(2, 3);  
    
    cout << "First Complex Number:";
    c1.showdata();

    cout << "Second Complex Number:";
    c2.showdata();


    comp sum = c1 + c2;
    cout << "\nSum:";
    sum.showdata();


    comp diff = c1 - c2;
    cout << "\nDifference:";
    diff.showdata();


    comp prod = c1 * c2;
    cout << "\nProduct:";
    prod.showdata();


    comp div = c1 / c2;
    cout << "\nDivision:";
    div.showdata();

    return 0;
}
