#include<iostream>
#include<math.h>
using namespace std;
void Add();
void Sub();
void Square_root();
void Multiple();
int main ()
{   int choice;
	cout<<"1:for add two numbers\n"<<"2:for Subtract two numbers\n"<<"3:for square root of first number\n"<<"4:For multiplication\n";
	cout<<"Please enter your choice:";
	cin>>choice;
		 switch(choice)
	{
		case 1:
		    Add();
			break;
		case 2:
			Sub();
			break;
		
		case 3:
			Square_root();
			break;
		case 4: 
		    Multiple();
		    break;
	
		default:
			cout<<"Invalid choice\n";
			
	}

}
void Add()
{   
    int num1,num2;
     cout<<"Enter first number :";
     cin>>num1;
     cout<<"Enter second number :";
     cin>>num2; 
	cout<<"Result is "<<num1+num2<<endl;
}
void Sub()
{
 	 int num1,num2;
     cout<<"Enter first number :";
     cin>>num1;
     cout<<"Enter second number :";
     cin>>num2; 
	cout<<"Result is "<<num1-num2<<endl;
}
void Square_root()
{
	int num1;
	cout<<"Enter any number :";
	cin>>num1;
	cout<<"Result is "<<sqrt(num1);
	
}
void Multiple()
{
	 int num1,num2;
     cout<<"Enter first number :";
     cin>>num1;
     cout<<"Enter second number :";
     cin>>num2; 
	cout<<"Result is "<<num1*num2<<endl;
}
