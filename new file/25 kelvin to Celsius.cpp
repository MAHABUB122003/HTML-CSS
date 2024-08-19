#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

cout << "Convert temperature in Kelvin to Celsius: "<<endl;
cout << "--------------------------------------------------\n";


int kel;
cout << "Input the temperature in Kelvin : ";
cin>>kel; cout <<endl;
cout << "The temperature in Kelvin : "<<kel<<endl;
float cel;
cel=(kel-273.15);
cout<< "The temperature in Celsius : "<<cel<<endl;





return 0;
}
