// pr_c_mysql.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Cliente.h"
#include <iostream>
#include <string>
using namespace  std;

int main(){
	
	string nit,nombres, apellidos, direccion,fecha_nacimiento ;
	int telefono, op;
	telefono = 0;
	Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit);
	cout << "------Bienvenido al menu-----" << endl;
	cout << " 1. Ingresar" << endl;
	cout << " 2. Leer" << endl;
	cout << " 3. Modificar" << endl;
	cout << " 4. Eliminar" << endl;
	
	cin >> op;
	do{
		
		switch (op) {
		case 1:
			
			cout << "Ingrese Nit:";
			getline(cin, nit);
			cin.ignore();
			cout << "Ingrese Nombres:";
			getline(cin, nombres);
			cout << "Ingrese Apellidos:";
			getline(cin, apellidos);
			cout << "Ingrese Direccion:";
			getline(cin, direccion);
			cout << "Ingrese Telefono:";
			cin >> telefono;
			cin.ignore();
			cout << "Fecha Nacimiento:";
			cin >> fecha_nacimiento;
			
			c.crear();
			break;

		case 2:
			system("cls");
			c.leer();
			break;

		case 3: 
			cout << "Ingrese Nit nuevo:";
			getline(cin, nit);
			cin.ignore();
			cout << "Ingrese Nombres nuevos:";
			getline(cin, nombres);
			cin.ignore();
			cout << "Ingrese Apellidos nuevos:";
			getline(cin, apellidos);
			cin.ignore();
			cout << "Ingrese Direccion nueva:";
			getline(cin, direccion);
			cout << "Ingrese telefono nuevo:";
			cin >> telefono;
			cout << "Ingrese fecha de nacimiento nuevo";
			cin >> fecha_nacimiento;
			c.modificar();
			break;
		}
	} while (op != 5);
	
	



	system("pause");
	return 0;

}