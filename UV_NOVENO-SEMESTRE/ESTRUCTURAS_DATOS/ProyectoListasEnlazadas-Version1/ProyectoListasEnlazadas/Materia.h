#include <iostream>
#include <string>
using namespace std;
class Materia{
	private:
		string nRC;
		string nombre;
		string programaEducativo;
		string seccion;
		string bloque;
		string matriculaAlumno;
	public:
		Materia();
		Materia(string nrc, string n, string pE, string s, string b, string mA);
};
Materia::Materia(){
	this->nRC="";
	this->nombre="";
	this->programaEducativo="";
	this->seccion="";
	this->bloque="";
	this->matriculaAlumno="";
}
/*
Materia::Materia(string nrc, string n, string pE, string s, string b, string mA){
	this->nRC=nrc;
	this->nombre=n;
	this->programaEducativo=pE;
	this->seccion=s;
	this->bloque=b;
	this->matriculaAlumno=mA;
}
*/
