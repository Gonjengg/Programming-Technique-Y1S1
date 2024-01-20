//Dayang Farah Farzana binti Abang Idham (A23CS0071)
//Farra Nurzahin binti Zaharil Anuar (A23CS0079)
#include<iostream>
using namespace std;
void display(void);

int main() {
	int age, height, weight;
	char gender;
	float BMR;
	
	cout<<"Basal Metabolic Rate (BMR) Calculator\n\n";
	
	do {
		cout<<"Age [15-80]: ";
		cin>>age;
	}while(age<15 || age>80);
		
	do {
		cout<<"Gender [F @ M]: ";
		cin>>gender;
	}while(gender!='F' && gender!='f'&& gender!='M' && gender!='m');
	
	cout<<"Height (cm): ";
	cin>>height;
	cout<<"Weight(kg): ";
	cin>>weight;
	
	if(gender=='M'&&gender=='m')
		BMR= (10*weight)+(6.25*height)-(5*age)+5;
	else 
		BMR= (10*weight)+(6.25*height)-(5*age)-161;
	
	cout<<"\n\nBMR: "<<BMR<<" Calories/day (using Mifflin-St Jeor Equation)\n\n";
	
	display();
	
	cout<<"\nThank you :)";
}

void display (void)
{
	char yon;
	
	cout<<"Daily calorie needs based on activity level\n\n";
	cout<<"Activity Level\t\t\t\t\t\tCalorie\n";
	cout<<"Sedentary: little or no exercise\t\t\t1,727\n";
	cout<<"Exercise 1-3 times/week\t\t\t\t\t1,979\n";
	cout<<"Exercise 4-5 times/week\t\t\t\t\t2,108\n";
	cout<<"Daily exercise or intense exercise 3-4 times/week\t2,230\n";
	cout<<"Intense exercise 6-7 times/week\t\t\t\t2,482\n";
	cout<<"Very intense exercise daily, or physical job\t\t2,734\n\n";
	cout<<"Exercise: 15-30 minutes of elevated heart rate activity.\n";
	cout<<"Intense exercise: 45-120 minutes of elevated heart rate activity.\n";
	cout<<"Very intense exercise: 2+ hours of elevated heart rate activity.\n\n";
	cout<<"Do you want to enter other data? [Y @ N]: ";
	cin>>yon;
	
	if(yon!='Y'&&yon!='y'&&yon!='N'&&yon!='n'){
		cout<<"Do you want to enter other data? [Y @ N]: ";
		cin>>yon;
	}
	
}
