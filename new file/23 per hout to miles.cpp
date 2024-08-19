#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

cout << "Convert kilometers per hout to miles per hour : "<<endl;
cout<< "-----------------------------------------------------------------\n";

int x;
cout << "Input the distance in kilometer : ";
cin >>x; cout<<endl;
float mil;
mil=x*0.621371; // 1km/h to miles per hour: 0.621371;

cout<< "The "<<x<<" km./hr. means "<<mil<< " Miles/hr."<<endl;







return 0;
}
