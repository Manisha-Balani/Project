#include<iostream>
using namespace std;

class Customer{
	string name;
	public:
	Customer(){
		cout << "Enter the name of customer" << endl;
		cin >> name;
	}
	string getname(){
		return name;
	}
};

class Account{
	static long int no;
	long int n;
	public:
	Account(){
		n = no++;
	}
	long int getno(){
		return n;
	}
};

long int Account :: no = 1000;

class RBI{
	double interest_rate;
	double minimum_balance;
	double maximum_withdrawl;
	Customer c;
	Account a;
	public:
	RBI(double i=4.00, double b=1000, double w=25000):interest_rate(i),minimum_balance(b),maximum_withdrawl(w){}
	void print(){
		cout << c.getname() << " " << a.getno() << " " << interest_rate << " " << minimum_balance << " " << maximum_withdrawl << endl;
	}
};

class SBI : public RBI{
	public:
	SBI(double i=4.00, double b=1000, double w=25000) : RBI(i,b,w){}
};

class ICICI : public RBI{
	public:
	ICICI(double i=4.00, double b=1000, double w=25000) : RBI(i,b,w){}
};

int main(){
	SBI s1[5];
	ICICI c[3];
	for(int i = 0; i < 8; i++){
		s1[i].print();
	}
	return 0;
}
