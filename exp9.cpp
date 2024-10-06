//AIM: Wite a program to perform string operations using operator overloading.
/*----------------------------*/
#include <iostream>
#include <cstring> 
using namespace std;

class strn {
private:
    char* str;  
    int length;

public:
    // Default constructor
    strn() : str(nullptr), length(0) {}

    // Parameterized constructor
    strn(const char* s) {
        length = strlen(s);
        str = new char[length + 1]; 
        strcpy(str, s);             
    }

    strn operator+(const strn& other) {
        strn temp;  
        temp.length = length + other.length; 
        temp.str = new char[temp.length + 1];

        strcpy(temp.str, str);
        strcat(temp.str, other.str);

        return temp;
    }
    
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {

    strn str1("Hello ");
    strn str2("OOPs");

    strn str3 = str1 + str2;
    str3.display();

    return 0;
}
