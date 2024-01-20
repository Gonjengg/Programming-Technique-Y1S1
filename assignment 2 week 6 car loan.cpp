//Dayang Farah Farzana binti Abang Idham (A23CS0071)
//Farra Nurzahin bin Zaharil Anuar (A23CS0079)
#include <iostream>
using namespace std;
float calc(int, float, int rp, int model);
int main()
{
	int model,variants,region,pt,dp,rp;
	float ir,mi,result;
	char yon;
	
	cout<<"Proton Car Loan Calculator\n\n";
	cout<<"Model [1-X50, 2-Exora, 3-Persona] : ";
	cin>>model;
	cout<<"Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT] : ";
	cin>>variants;
	cout<<"Region [1-Peninsular Malaysia, 2-East Malaysia] : ";
	cin>>region;
	cout<<"Paint type [1-Metallic, 2-Solid, 3-Matte] : ";
	cin>>pt;
	
	cout<<"Car Info\n";
	if (model==1)
	cout<<"\nModel : X50";
	else if(model==2)
	cout<<"\nModel : Exora";
	else if(model==3)
	cout<<"\nModel : Persona";
	
	if (variants==1)
	cout<<"\nVariants : 1.6L Standard CVT";
	else if(variants==2)
	cout<<"\nVariants : 1.6L Premium CVT";
	
	if(region==1)
	cout<<"\nRegion : Peninsular Malaysia";
	else if (region==2)
	cout<<"\nRegion : East Malaysia";
	
	if(pt==1)
	cout<<"\nPaint type : Metallic";
	else if(pt==2)
	cout<<"\nPaint type : Solid";
	else if (pt==3)
	cout<<"\nPaint type : Matte";
	
	if(model==1)
	cout<<"\nPrice (MYR) : 88,700";
	else if(model==2)
	cout<<"\nPrice (MYR) : 62,800";
	else if (model==3)
	cout<<"\nPrice (MYR) : 54,600";
	
	cout<<"\n\n";
	cout<<"Down Payment : ";
	cin>>dp;
	cout<<"Interest Rate (%) : ";
	cin>>ir;
	cout<<"Repayment Period (in years) : ";
	cin>>rp;
	
	mi = calc(dp,ir,rp,model);
	
	cout<<"MONTHLY INSTALLMENT (MYR) : "<<mi;
	cout<<"\n\n";
	do
	{
		cout<<"Do you want to enter other data? [Y @ N] : ";
		cin>>yon;
	}while(yon!='Y'&&yon!='y'&&yon!='N'&&yon!='n');
	
	cout<<"\nThank you :)";
}

float calc(int dp,float ir,int rp,int model)
{
	int price;

	if(model==1)
	price = 88700;
	else if(model==2)
	price = 62800;
	else if (model==3)
	price = 54600;
	
	float loan=price-dp;
	float totalinterest=(ir/100)*loan*rp;
	float mi=(loan+totalinterest)/(rp*12);
	
	return mi;
}
