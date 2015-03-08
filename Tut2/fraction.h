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
	int subtract();
	int multiply();
	int divide();
	void print()const;
};
#endif
