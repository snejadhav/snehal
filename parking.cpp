#include<iostream>
using namespace std;

int main()
{
	int input;
	int amount=0,count=0;
	int Max;
	int bikeCount=0,carCount=0,busCount=0,rikshawCount=0;
	cout<<"WELCOME"<<endl;
	while(true)
	{
		cout<<"********************************"<<"\n";
		cout<<"Press 1 for Bike."<<endl;
		cout<<"Press 2 for Car."<<endl;
		cout<<"Press 3 for Rikshaw."<<endl;
		cout<<"Press 4 for Bus."<<endl;
		cout<<"Press 5 for Record."<<endl;
		cout<<"Press 6 to Delete the record."<<endl;
		cout<<"********************************"<<"\n";
		
		cin>>input;	
		
		
		if(input==1)
		{
			if(Max<=50)
			{
				cout<<"Bike is added to the record"<<"\n";
				amount=amount+30;
				count++;
				bikeCount++ ;
				cout<<"Total number of bikes in the parking are:"<<bikeCount<<"\n";
			}
			else
			cout<<"Parking is full,please wait,Thank you!!"<<endl;
		}
		
		else if(input==2)
		{
			if(Max<=50)
			{
				cout<<"Car is added to the record"<<"\n";
				amount=amount+50;
				count++;
				carCount++;
				cout<<"Total number of cars in the parking are:"<<carCount<<"\n";
			}
			else
			cout<<"Parking is full,please wait,Thank you!!"<<endl;
		}
		
		else if(input==3)
		{
			if(Max<=50)
			{
				cout<<"Rikshaw is added to the record"<<"\n";
				amount=amount+30;
				count++;
				rikshawCount++;
				cout<<"Total number of rikshaw in the parking are:"<<rikshawCount<<"\n";
			}
			else
			cout<<"Parking is full,please wait,Thank you!!"<<endl;
		}
		
		else if(input==4)
		{
			if(Max<=50)
			{
				cout<<"Bus is added to the record"<<"\n";
				amount=amount+100;
				count++;
				busCount++;
				cout<<"Total number of bus in the parking are:"<<busCount<<"\n";
			}
			else
			cout<<"Parking is full,please wait,Thank you!!"<<endl;
		}
		
		else if(input==5)
		{
			cout<<"********************************"<<"\n";
			cout<<"THE PARKING RECORD IS:"<<endl<<"\n";
			cout<<"The total no of vehicles in parking is:"<<count<<"\n";
			cout<<"The total amount is:"<<amount<<"\n";
			cout<<"The total no. of rikshaw are: "<<rikshawCount<<"\n";
			cout<<"The total no. of bikes are: "<<bikeCount<<"\n";
			cout<<"The total no. of Cars are: "<<carCount<<"\n";
			cout<<"The total no. of buses are: "<<busCount<<"\n";
			cout<<"********************************"<<"\n";
					}		
					
		else if(input==6)
		{
			cout<<"********************************"<<"\n";
			cout<<"THE RECORD IS DELETED"<<"\n";
			cout<<"********************************"<<"\n";
			amount=0;
			count=0;
			bikeCount=0;
			carCount=0;
			rikshawCount=0;
			busCount=0;
			
			}	
	}
	
	
	return 0;
}
