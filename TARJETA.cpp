//Luis Gustavo Mayorg Orellana
//Carnet: 0909 - 21 - 4024

#include<iostream>
using namespace std;

int main() {
		
	float ahorro;
	float cantidad;
	float dolares;
	
	string trato;
	float moneda;

	
	float pin_security;
	float pin_de_seguridad;
	float quetzales;
	float rest;
	float trato_quetzal;
	

	pin_de_seguridad = 2021;
	quetzales = 5000;
	dolares = 650;
	
	do {
		cout << "Ingrese el pin correcto: " << endl;
		cin >> pin_security;
		if (pin_de_seguridad !=pin_security) {
			cout << "Ingrese el pin correcto" << endl;
		}
	} while (pin_de_seguridad !=pin_security);
	cout << "Luis Gustavo" << endl;
	cout<<"Carnet: 0909 - 21 - 4024" << endl;
	cout << "" << endl;
	cout << "Este es tu saldo: " << endl;
	cout << "Su saldo en quetzales es de: Q " << quetzales << endl;
	cout << "Su saldo en dolares es de: $ " << dolares << endl;
	cout << "Desea realizar alguna transaccion S/N?" << endl;
	cin >> trato;
	
	if (trato=="Tarjeta" || trato=="Tarjeta") {
		cout << " En que moneda desea realizar la transaccion?" << endl;
		cout << "1. QUETZALES " << endl;
		cout << "2. DOLARES " << endl;
		cin >> moneda;
		
		cout << "Su saldo en Quetzales es de: " << quetzales << endl;
		cout << "Su saldo en Dolares es de:  " << dolares << endl;
		cout << "" << endl;
		
		if (moneda==1) {
			cout << "Su seleccion fue en quetzales: " << endl;
			cout << "Cuanto dinero desea: " << endl;
			cin >> ahorro;
			cout << "" << endl;
			
			if (ahorro<=5000) {
				cout << "Sacó: Q" << ahorro << endl;
				rest = 5000-ahorro;
				cout << " su saldo en quetzales es de: " << rest << endl;
			} else {
				cout << "Saldo insuficiente" << endl;
			}
		} else {
			if (moneda==2) {
				cout << "Su seleccion fuen en dolares: " << endl;
				cout << "Cuanta cantidad desea sacar: " << endl;
				cin >> cantidad;
				cout << "" << endl;
				
				if (cantidad<=650) {
					trato_quetzal = (650.00-cantidad);
					cout << "Saco una cantidad de: $ " << cantidad << endl;
					cout << " Su saldo en dolares es de: " << trato_quetzal << endl;
				} else {
					cout << "Saldo insuficiente" << endl;
				}
			}
		}
	}
	return 0;
}

