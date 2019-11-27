/*******************************************************
* Name      : <Brian Worts>NOT FOR GRADE
* Course    : CSC 215-05
* Date      : Spring 2018
* Professor : DeGood
* 
* Assignment: <Project #1>
********************************************************/
//This code creates an 8 function calculator
//NOT FOR BEING GRADED
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
 double getResult();
 void setR1(double x);
 void setR2(double y);
 Calculator(); // default constructor
 
 private:
 double r1;
 double r2;
 double result;
};

void Calculator::add()
{
	result=r1+r2;
};

void Calculator::sub()
{
	result=r1-r2;
};

void Calculator::mul()
{
	result=r1*r2;
};
void Calculator::div()
{
	result=r1/r2;
};
void Calculator::Sin()
{
	result=sin(r1);
};
void Calculator::Cos()
{
	result=cos(r1);
};
void Calculator::Tan()
{
	result=tan(r1);
};
void Calculator::Sqrt()
{
	result=sqrt(r1);
};
double Calculator::getR1()
{
	return r1;
};
double Calculator::getR2()
{
	return r2;
};
double Calculator::getResult()
{
	return result;
}

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
	result = 0;
}

int main() {
	
	Calculator command; //creates command object of the Calculator class
	
	string userInput;
	
	while (true)
	{
		cout << "Possible Operations: \"R1 #\"|\"/R2 #\"|  (The following only use R1): |+|-|*|/|sin|cos|tan|sqrt|quit" 
		<< endl << "R1: " << command.getR1() << " R2: " << command.getR2()<<" Result: " << command.getResult() << endl<<"Input: ";
		
		cin >> userInput;
		
		if (userInput == "R1")
		{	
			double temp;
			cin >> temp;
			command.setR1(temp);
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

