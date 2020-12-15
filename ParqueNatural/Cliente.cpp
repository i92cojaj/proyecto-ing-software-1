/*
 * Cliente.cpp
 *
 *  Created on: 15 dic. 2020
 *      Author: anruc
 */
#ifndef cliente_c
#define cliente_c

#include "cliente.hpp"

using namespace std;

cliente::cliente(string nombre, string direccion, string DNI) {
	_nombre = nombre;
	_direccion = direccion;
 	_DNI = DNI;
}

cliente::cliente(const cliente &p) {
	_nombre = p._nombre;
	_direccion = p._direccion;
	_DNI = p._DNI;
}

string cliente::getNombre() {
	return _nombre;
}

string cliente::getDireccion() {
	return _direccion;
}

string cliente::getDNI() {
	return _DNI;
}

void cliente::setNombre(string nombre) {
	_nombre = nombre;
}

void cliente::setDireccion (string direccion) {
	_direccion = direccion;
}

void cliente::setDNI (string DNI) {
	_DNI = DNI;
}

void cliente::leercliente() {
	cout << "Insertar nombre: ";
	cin >> _nombre;
	cout << "Insertar direccion: ";
	cin >> _direccion;
	cout << "Insertar DNI: ";
	cin >> _DNI;
}

void cliente::escribircliente() {
	cout << "Nombre: " << _nombre << endl;
	cout << "Direccion: " << _direccion << endl;
	cout << "DNI: " << _DNI << endl;
}
	
#endif



