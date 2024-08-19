#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

cout << "Find the Third Angle of a Traingle :"<<endl;
cout<<"-------------------------------------------------\n";

int x, y;

cout << "Input the  1st angle of the traiangle : ";
cin>>x; cout <<endl;
cout << "Input the  2nd angle of the traiangle : ";
cin>>y; cout <<endl;

int ang3;
ang3=180 -(x+y);


cout << "The 3rd of the triangle is : "<<ang3 <<endl<<endl;





return 0;
}
