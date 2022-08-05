#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	char ch='y';
	int num1,num2,choice,result;
	while(ch=='Y'|| ch=='y')
	{
	cout<<"Please Enter First number: ";
	cin>>num1;
	cout<<"Please Enter Second number: ";
	cin>>num2;
	cout<<"Please enter your choice:\n";
	cout<<"1:for add two numbers\n"<<"2:for Subtract two numbers\n"<<"3:for sin of first number\n"<<"4:for cos of second number\n"<<"5:for square root of first number\n"<<"6:For multiplication\n"<<"7:To check the larger value\n";
	
	cin>>choice;
		 switch(choice)
	{
		case 1:
			cout<<num1+num2<<endl;
			result = num1+num2;
			cout<<"Result = "<<result<<endl;
			break;
		case 2:
			cout<<num1-num2<<endl;
			result = num1-num2;
			cout<<"Result = "<<result<<endl;
			break;
		case 3:
			cout<<sin(num1)<<endl;
			result = sin(num1);
			cout<<"Result = "<<result<<endl;
			break;
		case 4:
			cout<<cos(num2)<<endl;
			result = cos(num2);
			cout<<"Result = "<<result<<endl;
			break;
		case 5:
			cout<<sqrt(num1)<<endl;
			result = sqrt(num1);
			cout<<"Result = "<<result<<endl;
			break;
		case 6: 
		    cout<<num1*num2<<endl;
		    result = num1*num2;
			cout<<"Result = "<<result<<endl;
		    break;
		case 7:
			cout<<max(num1,num2)<<endl;
			result = max(num1,num2);
			cout<<"Result = "<<result<<endl;
			break;
		default:
			cout<<"Invalid choice\n";
			
	}
		cout<<"To continue press Y and any other key to exit:\n";
	    cin>>ch;
	}
}
