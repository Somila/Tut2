#include <iostream>
#include "fraction.h"
using namespace std;
int fraction::getNum(){};
int fraction::getDen(){};
void fraction::setNum(int){};
void fraction::setDen(int){};

/*int fraction::GCD(fraction gcd){
	if (num != 0)
		return (num, num%den);
	else
		return den; 
};*/


int fraction::add(fraction add)
{

	return ((num*add.den+add.num*den), den*add.den);
};
int fraction::subtract(fraction sub)
{
	return (num*sub.den - sub.num*den, den*sub.den);
};
int fraction::multiply(fraction multiply)
{
	return (num*multiply.num, den*multiply.den);
};
int fraction::divide(fraction div)
{
	return (num*div.num, den*div.den);
};

void fraction::print()
{
	if (num == den)
	{
		cout << "answer is = " << num / den << endl;
	}
	else if (num>den)
	{
		cout << "answer is = " << num /den <<" "<<num%den<<"/"<<den<<endl;
	}
	else if (den ==1)
	{
		cout << "answer is = " << num << endl;
	}
	else
	{
		cout << "answer is = " << num <<"/" << den << endl;
	};

}const;


fraction fraction::operator+(fraction add)
{
	return fraction((num*add.den + add.num*den), den*add.den);
};
fraction fraction::operator-(fraction sub)
{
	return fraction (num*sub.den - sub.num*den, den*sub.den);
};
fraction fraction::operator/(fraction div)
{
	return fraction(num*div.num, den*div.den);
};
fraction fraction::operator*(fraction multiply)
{
	return fraction(num*multiply.num, den*multiply.den);
};