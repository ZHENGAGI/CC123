#include<iostream>
using namespace std;

int main () {
	int age;
	cout<<"Please enter your age: ";
	cin>>age;
	if(age > 17)
	     cout<<"Your are eligible to vote. your age is "<<age<<" years old.\n";
    else
         cout<<"Sorry! You are not eligible to vote! ";
}
