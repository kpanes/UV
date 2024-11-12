#include <iostream>
#include "Lista.h"
#include "Alumno.h"
#include "Materia.h"
#include "Horario.h"
using namespace std;
int main(int argc, char** argv){
	Alumno <Alumno> alumno;
	int opcion1, opcion2;
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Menu de alumnos"<<endl;
		cout<<"2. Menu de materias"<<endl;
		cout<<"3. Menu de horarios"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion1;
		switch(opcion1){
			case 1:
				do{
					cout<<"\t.:MENU ALUMNOS:."<<endl;
					cout<<"1. Registrar"<<endl;
					cout<<"2. Editar"<<endl;
					cout<<"3. Eliminar"<<endl;
					cout<<"4. Actualizar estatus"<<endl;
					cout<<"5. Buscar"<<endl;
					cout<<"6. Salir del menu de alumnos"<<endl;
					cout<<"Opcion: ";
					cin>>opcion2;
					switch(opcion2){
						case 1:
							cout<<"Opcion 1 del menu de alumnos"<<endl;
							// Crear un objeto Alumno con datos proporcionados por el usuario
        					string nombre, apellidoPaterno, apellidoMaterno, matricula, correoElectronico, fechaNacimiento, telefono, direccion;
        					int semestre;
							cout<<"Ingrese nombre: ";
        					cin >>nombre;
        					cout<<"Ingrese el apellido paterno: ";
        					cin>>apellidoPaterno;
        					cout<<"Ingrese el apellido Materno: ";
        					cin>>apellidoMaterno;
        					cout<<"Ingrese su matricula: ";
        					cin>>matricula;
        					cout<<"Ingrese el correo electronico: ";
        					cin>>correoElectronico;
        					cout<<"Ingrese la fecha de nacimiento: ";
        					cin>>fechaNacimiento;
        					cout<<"Ingrese el telefono: ";
        					cin>>telefono;
        					cout<<"Ingrese la direccion: ";
        					cin>>direccion;
        					// Crear un objeto Alumno con los datos proporcionados
        					Alumno nuevoAlumno(nombre, apellidoPaterno, apellidoMaterno, matricula, semestre, correoElectronico, fechaNacimiento, telefono, direccion);
        					// Llamar al método de registro en la lista
        					alumno.registrarAlumno(Alumno);
							break;
						case 2:
							cout<<"Opcion 2 del menu de alumnos"<<endl;
							break;
						case 3:
							cout<<"Opcion 3 del menu de alumnos"<<endl;
							break;
						case 4:
							cout<<"Opcion 4 del menu de alumnos"<<endl;
							break;
						case 5:
							cout<<"Opcion 5 del menu de alumnos"<<endl;
							break;
					}
					system("pause");
					system("cls");
				}while(opcion2!=6);
				break;
			case 2:
				do{
					cout<<"\t.:MENU MATERIAS:."<<endl;
					cout<<"1. Registrar"<<endl;
					cout<<"2. Editar"<<endl;
					cout<<"3. Eliminar"<<endl;
					cout<<"4. Actualizar estatus"<<endl;
					cout<<"5. Buscar"<<endl;
					cout<<"6. Salir del menu de materias"<<endl;
					cout<<"Opcion: ";
					cin>>opcion2;
					switch(opcion2){
						case 1:
							cout<<"Opcion 1 del menu de materias"<<endl;
							break;
						case 2:
							cout<<"Opcion 2 del menu de materias"<<endl;
							break;
						case 3:
							cout<<"Opcion 3 del menu de materias"<<endl;
							break;
						case 4:
							cout<<"Opcion 4 del menu de materias"<<endl;
							break;
						case 5:
							cout<<"Opcion 5 del menu de materias"<<endl;
							break;
					}
					system("pause");
					system("cls");
				}while(opcion2!=6);
				break;
			case 3:
				do{
					cout<<"\t.:MENU HORARIOS:."<<endl;
					cout<<"1. Registrar"<<endl;
					cout<<"2. Editar"<<endl;
					cout<<"3. Eliminar"<<endl;
					cout<<"4. Actualizar estatus"<<endl;
					cout<<"5. Buscar"<<endl;
					cout<<"6. Salir del menu de horarios"<<endl;
					cout<<"Opcion: ";
					cin>>opcion2;
					switch(opcion2){
						case 1:
							cout<<"Opcion 1 del menu de horarios"<<endl;
							break;
						case 2:
							cout<<"Opcion 2 del menu de horarios"<<endl;
							break;
						case 3:
							cout<<"Opcion 3 del menu de horarios"<<endl;
							break;
						case 4:
							cout<<"Opcion 4 del menu de horarios"<<endl;
							break;
						case 5:
							cout<<"Opcion 5 del menu de horarios"<<endl;
							break;
					}
					system("pause");
					system("cls");
				}while(opcion2!=6);
				break;
		}
		system("cls");
	}while(opcion1!=4);
	return 0;
}
