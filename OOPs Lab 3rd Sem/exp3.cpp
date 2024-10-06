//AIM: Decleare a class to repsresnt bank account of 10 customers with following data. name, account no., type of accounts, balance amount.
/*----------------------------*/
#include<iostream>
#include<math.h>

using namespace std;

class account{
    char dp_name;
    int accno;
    char type;
    float balance;
    
    public:
    void input();
    void deposit();
    void withdraw();
    void display_bal();
};

void account::input(){
    cout<<"Enter depositor name"<<endl;
    cin>>dp_name;
    cout<<"Enter account no."<<endl;
    cin>>accno;
    cout<<"Enter account type - 'S' for saving & 'C' for current"<<endl;
    cin>>type;
    cout<<"Enter initial balance"<<endl;
    cin>>balance;
    
}

void account::deposit(){
    int x;
    cout<<"Amount to be deposited:\n";
    cin>>x;
    balance+=x;
}

void account::withdraw(){
    int x;
    cout<<"Amount to be withdrawn:\n";
    cin>>x;
    if (balance>=1000){
        balance-=x;
    }
    else{
        cout<<"This withdraw is not permitted. Balance will be less than 1000 after this operation.";
    }
}

void account::display_bal(){
        cout<<"Depositor's name: "<<dp_name<<endl;
        cout<<"Account number: "<<accno<<endl;
        cout<<"Balance: "<<balance<<endl;
}

int main(){
    account A;
    A.input();
    A.deposit();
    A.withdraw();
    A.display_bal();
}