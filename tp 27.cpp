#include <bits/stdc++.h>
using namespace std;
class CEmpleado {
	private:
		string NEmpleado;
		string DEmpleado;
		int IEmpleado;
		int SEmpleado; 
	public:
		CEmpleado(string Nombre, string Direccion, int Ingreso, int Salario);
		string convertirNombre(string Nombre);
		string convertirDireccion(string Direccion);
		int convertirIngreso(int Ingreso);
		int convertirSalario(int Salario);
		int Antiguedad();
		bool WallStreet();
};

CEmpleado::CEmpleado(string Nombre, string Direccion, int Ingreso, int Salario) {
	NEmpleado = convertirNombre(Nombre);
	DEmpleado = convertirDireccion(Direccion);
	IEmpleado = convertirIngreso(Ingreso);
	SEmpleado = convertirSalario(Salario);
}

string CEmpleado::convertirNombre(string Nombre) {
	NEmpleado = Nombre;
	return NEmpleado;
}

string CEmpleado::convertirDireccion(string Direccion) {
	DEmpleado = Direccion;
	return DEmpleado;
}

int CEmpleado::convertirIngreso(int Ingreso) {
	IEmpleado = Ingreso;
	return IEmpleado;
}

int CEmpleado::convertirSalario(int Salario) {
	SEmpleado = Salario;
	return SEmpleado;
}

int CEmpleado::Antiguedad() {
	return 2023 - IEmpleado;
}

bool CEmpleado::WallStreet() {
	bool Comprobar = false;
	if(DEmpleado == "WallStreet"){
		Comprobar = true;
	}
	return Comprobar; 
}

int main() {
	string Nombre = "Julian", Direccion = "WallStreet";
	int Salario = 200000, Ingreso = 2010;
	cout<<"Name       ";
	cout<<"Year of joining       ";
	cout<<"Address       ";
	cout<<"Antiquity       ";
	cout<<"Lives on Wall Street?"<<endl;
	cout<<endl;
	CEmpleado CLocal (Nombre, Direccion, Ingreso, Salario);
	int Antiguedad;
	bool Comprobar;
	Antiguedad = CLocal.Antiguedad();
	Comprobar = CLocal.WallStreet();
	cout<<Nombre<<"     ";
	cout<<Ingreso<<"                  ";
	cout<<Direccion<<"    ";
	cout<<Antiguedad<<"              ";
	if(Comprobar == true) {
		cout<<"Yes       ";
	}
	if(Comprobar == false) {
		cout<<"No       ";
	}
	return 0;
}