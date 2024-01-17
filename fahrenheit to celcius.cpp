#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void readFile(const string &fahrenheitFile, float fahrenheit[], int &num_data);
void computeC(float fahrenheit[], float celcius[], int num_data);
float average(float celcius[], int &num_data);
char grade(float celcius[], int &num_data, char grade_celcius[]);
void writeFile(float fahrenheit[], float celcius[], int num_data, char grade_celcius[]);

int main()
{
	const int i = 100;
	int  numH = 0, numM = 0, numL = 0, num_data;
	float fahrenheit[i], celcius[i], avrg;
	char grade_celcius[i];
	
    readFile("fahrenheitFile.txt", fahrenheit, num_data);
    computeC(fahrenheit, celcius, num_data);
	avrg = average(celcius, num_data); 
	grade(celcius, num_data, grade_celcius); 
	
	for(int i=0;i<num_data;i++)
	{
		if(grade_celcius[i] == 'H')
		++numH;
		
		else if(grade_celcius[i] == 'M')
		++numM;
		
		else if(grade_celcius[i] == 'L')
		++numL;
	} 
	 
	writeFile(fahrenheit, celcius, num_data, grade_celcius);
	
	cout<<"Average of the temperature in Celcius : "<<fixed<<setprecision(1)<<avrg<<"\n";
	cout<<"Number of high temperature : "<<numH<<"\n";
	cout<<"Number of medium temperature : "<<numM<<"\n";
	cout<<"Number of low temperature : "<<numL<<"\n";
}

void readFile(const string &fahrenheitFile, float fahrenheit[], int &num_data)
{
	int i = 0 ;
	
	ifstream inputFile;
	inputFile.open("fahrenheitFile.txt");
	
	if (!inputFile)
	{
		cout << "While opening a file an error is encountered" << endl;
	}	
	else
	cout << "File is successfully opened" << endl; 
	
	num_data = 0;
	 while (inputFile >> fahrenheit[i])
    {
        num_data++;
        i++; 
    }

	inputFile.close();
}

void computeC(float fahrenheit[], float celcius[], int num_data)
{
    for (int i = 0; i < num_data; i++)
    {
        celcius[i] = (5.0 / 9.0) * (fahrenheit[i] - 32);
    }
}

float average(float celcius[], int &num_data)
{
	float sum_celcius,avrg;
	int i;
	sum_celcius = 0;
	
	for(i=0;i<num_data;++i)
	{
		sum_celcius += celcius[i];
	}
	avrg = sum_celcius/static_cast<float>(num_data);
	return avrg;
}

char grade(float celcius[], int &num_data, char grade_celcius[])
{
	
	int i;
	for( i = 0; i<num_data;i++)
	{
		if(celcius[i]>=35)
		grade_celcius[i] = 'H';

		
		else if((celcius[i]<35)&&(celcius[i]>=20))
		grade_celcius[i] = 'M';
		
		else
		grade_celcius[i] = 'L';
		
	}
	return grade_celcius[i];
}

void writeFile(float fahrenheit[], float celcius[], int num_data, char grade_celcius[])
{
	int i;
	
	ofstream outputFile;
	outputFile.open("celciusFile.txt");
	
	outputFile<<setw(15)<<"C(Celcius)"<<setw(15)<<"F(Fahrenheit)"<<setw(15)<<"Description\n";
	outputFile<<setw(15)<<"=========="<<setw(15)<<"============"<<setw(15)<<"===========\n";
	for (int i = 0; i < num_data; i++)
    {
        outputFile << setw(13)<<fixed<<setprecision(2)<<celcius[i]<<setw(14)<<fixed<<setprecision(2)<<fahrenheit[i] << setw(13) << grade_celcius[i] << "\n";
    }
	
	outputFile.close();
}
