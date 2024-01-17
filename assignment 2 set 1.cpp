#include <iostream>
using namespace std;

int main()
{
	int integer,j,k,total=0;
	bool i=true;
	
	cout<<"Enter an integer number : ";
	cin>>integer;
	
	k=integer;
	
	do
	{
		j=integer%10;
		total+=j;
		
		if(i)
		{
			cout<<j;
			i=false;
		}
		else
		cout<<"+"<<j;
				
		integer=integer/10;
		
	}while(integer>0);
	
	cout<<"="<<total<<"\n";
	
	if((total%5==0)&&(total%4!=0)&&(total%3!=0))
	cout<<""<<total<<" is a multiple of 5";
	
	else if((total%5!=0)&&(total%4!=0)&&(total%3==0))
	cout<<""<<total<<" is a multiple of 3";
	
	else if((total%5!=0)&&(total%4==0)&&(total%3!=0))
	cout<<""<<total<<" is a multiple of 4";
	
	else if((total%5!=0)&&(total%4==0)&&(total%3==0))
	cout<<""<<total<<" is a multiple of 3 and 4";
	
	else if((total%5==0)&&(total%4==0)&&(total%3!=0))
	cout<<""<<total<<" is a multiple of 4 and 5";
	
	else if((total%5==0)&&(total%4!=0)&&(total%3==0))
	cout<<""<<total<<" is a multiple of 3 and 5";
	
	else if((total%4==0)&&(total%3==0)&&(total%5==0))
	cout<<""<<total<<" is a multiple of 3,4 and 5";
	
	return 0;
}
