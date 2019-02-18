//CAJERO

#include<iostream>

using namespace std;

int main(){

	int  op;
	
	float extra,saldo,retiro,saldo_inicial=100;
	cout<<"Bienvenido al cajero virtual";
	cout<<"\n 1.-Ingresar dinero";
	cout<<"\n2.-Retirar dinero";
	cout<<"\n3.-Salir";
	cout<<"\nOpcion:";
	cin>>op;
	switch(op)
	{
		case 1: cout<<"Digite la cantidad de dinero"; cin>>extra;
		saldo = saldo_inicial + extra;
		cout<<"Dinero en cuenta: "<<saldo;
		break;
		case 2:
			cout<<"Digite la cantidad a retirar:"; cin>>retiro;
			if(retiro>saldo_inicial){
				cout<<"No tiene dinero suficiente";
				
			}
			else{
				saldo=saldo_inicial-retiro;
				cout<<"Dinero en cuenta"<<saldo;
				
			}
			break;
		case 3: break;
	}
	
	return 0;
}
