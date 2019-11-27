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
 public: //Function declarations
 void add(); // r1 = r1 + r2
 void sub(); // r1 = r1 - r2
 void mul(); // r1 = r1 * r2
 void div(); // r1 = r1 / r2
 void Sin(); // r1 = sin(r1)
 void Cos(); // r1 = cos(r1)
 void Tan(); // r1 = tan(r1)
 void Sqrt(); // r1 = sqrt(r1)
 double getR1(); //return r1;
 double getR2(); //return r2
 void setR1(double x); //r1=x
 void setR2(double y); //r2=y
 Calculator(); // default constructor
 
 private: //Data declarations
 double r1; //Input 1 and calculation output
 double r2; //Input 2
};

//Function definitions
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

Calculator::Calculator() //Constructor declaration. Sets initial values of r1 and r2. Called when object is created
{
	r1 = 0;
	r2 = 0;
}

int main() {
	
	Calculator command; //creates object of the Calculator class called "command"
	
	string userInput;
	
	while (true) //Runs until "break command"
	{
		cout << "Possible Operations: \"r1 #\"|\"r2 #\"|+|-|*|/|sin|cos|tan|sqrt|quit"  // User Interface
		<< endl << "r1: " << command.getR1() << " r2: " << command.getR2()<<endl<<"Input: ";
		
		cin >> userInput;
		
		if (userInput == "r1") //Takes input and runs SetR1 function to give assign it to R1
		{
			double temp;
			cin >> temp;  //Entering a non-number causes program to crash. Same for r2
			command.setR1(temp);
		}
		else if (userInput == "r2")
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
		else if (userInput == "quit") //breaks out of while loop
		{
			break;
		}
		else
		{ 
			cout << "Invalid input" << endl; //Entering multiple invalid inputs (using spaces) causes function to run multiple times in succession.
		}
			
		
		}//end of while loop
		
		cout<< "Goodbye!";
	
	return 0;
	
} // end of main()

