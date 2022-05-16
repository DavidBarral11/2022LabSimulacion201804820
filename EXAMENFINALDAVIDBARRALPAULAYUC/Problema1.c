/*
Autor:          David Barral
Carnet:         201804820
compilador:     gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:       gcc -o Problema1.out Problema1.c -lm 
Fecha:          16 de mayo de 2022
Librerías:      stdio, math
Resumen:        Se propone una solución al problema 1 del examen final de simulación donde se realiza un programa que simule el despeje de un cohete, definiendo las respectivas ecuaciones diferenciales.
*/

//Librerias
#include <stdio.h>
#include <math.h>

//Variables
float G=6.693E-11;
float Rt=6.378E6;
float Mt=5.9736E24;
float R= 287.06;
float L= 0.0065;
float g0= 9.81;
float T0= 288.15;
float P0= 101325.0;

//Cohete 1
float E01= 3E7;
float TSFC1=3.248E-4;
float CD1=61.27;
float A1=201.06;
float M01=1.1E5;
float MF01=1.5E6;

//Segundo Cohete
float E02= 2.7E7;
float TSFC2=2.248E-4;
float CD2=61.27;
float A2=201.06;
float M02=1.1E5;
float MF02=1.5E6;

//Cohete 3
float E03= 2.5E7;
float TSFC3=2.248E-4;
float CD3=70.25;
float A3=215.0;
float M03=1.8E5;
float MF03=2.1E6;

//Para la variable dependiente
float y;

//Funciones
float fatm(float datos[]);
float densidad();
float gravedad();
float fa(float y);
float absoluto(float x);


//Función de Partición
int main() {
    //Vectores útiles
    float AhMun[]  ={E01,TSFC1,CD1,A1,M01,MF01};
    float AhauKin[]={E02,TSFC2,CD2,A2,M02,MF02};
    float Chac[]   ={E03,TSFC3,CD3,A3,M03,MF03};
    return 0;
}

//Para la densidad
float densidad() {
    float rho;
    rho = (P0/(R*T0))*pow((1-((L*y)/T0)),(g0/(R*L)));
    return rho;
}

float gravedad(){
    float g0;
    g0 = (G*Mt)/(pow((Rt+y),2));
}

float fatm(float datos[]){
    float f0;
    f0 = densidad()*datos[2]*datos[3];
}

float absoluto(float x){
    if (x<0)
        x = -x;
    return x;
}