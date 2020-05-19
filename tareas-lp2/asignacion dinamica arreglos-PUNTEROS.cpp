#include <iostream>
#include<stdlib.h>//funciona new y delete
using namespace std;




int numCalif, *calif;
void PedirNotas (){
	cout<<"Ingrese el numero: "<<endl;
	cin>>numCalif;
	calif= new int[numCalif]; //crear arreglo
	for (int i=0; i<numCalif; i++){
		cout<<"Ingrese nota: "<<endl;
		cin>>calif[i];
	} 
	
}

void MostrarNotas (){
	cout<<"mostrar notas: "<<endl;
 	 for (int i=0;i<numCalif; i++){
	    cout<<calif[i]<<endl;	
	}
}

int main (){
	PedirNotas();
	MostrarNotas();
	delete [] calif; //liberamos el espacio en bytes anteriormente 
}
