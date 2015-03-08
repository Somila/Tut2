//Header file-Class definition
#ifndef fraction_H
#define fraction_H
class fraction {
private:
	int num;                       //numarator
	int den;                       //denominator
public:
	fraction(int n = 0, int d = 1);  //default constructor
	//Set and get all data members
	int getNum();
	int getDen();  
	void setNum(int);
	void setDen(int);
	int add(fraction add);
	int subtract(fraction sub);
	int multiply(fraction multiply);
	int divide(fraction div);
	int GCD(fraction gcd);
	void print();
	fraction operator+(fraction add);
	fraction operator*(fraction multiply);
	fraction operator/(fraction div);
	fraction operator-(fraction sub);
};
#endif
