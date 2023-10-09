#include <iostream>
#include <stdio.h>

using namespace std;

class Pila{
    public:
        static const int MAX = 5;
        int tope;
        int pila[MAX] = {0,0,0,0,0};

        //Constructor
        Pila(){
            this->tope = -1;
        }

        bool estaVacia(){
            if(tope == -1){
                return true;
            }
            else{
                return false;
            }
        }

        bool estaLlena(){
            if(tope == MAX-1){
                return true;
            }
            else{
                return false;
            }
        }

        void push(int valor){
            if(!estaLlena()){
                pila[++tope] = valor;
            }
            else{
                cout<<"\nPila llena!"<<endl;
            }
        }

        void pop(){
            if(!estaVacia()){
                pila[tope] = 0;
                tope--;
            }
            else{
                cout<<"\nNo hay mas elementos por eliminar"<<endl;
            }
        }

        void verPila(){
            cout<<"\nContenido de la pila"<<endl;
            for(int i = 0; i < this->MAX; i++){
                cout<<this->pila[i]<<endl;
            }
        }
};


int main(){

    Pila pila;
    bool active = true;

    do{
        cout<<"PILAS EN C++"<<endl;
        cout<<"Elige que deseas hacer:"<<endl;
        cout<<"1 . Añadir contenido a la pila"<<endl;
        cout<<"2 . Eliminar contenido de la pila"<<endl;
        cout<<"3 . Ver el contenido de la pila"<<endl;
        cout<<"4 . Salir"<<endl;
        int opt;
        cout<<"\nDigita tu opcion: "; cin>>opt;
        
        switch (opt)
        {
            case 1:
                //Añadir a la pila
                int valor;
                cout<<"Digite el valor a añadir: "; cin>>valor;
                pila.push(valor);
                
                break;
            case 2:
                //Eliminar de la pila
                pila.pop();
                
                break;
            case 3:
                //Ver el contenido de la pila
                pila.verPila();
                
                break;
            case 4:
                //Salir
                cout<<"\nAdios :D"<<endl;
                active = false;
                break;
            default:
                cout<<"\nIngresa una opcion valida!"<<endl;
                break;

        }

    }while(active);
    
     

    return 0;
}
