/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nizar4790k
 *
 * Created on May 23, 2020, 8:31 AM
 */

#include <cstdlib>
#include<iostream>
#include<cstring>

#include"Cola.h"
#include"Cliente.h"
using namespace std;


int main(int argc, char** argv) {

   
    
    string  nombre;
    string apellido;

    
    Cola* cola = new Cola();
    
    for(int i=0;i<3;i++){
        
        cout<<"Cliente["<<i<<"]"<<endl;
        cout<<"Ingrese el nombre"<<endl;
        cin>>nombre;
        cout<<"Ingrese el apellido"<<endl;
        cin>>apellido;
        system("cls");
        system("clear");
        
        Cliente* cliente = new Cliente(nombre,apellido);
        cola->insertar(cliente);
            
    }

     
    
     while(!cola->estaVacia()){
        cout<<cola->getPrimero()->getNombre()<<" "<<cola->getPrimero()->getApellido()<<endl;
        cola->suprimir();
    }
    
    
    
    
    return 0;
}




