/*
 * Cliente.hpp
 *
 *  Created on: 15 dic. 2020
 *      Author: anruc
 */

#ifndef CLIENTE_HPP_
#define CLIENTE_HPP_

#include <iostream>

using namespace std;

class cliente {
	protected:
		string _nombre;
		string _direccion;
		string _DNI;
	
	public:
		cliente(string nombre="X", string apellidos="X", string DNI="X");
		cliente(const cliente &p);
		string getNombre();
		string getDireccion();
		string getDNI();
		void setNombre (string nombre);
		void setDireccion (string direccion);
		void setDNI (string DNI);
		void leercliente();
		void escribircliente();
};



#endif /* CLIENTE_HPP_ */
