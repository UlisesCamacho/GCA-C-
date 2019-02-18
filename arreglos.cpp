#include<iostream>

using namespace std;

int main(){
	
	int numeros[5]={1,2,3,4,5};
	int suma=0;
	
	for(int i=0;i<5;i++)
	{
		suma=suma+numeros[i];
	}
	cout<<"La suma de los elementos del arreglo: "<<suma<<endl;
	return 0;
}
