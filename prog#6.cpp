#include<iostream>
using namespace std;

int main() {
	int markA, markB, markC, totalSum;
	float averageMark;
	cout<<"Please enter the mark of the first student: ";
	cin>>markA;
	cout<<"Please enter the mark of the first student: ";
	cin>>markB;
	cout<<"Please enter the mark of the first student: ";
	cin>>markC;
	totalSum = markA + markB + markC;
	averageMark = (float)totalSum / 3; // typecasting
	cout<<"The average mark of the three students is "<<averageMark;
	
}
