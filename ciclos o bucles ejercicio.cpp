

#include<iostream>

using namespace std;

int main(){
	int suma=0,cuadrado;
	
	for(int i=1;i<=10;i++)
	{
		cuadrado=i*i;
		suma=suma+cuadrado; //suma +=
	}
	
	cout<<"El resultado de la suma es:"<<suma<<endl;
	return 0;
}
