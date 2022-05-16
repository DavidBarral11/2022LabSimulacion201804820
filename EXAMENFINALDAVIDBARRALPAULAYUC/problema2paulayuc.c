/*
Autor:          Paula Yuc
Carnet:         201804563
compilador:     gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:       gcc -o problema2paulayuc.out problema2paulayuc.c -lm
Fecha:          16 de mayo de 2022
Librerías:      stdio, stdlib
Resumen:       En este problema definimos y creamos una simulación para el despeje de un cohete.
*/
//Librerias

#include <iostream>

//Clase: Cohete
class Cohete{
public:
  //Atributos
  //Nombre
  string name; 
  //Características 
  float E0, TSFC, CD, A, M0, Mf0; 
  //Posición inicial para EDO
  float y0; 
public:
  //Constructor
  Cohete(string nombre, float energia, float tsfc, float cd, float area, float masa, float combustible, float pos){
    name = nombre;
    E0 = energia;
    TSFC = tsfc;
    CD = cd;
    A = area;
    M0 = masa;
    Mf0 = combustible;
    y0 = pos;
  }
  //Destructor
  ~Cohete(){};