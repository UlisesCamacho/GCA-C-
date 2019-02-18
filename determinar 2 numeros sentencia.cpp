
#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"Digite 2 numeros: ";
	cin>>n1>>n2;
	
	if(n1==n2)
	{
		cout<<"los numero son iguales";
	}
	else if(n1>n2){
		cout<<"El mayor es: "<<n1;
	}
	else{
		cout<<"El mayor es:"<<n2;
	}
	
	return 0;
}
