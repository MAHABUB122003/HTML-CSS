
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
cout << "x^2 +y^2 low"<<endl;
float x, y;
cout << "input x  int number : "; cin>>x; cout<<endl;
cout << "input y  int number : "; cin>>y; cout<<endl;

double low;
low= (x*x)+ 2*x*y + (y*y);

cout << "x^2 + y^2 low answer : "<<low <<endl<<endl;

cout << "---------------------------------"<<endl;
cout <<endl;


cout << "calculate the volume of a cube"<< endl;
cout << "------------------------------------------"<<endl;

int x1;

cout << "input the x number : ";cin>>x1; cout<<endl;

cout << "Input the side of a cube: "<<x1 <<endl;
cout << "The volume of a cube is :"<< x1*x1*x1<<endl;

cout << "calculate the volume of a cylinder : "<<endl;
cout << "------------------------------------------------"<<endl;
int radius;
int height;
double pi=3.1416, v;

cout << "Input the radius :";cin>> radius; cout <<endl;
cout << "Input the height :";cin>> height; cout <<endl;

v=pi*radius*radius*height;

cout << "Input the radius :"<<radius<<endl;
cout << "Input the height :"<<height<<endl;
cout << "THe volume of a cylinder is : "<<v<<endl<<endl;

// the volume of cylinder is pi*r^2*h;
// cylinder volume is pi*r^2*h;





return 0;
}
