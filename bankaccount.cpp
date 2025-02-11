/*
bscit-05-0060/2024
bankaccount(encapsulation)
Justin Teri*/

#include<iostream>

using namespace std;

class BankAccount{
    private:
    string accountHolder;
    double balance;
    public:
    //setter
    void setAccountHolder(string a){
        accountHolder=a;
    }
    void setBalance(double b){
        balance=b;
    }
    //getter
    string getAccountHolder(){
        return accountHolder;
    }
    double getBalance(){
        return balance;
    }

};
int main(){
    BankAccount b1;
    b1.setAccountHolder("Justine");
    cout<<"The AccountHolder is: "<<b1.getAccountHolder()<<endl;

    b1.setBalance(1000000);
    cout<<"The account balance is: "<<b1.getBalance()<<endl;
}