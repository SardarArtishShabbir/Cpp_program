#include<iostream>
using namespace std; 
int main() 
{ 
   int mobile,amount,Choice,status,exit; 
     cout<<"WELCOME TO MY EASYPAISA PROGRAM\n";
     cout<<"Enter your choice:\npress 1 for easyload\npress 2 to for money transfer \npress 3 to check account status\npress 4 to exit  "; 
    cin>>Choice; 
   switch(Choice)
 { 
    case 1: 
	     cout<<"Enter your mobile number:"; 
         cin>>mobile; 
         cout<<"Enter ammount:"; 
         cin>>amount; 
        cout<<"Easyload done!";
        break; 
    case 2: 
        cout<<"Enter your mobile number:"; 
        cin>>mobile;
        cout<<"Enter amount:"; 
        cin>>amount; 
        cout<<"Amount transfered!";
        break; 
    case 3:
        cout<<"press 3 to check status";
        cin>>status;
	    cout<<"You have 5000 Rupees!"; 
	    break;
	case 4:
	    cout<<"press 4 to exit"; 
	    cin>>exit;
	    cout<<"Exit!"; 
    default: 
        cout<<"invalid input"; 
}
        cout<<"\nThanks for using";
 }
