#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int sixsideddie()
{
	return (rand()%6)+1;
}
int main()
{
	int tempnumber =0;
	int ynumber =0;
	int dnumber=0;
	srand(time(0));
	int Devilsdecision = 1;
	char choice;
	cout<<"          Devil's Dice\n";
	cout<<"Your turn\n";
	cout<<"Pass(p) or Roll(r)\n";
	cin>>choice;

	while(choice!='q')
	{
	
	if (choice == 'r')
	{
		int x= sixsideddie();
		cout<<"You rolled..."<<x<<endl;
		tempnumber += x;
		if (x==1)
		{
		choice ='p';
		tempnumber=0;
		}
		else
		{
		cout<<"Your Total is.."<<(ynumber+tempnumber)<<endl;
		cout<<"Pass(p) or Roll(r)\n";
		}
	}
	if (choice == 'p')
	{
		ynumber+=tempnumber;
		tempnumber=0;
		if (ynumber >=100)
		{
			cout<<"You Won!!!!!!"<<endl;
			return 0;
		}
		cout<<"Devils turn\n";
		
		while(Devilsdecision ==1)
		{
		int x= sixsideddie();
		cout<<"Devil chooses to roll\n";
		cout<<"Devil rolled..."<<x<<endl;
		tempnumber+=x;
		if (x==1)
		{
			Devilsdecision=5;
			cout<<"Devil Busted\n";
			tempnumber=0;
			
		}
		else 
		{
		Devilsdecision= rand()%2;
		cout<<"Devil's Total is..."<<(dnumber+tempnumber)<<endl;
		if (Devilsdecision == 0)
		{
			dnumber +=tempnumber;
			tempnumber=0;
			if(dnumber>=100)
			{
				cout<<"The Devil Won!!!!!!"<<endl;
				return 0;
			}
			cout<<"Devil Passes\n";
		}

		}
		
		}
			choice = 'r';
			Devilsdecision = 1;
			
			cout<<"Your Turn\n";
			cout<<"Pass(p) or Roll(r)\n";
	}
	cin>>choice;



	}
	return 0;
}