/*
bscit-05-0060/2024
bankaccount(encapsulation)
Justin Teri*/

#include<iostream>
#define PI 3.142

using namespace std;

double calculateVolume(double radius,double height){
    return PI*radius*radius*height;
}
int main(){
    double r,h;
    cout<<"Enter the radius of the cylinder: ";
    cin>>r;
    cout<<"Enter the height of the cylinder:";
    cin>>h;


    double volume =calculateVolume(r,h);
    cout<<"The volume of the cylinder is: "<<volume
    <<endl;
    return 0;
}