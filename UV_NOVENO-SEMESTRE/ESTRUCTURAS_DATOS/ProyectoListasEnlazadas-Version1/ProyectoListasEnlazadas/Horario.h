#include <iostream>
#include <string>
using namespace std;
class Horario{
	private:
		string periodo;
		string dia;
		string hora;
		string salon;
		string nRC;
		string profesor;
		string matriculaAlumno;
	public:
		Horario();
		Horario(string p, string d, string h, string s, string nrc, string profe, string mA);
};
Horario::Horario(){
	this->periodo="";
	this->dia="";
	this->hora="";
	this->salon="";
	this->nRC="";
	this->profesor="";
	this->matriculaAlumno="";
}
/*
Horario::Horario(string p, string d, string h, string s, string nrc, string profe, string mA){
	this->periodo=p;
	this->dia=d;
	this->hora=h;
	this->salon=s;
	this->nRC=nrc;
	this->profesor=profe;
	this->matriculaAlumno=mA;
}
*/
