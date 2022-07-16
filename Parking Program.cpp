/*
Requirements
There are three types of cars to be parked in Parking

Riskshaw -> Amount = 100
Normat Car -> Amount = 200
Buses -> Amount = 300
Max number of vehicles to be parked is 50

I should be able to see the records( total amount + no. of vehicles which are parked in parking).

I should be able to delete the whole record.

Working Type: Runtime(without Database)
*/



#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	double amount=0,TV=0;
	int R,C,B,ch;
	int l=1;
	R=C=B=0;
	cout<<"\n\n\t\tchoice  Vehicle Type \n\n";
	cout<<"\n 1. Rickshaw   = Rs. 100\n";
	cout<<" 2. Normal car = Rs. 200\n";
	cout<<" 3. Buses      = Rs. 300\n";
	cout<<" 4. All details & Parking Status\n ";
	cout<<"5. Delete All Record ";
	while(l==1)
	{
	    cout<<"\n\n Choice  Parked Vehicel = ";
	    cin>>ch;
	 if(TV<=50)
		{
			if(ch==1)
	          	{
					amount+=100;
					TV++;
					R++;
				}
			else if(ch==2)
				{
					amount+=200;
					TV++;
					C++;
				}
			else if(ch==3)
				{
					amount+=300;
					TV++;
					B++;
				}
			else if(ch==4)
				{
					cout<<"\n\nTotal vehicle = "<<TV<<endl;
					cout<<"Total Rickshaw = "<<R<<endl;
					cout<<"Total Cars = "<<C<<endl;
					cout<<"Total Buses = "<<B<<endl;
		
					cout<<"\n\n******************************\n\n";
					cout<<"Total Amount = "<<amount;
					cout<<"\n\n******************************\n";
				}
			else if(ch==5)
				{
					TV=R=C=B=amount=0;
					cout<<"\t\n\nRecod Successfully Delete \n";
					cout<<"Total vehicle = "<<TV<<endl;
					cout<<"Total Rickshaw = "<<R<<endl;
					cout<<"Total Cars = "<<C<<endl;
					cout<<"Total Buses = "<<B<<endl;
		
					cout<<"\n\n******************************\n\n";
					cout<<"Total Amount = "<<amount;
					cout<<"\n\n******************************\n";
				}
			else 
				{
					cout<<"\n\nInvalid choice";
				}
			
			cout<<"Done";
			
		}
	else
		{
			cout<<"\n\nParking is Full ";
			cout<<"\n Parking Closed";
		}
		
	
		
	}
	getch();
	return 0;
}
	
	
