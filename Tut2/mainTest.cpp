#include<iostream>
#include"fraction.h"
using namespace std;
int main()
{
	int num1, num2, den1, den2;

	cout << "fraction1 numarator please" << endl;
	cin >> num1;

	cout << "fraction1 denominator please" << endl;
	cin >> den1;

	cout << "fraction2 numarator please" << endl;
	cin >> num2;

	cout << "fraction2 denominator please" << endl;
	cin >> den2;

	  
	fraction fract1;
	fraction fract2;
	fraction ans1, ans2, ans3, ans4;
	ans1 = fract1 + fract2;
	ans2 = fract1 - fract2;
	ans3 = fract1 * fract2;
	ans4 = fract1 / fract2;

	ans1.print();
	ans2.print();
	ans3.print();
	ans4.print();
	system("pause");
	return 0;
}