#include <iostream>
#define max 100
using namespace std;

int main(int argc, char *argv[]) {
	int nelementos,pos[max][2],vector[max],nmodificar;
	
	cout<<"Ingrese # de elementos: ";cin>>nelementos;
	for(int i=0;i<nelementos;i++){
		cout<<"Ingrese en la posicion "<<i<<" ";cin>>vector[i];
	}
	cout<<"Ingrese cantidad de elementos a modificar: ";cin>>nmodificar;
	if(nmodificar>nelementos)cout<<"Numero incorrecto";
	else{
	for (int i=0;i<nmodificar;i++){
		cout<<"Ingrese la posici�n del elemento "<<i+1<<" a modificar: ";cin>>pos[i][0];
		cout<<"Ingrese el n�mero para reemplazar: ";cin>>pos[i][1];
	}
	for (int i=0;i<nmodificar;i++){
		vector[pos[i][0]]=pos[i][1];
	}
	for(int i=0;i<nelementos;i++){
		cout<<"\nPosici�n "<<i<<" :"<<vector[i];
	}
	}
	return 0;
}

