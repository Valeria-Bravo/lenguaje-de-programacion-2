#include <iostream>
using namespace std;
template <typename T>
class Tlist{
   private:
    T* lista;
    T tamaño;
  public:
    Tlist ( T* _lista, T _tamaño){
         lista=_lista;
         tamaño=_tamaño;
    }
    void swamp(T &a, T &b){ //funcion swap para cambiar
	   T aux;
	   aux=a;
	   a=b;
	   b=aux;
     }
    void agregar(){
    for (int i =0; i<tamaño;i++){
      cout<<"Ingrese los elementos"<<endl;
      cin>>lista[i];
      }
    }
   void  esLlena (){
     T aux;
     for (int i=0;i<tamaño; i++){
    for (int j=0; i<tamaño-1; i++){
      if (lista [j]<lista[j+1]){
        aux=lista[j];
        lista[j]=lista[j+1];
        lista[j+1]=aux;
      }
     }
    }
   }
   void verLista(){
    cout<<"Ordenado" <<endl;
     for (int i =0; i<tamaño;i++){
     cout<<lista[i]<<endl;
    }
   }

};

int main() {
  int lista [5];

}
