/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include<iostream>
#include "Cola.h"
#include "Cliente.h"
using namespace std;

Cola::Cola(){
    this->primero=NULL;
    this->ultimo=NULL;
}

Cliente* Cola::getPrimero(){
    return this->primero;
}

Cliente* Cola::getUltimo(){
    return this->ultimo;
}

bool Cola::estaVacia()
{
    return this->primero==NULL;   
}

void Cola::insertar(Cliente *&nuevoCliente){
    
    nuevoCliente->setSiguiente(nuevoCliente); 
   
   if(this->estaVacia()){
       primero = nuevoCliente;
   }else{
         ultimo->setSiguiente(nuevoCliente);
   }
   
   ultimo=nuevoCliente;
}

void Cola::suprimir(){
    
    Cliente* aux =primero;
    
    if(primero==ultimo){
        primero=NULL;
        ultimo=NULL;
    }else{
       this->primero = this->primero->getSiguiente();
    }
    
    delete aux;
}

