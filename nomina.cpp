#include <iostream>
#include <string>

using namespace std;

int main(){
	
	float salario,hora, dia;
	float smlv,auxt,sueldo,bono,prestamo;
	float salud,pension;
	float devengado,deducciones;
	string trabajador;
	
	cout << "Ingrese el salario minimo legal vigente actual: ";
	cin >> smlv;
	cout << endl;
	cout << "Ingrese el auxilio de transporte actual: ";
	cin >> auxt;
	cout << endl;
	cout << "Ingrese el nombre del trabajador: ";
	cin >> trabajador;
	cout << endl;
	cout << "Ingrese el sueldo del trabajador: ";
	cin >> sueldo;
	cout << endl;
	
	if(sueldo>=smlv*2){
		
		cout << trabajador << " no recibe auxilio de transporte.";
		cout << endl;
		
		auxt=0;
	}
	
	else{
		
		cout << trabajador << " recibe auxilio de transporte.";
		cout << endl;
	}
	
	salud= sueldo*0.04;
	pension= sueldo*0.04;
	
	cout << endl;
	cout << "Ingrese el valor de los bonos que recibio el trabajador: ";
	cin >> bono;
	cout << endl;
	cout << "Ingrese cuanto debe en prestamos el trabajador: ";
	cin >> prestamo;
	cout << endl;
	
	deducciones=salud+pension+prestamo;
	
	devengado=sueldo+auxt+bono;
	
	salario=devengado-deducciones;
	
	cout << "El total devengado de " << trabajador << " es " << devengado;
	cout << endl;
	cout << endl;
	cout << "El total de deducciones de " << trabajador << " es de " << deducciones;
	cout << endl;
	cout << endl;
	cout << "El salario total de " << trabajador << " es " << salario;
	cout << endl;
	cout << endl;
	
	hora=sueldo/240;
	
	cout << trabajador << " gana por hora " << hora;
	cout << endl;
	cout << endl;
	
	dia=sueldo/30;
	
	cout << trabajador << " gana por dia " << dia;
	
	
	

	return 0;
}
