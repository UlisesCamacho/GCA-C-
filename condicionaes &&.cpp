#include<iostream>

using namespace std;
int main()
{
	int edad;
	cout<<"Dame su edad: "; cin>>edad;
	
	if(edad>=18&&edad<=25)
	{
		cout<<"\nSu edad esta en el rango de [18-25]";
		
	}
	else{
		cout<<"\nSu edad no esta en dicho rango";
	}
	return 0;
	
	
}
