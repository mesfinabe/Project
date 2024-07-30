#include <iostream>
#include <cmath> 

using namespace std;


void myFunction(){
	cout << "I just got Excuted!" <<endl;
}

int main(){
	double number;
	double answor;
	cout << "Please Enter a number:   ";
	cin >> number;
	answor = sqrt(number);
	cout <<"The squer root of " << number <<" " <<"is equal to " << answor << endl;
	myFunction();
	
	return 0;
}

//Function Declaration and Defination


