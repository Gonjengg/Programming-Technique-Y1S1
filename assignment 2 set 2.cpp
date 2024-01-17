#include <iostream>
using namespace std;

int main()
{
	int integer,j,total=0;
	bool i=true;
	
	cout<<"Enter an integer number : ";
	cin>>integer;
	
	while(integer>0)
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
	}
	
	cout<<"="<<total<<"\n";
	
	if((total%5==0)&&(total%4!=0)&&(total%2==1))
	cout<<""<<total<<" is odd number and multiple of 5";
	
	if((total%5==0)&&(total%4!=0)&&(total%2==0))
	cout<<""<<total<<" is even number and multiple of 5";
	
	else if((total%5!=0)&&(total%4!=0)&&(total%2==1))
	cout<<""<<total<<" is odd number and multiple of 3";
	
	else if((total%5!=0)&&(total%4!=0)&&(total%2==0))
	cout<<""<<total<<" is even number and multiple of 3";
	
	else if((total%5!=0)&&(total%4==0)&&(total%2==1))
	cout<<""<<total<<" is odd number and multiple of 4";
	
	else if((total%5!=0)&&(total%4==0)&&(total%2==0))
	cout<<""<<total<<" is even number and multiple of 4";
	
	else if((total%5!=0)&&(total%4==0)&&(total%2==1))
	cout<<""<<total<<" is odd number and multiples of 3 and 4";
	
	else if((total%5!=0)&&(total%4==0)&&(total%2==0))
	cout<<""<<total<<" is even number and multiples of 3 and 4";
	
	else if((total%5==0)&&(total%4==0)&&(total%2==1))
	cout<<""<<total<<" is odd number and multiples of 4 and 5";
	
	else if((total%5==0)&&(total%4==0)&&(total%2==0))
	cout<<""<<total<<" is even number and multiples of 4 and 5";
	
	else if((total%5==0)&&(total%4!=0)&&(total%2==1))
	cout<<""<<total<<" is odd number and multiples of 3 and 5";
	
	else if((total%5==0)&&(total%4!=0)&&(total%2==0))
	cout<<""<<total<<" is even number and multiples of 3 and 5";
	
	else if((total%4==0)&&(total%3==0)&&(total%2==1))
	cout<<""<<total<<" is odd number and multiples of 3,4 and 5";
	
	else if((total%4==0)&&(total%3==0)&&(total%2==0))
	cout<<""<<total<<" is even number and multiples of 3,4 and 5";
	
	return 0;
}
