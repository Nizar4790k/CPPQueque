#ifndef  CLIENTE_H
#define CLIENTE_H

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cliente.h
 * Author: Nizar4790k
 *
 * Created on November 20, 2020, 1:36 PM
 */
#include<iostream>
#include<string>


using namespace std;

class Cliente{
private:
    string nombre;
    string apellido;
    Cliente* siguente;
    
public:
    Cliente(string nombre, string apellido);
    string getNombre();
    string getApellido();
    void setNombre(string nombre);
    void setApellido(string apellido);
    Cliente* getSiguiente();
    void setSiguiente(Cliente* siguiente);

    
    
    
    
    
    
    
    
};





#endif