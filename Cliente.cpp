#include"Cliente.h"
#include<iostream>
using namespace std;



Cliente::Cliente(string nombre, string apellido){
    this->nombre=nombre;
    this->apellido=apellido;
    this->setSiguiente(NULL);
}

void Cliente::setNombre(string nombre){
    this->nombre=nombre;
}

string Cliente::getNombre(){
    return this->nombre;
}

string Cliente::getApellido(){
    return this->apellido;
}

void Cliente::setApellido(string apellido){
    this->apellido=apellido;
}

void Cliente::setSiguiente(Cliente* siguiente){
    this->siguente=siguiente;
}

Cliente* Cliente::getSiguiente(){
    return this->siguente;
}






