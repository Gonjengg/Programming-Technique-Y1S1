#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
	
void dispStatus(int);
void getInput(int&,int&,int&,int&);
void dispOutput(int);
float calcAverage(int, int);

int main()
{
	string state_name, highest_state_name;
	int total_cases, new_cases, total_death, total_recovered,active_cases, num_of_state=0,total_active_cases=0;
	int highest = -1;
	char press;
	float average;

	do
	{
	cout<<"\n<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>\n";
	cout<<"State name : ";
	getline(cin,state_name);
		
	getInput(total_cases, new_cases, total_death, total_recovered);
	active_cases = total_cases + new_cases - total_death - total_recovered;

	cout<<"\n<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>";	
	dispOutput(active_cases);
	
	cout<<"\n\nPress <ENTER> to continue...";
	cin.ignore();
	cin.get(press);
	++num_of_state;
	total_active_cases+=active_cases;
	
	if(active_cases>highest)
	{
	highest = active_cases;
	highest_state_name = state_name;
	}

	}while(isspace(press));
	
	average = calcAverage(total_active_cases, num_of_state);
	cout<<"\n<<<<<<<<< ACTIVE CASES >>>>>>>>>>";
	cout<<"\nTotal : "<<total_active_cases;
	cout<<"\nHighest : "<<highest<<" ("<<highest_state_name<<")";
	cout<<"\nAverage for "<<num_of_state<<" states : "<<average;
}

void dispStatus(int active_cases)
{	
	cout<<"\nActive cases : "<<active_cases<<"\n";

	if(active_cases>40)
	cout<<"Status : Red zone";
	
	else if((active_cases>20)&&(active_cases<41))
	cout<<"Status : Orange zone";
	
	else if((active_cases>0)&&(active_cases<21))
	cout<<"Status : Yellow zone";
	
	else
	cout<<"Status : Green zone";
}

void getInput(int& total_cases,int& new_cases,int& total_death,int& total_recovered)
{
	cout<<"Total cases : ";
	cin>>total_cases;
	
	cout<<"New Cases : ";
	cin>>new_cases;
	
	cout<<"Total death : ";
	cin>>total_death;
	
	cout<<"Total recovered : ";
	cin>>total_recovered;
}

void dispOutput(int active_cases)
{
	
	dispStatus(active_cases);
}

float calcAverage(int total_active_cases, int num_of_state)
{
	float average = static_cast <float> (total_active_cases)/num_of_state;
	return average;
}

































