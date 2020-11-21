/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cola.h
 * Author: Nizar4790k
 *
 * Created on November 20, 2020, 1:56 PM
 */

#include<iostream>
#include "Cliente.h"
using namespace std;


class Cola{
private:
    Cliente* primero;
    Cliente* ultimo;
    
public:
    Cola();
    bool estaVacia();
    void insertar(Cliente *&nuevoCliente);
    void suprimir();
    Cliente* getPrimero();
    Cliente* getUltimo();
    
    
};