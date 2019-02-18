#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	int suma=0,elevacion=0,n;
	cout<<"Dame el numero de N:"; cin>>n;
	for(int i=1;i<=n;i++)
	{
		elevacion=pow(2,i);
		suma=suma+elevacion; //suma+=elevacion;
		
	}
	cout<<"\nLa suma total es:"<<suma<<endl;
	system("pause");
	return 0;
}
