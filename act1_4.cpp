//Run with bin/g++ in linux
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int setNumAlumnos(){
    int nAlumnos;
    cout<<"\nIngrese el numero de alumnos"; cin>>nAlumnos;
    return nAlumnos;
}

void llenarArray(int array[], int nDatos){
    int calificacion;
    for(int i = 0; i < nDatos; i++){
        cout<<"\nDigite la calificacion: "; cin>>calificacion;
        array[i] = calificacion;
    }
}


int resultadosAlumnosRep(int array[], int nDatos){
    int alumnosRep = 0;

    for(int i = 0; i < nDatos; i++){
        if(array[i] < 60){
            alumnosRep++;
        }
    }

    return alumnosRep;
}

int resultadosAlumnosAp(int array[], int nDatos){
    int alumnosAp = 0;

    for(int i = 0; i < nDatos; i++){
        if( array[i] >= 60 ){
            alumnosAp++;
        }
    }

    return alumnosAp;
}

int mayorAOchenta(int array[], int nDatos){
    int mayorOchenta = 0;

    for(int i = 0; i < nDatos; i++){
        if(array[i] >= 80){
            mayorOchenta++;
        }
    }

    return mayorOchenta;
}

int porcentajeAprobados(int alumnosAprobados, int alumnosTotales){
    int porcentajeAp = (alumnosAprobados * 100) / alumnosTotales;
    return porcentajeAp;
}

int porcentajeReprobados(int alumnosReprobados, int alumnosTotales){
    int porcentajeRep = (alumnosReprobados * 100) / alumnosTotales;
    return porcentajeRep;
}

double promedio(int array[], int nDatos){
    int suma = 0;
    for(int i = 0; i < nDatos; i++){
        suma += array[i];
    }

    double promedio = static_cast<double>(suma) / nDatos; // Cast a double

    return promedio;
}


int main(){
    cout<<"Sistema de calificaciones universitarias";
    int nAlumnos = setNumAlumnos();
    int calificaciones[nAlumnos];
    llenarArray(calificaciones, nAlumnos);

    double prom = promedio(calificaciones, nAlumnos);
    cout<<"\nEl promedio de las calificaciones es de: "<<prom<<endl;

    int alumnosReprobados = resultadosAlumnosRep(calificaciones, nAlumnos);
    cout<<"\nLa cantidad de alumnos reprobados es de: "<<alumnosReprobados<<endl;

    int alumnosAprobados = resultadosAlumnosAp(calificaciones, nAlumnos);
    cout<<"\nLa cantidad de alumnos aprobados es de: "<<alumnosAprobados<<endl;

    int porcentajeRep = porcentajeReprobados(alumnosReprobados, nAlumnos);
    cout<<"\nEl porcentaje de reprobados ha sido del "<<porcentajeRep<<" %!"<<endl;

    int porcetnajeAp = porcentajeAprobados(alumnosAprobados, nAlumnos);
    cout<<"\nEl porcentaje de aprobados ha sido el "<<porcetnajeAp<<" %!"<<endl;

    int alumnosMas = mayorAOchenta(calificaciones, nAlumnos);
    cout<<"\n Alumnos con una calificacion de 80 o mas: "<<alumnosMas<<endl;

    return 0;
}