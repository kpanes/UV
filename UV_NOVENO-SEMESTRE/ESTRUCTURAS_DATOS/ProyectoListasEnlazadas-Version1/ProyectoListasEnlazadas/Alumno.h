#include <iostream>
#include <string>
using namespace std;
//Author: SK61
//---22/11/2023---

class Alumno{
	private:
		string nombres;
		string apellidoPaterno;
		string apellidoMaterno;
		string matricula;
		//Materia materiasDelAlumno;
		int semestre;
		string correoElectronico;
		string fechaNacimiento;
		string telefono;
		string direccion;
	public:
		Alumno();
		Alumno(string n, string aP, string aM, string m, /*Materia mDA*/ int s, string cE, string fN, string t, string d);
};
Alumno::Alumno(){
	this->nombres="";
	this->apellidoPaterno="";
	this->apellidoMaterno="";
	this->matricula="";
	//this->materiasDelAlumno=NULL;
	this->semestre=0;
	this->correoElectronico="";
	this->fechaNacimiento="";
	this->telefono="";
	this->direccion="";
}
/*
Alumno::Alumno(String n, String aP, String aM, String m, Materia mDA, int s, String cE, String fN, String t, String d){
	this->nombres=n;
	this->paterno=aP;
	this->materno=aM;
	this->matricula=m;
	//this->materiasDelAlumno=mDA;
	this->semestre=s;
	this->correoElectronico=cE;
	this->fechaNacimiento=fN;
	this->telefono=t;
	this->direccion=d;
}
*/
