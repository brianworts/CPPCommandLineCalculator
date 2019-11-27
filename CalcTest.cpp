/*******************************************************
* Name      : <Brian Worts>
* Course    : CSC 215-05
* Date      : Spring 2018
* Professor : DeGood
* 
* Assignment: <Project #1>
********************************************************/
//This code creates an 8 function calculator
#include <iostream>
#include <cmath>

using namespace std;

class Calculator {
 public:
 void add(); // r1 = r1 + r2
 void sub(); // r1 = r1 - r2
 void mul(); // r1 = r1 * r2
 void div(); // r1 = r1 / r2
 void Sin(); // r1 = sin(r1)
 void Cos(); // r1 = cos(r1)
 void Tan(); // r1 = tan(r1)
 void Sqrt(); // r1 = sqrt(r1)
 double getR1();
 double getR2();
 void setR1(double x);
 void setR2(double y);
 Calculator(); // default constructor
 
 private:
 double r1;
 double r2;
};

void Calculator::add()
{
	r1=r1+r2;
};

void Calculator::sub()
{
	r1=r1-r2;
};

void Calculator::mul()
{
	r1=r1*r2;
};
void Calculator::div()
{
	r1=r1/r2;
};
void Calculator::Sin()
{
	r1=sin(r1);
};
void Calculator::Cos()
{
	r1=cos(r1);
};
void Calculator::Tan()
{
	r1=tan(r1);
};
void Calculator::Sqrt()
{
	r1=sqrt(r1);
};
double Calculator::getR1()
{
	return r1;
};
double Calculator::getR2()
{
	return r2;
};
void Calculator::setR1(double x)
{
	r1 = x;
};
void Calculator::setR2(double y)
{
	r2 = y;
};

Calculator::Calculator() //Constructor declaration
{
	r1 = 0;
	r2 = 0;
}

int main() {
	
	Calculator command; //creates command object of the Calculator class
	
	string userInput;
	
	while (true)
	{
		cout << "Possible Operations: \"R1 #\"|\"R2 #\"|+|-|*|/|sin|cos|tan|sqrt|quit" 
		<< endl << "R1: " << command.getR1() << " R2: " << command.getR2()<<endl<<"Input: ";
	
		//IMPLEMENT   ----   Make input if input == "R2 = #", run set R2.  Use || or &&?
		
		cin >> userInput;
		
		if (userInput == "R1")
		{	
			auto temp;
			cin >> temp;
				if (isdigit(temp)){
				command.setR1(temp);}
				else {
					cout<<"Please enter a number value";
				}
		}
		else if (userInput == "R2")
		{
			double temp;
			cin >> temp;
			command.setR2(temp);
		}
		else if (userInput == "+")
		{
			command.add();
		}
		else if (userInput == "-")
		{
			command.sub();
		}
		else if (userInput == "*")
		{
			command.mul();
		}
		else if (userInput == "/")
		{
			command.div();
		}
		else if (userInput == "sin")
		{
			command.Sin();
		}
		else if (userInput == "cos")
		{
			command.Cos();
		}
		else if (userInput == "tan")
		{
			command.Tan();
		}
		else if (userInput == "sqrt")
		{
			command.Sqrt();
		}     
		else if (userInput == "quit")
		{
			break;
		}
		else
		{ 
			cout << "Invalid input" << endl;
		}
			
		
		}//end of while loop
	
	return 0;
	
} // end of main()

