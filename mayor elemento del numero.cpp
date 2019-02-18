#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int numero[100],n=0,mayor=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<".-Digite un numero: ";
		cin>>numero[i];
		
		if(numero[i] > mayor)
		{
			mayor = numero[i];
		}
		
	}
	cout<<"\nEl mayor elemento del arreglo es :"<<mayor<<endl;
	
	system("pause");
	return 0;
}
