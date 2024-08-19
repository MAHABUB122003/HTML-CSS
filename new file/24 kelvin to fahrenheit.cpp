#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

cout << "Convert temperatur in Kelvin To fahrenheit :"<<endl;
cout<< "----------------------------------------------------\n";

int kel;

cout << "Input the temperature in kelvin : ";
cin>>kel; cout <<endl;

double fah;
fah=(1.8* (kel-273.15))+32;

cout << "The temperature in kelvin : "<<kel<<endl;
cout << "The temperature in fahrenheit : "<<fah<<endl;




return 0;
}
