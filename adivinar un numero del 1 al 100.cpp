#include<iostream>
#include<stdlib.h>
#include<time.h>


using namespace std;

int main()
{
	int numero,dato,contador=0;
	
	srand(time(NULL));//GENERAR NUMERO ALEATORIO
	dato=1+rand()%(100);
	do{
		cout<<"Digite un numero:\n";cin>>numero;
		if(numero>dato){
			cout<<"\nDigite un numero menor\n";
	}
		if(numero<dato)
		{
		cout<<"\nDigite un numero mayor\n";
		
		}
		contador++;
	}while(numero!=dato);
	
	cout<<"\nFelicidades\n";
	cout<<"Numero de intentos:"<<contador<<endl;
	system("pause");
	
	return 0;
}
