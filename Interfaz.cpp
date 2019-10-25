#include "Interfaz.h"
#include <iostream>
using namespace std;

Interfaz::Interfaz() {
}

Interfaz menu1;

void Interfaz::correrInterfaz() {
int opc;
 string nombreSocio; int cedulaSocio; string correoSocio; int telefonoSocio; float fechainscripcionSocio;
 string nombreInstuct; int cedulaInstruct; string correoInstruct; int telefonoInstruct; 
 float fechaInicio; float fechaVencimiento; string objetivo; int partedelCuerpo; string nombreEjercicio; int series; int repeticiones;
    do{
    cout<<"++++++++++++++++++++++++++++++++++++++\n";
	cout<<"+            MENU PRINCIPAL          +\n";
	cout<<"++++++++++++++++++++++++++++++++++++++\n";
    cout << "1-  Ingresar nuevo socio\n";
    cout << "2-  Ingresar nuevo instructor\n";
    cout << "3-  Lista general de socios\n";
    cout << "4-  Lista general de instructores\n";
    cout << "5-  Mejores resultados en pérdida de grasa\n";
    cout << "6-  Instructor con mejores resultados en pérdida de grasa\n";
    cout << "7-  Menú Instructor\n";
    cout << "8-  Menú clases grupales\n";
    cout << "9-  Salir del sistema\n";
    cin>>opc;
    system("cls");
 switch(opc){
     case 1:{
        char x;
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Solicituda de nuevos socios\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Digita el nombre completo del socio\n";
        cin>>nombreSocio;
        cout<<"Digita el numero de cedula\n";
        cin>>cedulaSocio;
        cout<<"Digita elo correo electronico del socio\n";
        cin>>correoSocio;
        cout<<"Digita el numero telefonico del socio\n";
        cin>>telefonoSocio;
        cout<<"Digita la fecha de inscripcion\n";
        cin>>fechainscripcionSocio;
        cout<<"Ingrese una tecla y enter para continuar..."\n;
		cin>>x;
     }break;
     case 2:{
        char x;
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Solicitud a de nuevos insturctores\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Digita el nombre completo del instructor\n";
        cin>>nombreInstuct;
        cout<<"Digita el numero de cedula\n";
        cin>>cedulaInstruct;
        cout<<"Digita el correo electronico del instructor\n";
        cin>>correoInstruct;
        cout<<"Digita el numero telefonico del instructor\n";
        cin>>telefonoInstruct;
        cout<<"Ingrese una tecla y enter para continuar..."\n;
		cin>>x;
     }break;
     case 3:{
        char x;
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Listas de Socios\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"ID:\n";
        cout<<get.cedulaSocio;
        cout<<"Nombre:\n";
        cout<<get.nombreSocio;
        cout<<"Instructor:\n";
        cout<<get.nombreInstruct;
        cout<<"Ingrese una tecla y enter para continuar..."\n;
		cin>>x;
     }break;
     case 4:{
        char x;
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Listas de Instructores\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"ID:\n";
        cout<<get.cedulaInstruct;
        cout<<"Nombre:\n";
        cout<<get.nombreInstruct;
        cout<<"Ingrese una tecla y enter para continuar..."\n;
		cin>>x;
     }break;
     case 5:{
        char x;
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Resultados de perdida de grasa\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"ID:\n";
        cout<<get.cedulaSocio;
        cout<<"Nombre:\n";
        cout<<get.nombreSocio;
        cout<<"Perdida de grasa:\n";
        cout<<get.perdidaDeGrasa;
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;


     case 6:{
        char x;
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Instructor con mejores resultados en pérdida de grasa\n";
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<menu1.perdidaGrasa();
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;


     case 7:{
         do{
        cout<<"1 - Socios por instructor\n";
        cout<<"2 - Asignar rutina a socio\n";
        cout<<"3 - Detalle Socio\n";
        cout<<"4 - Rutinas vencidas por instructor\n";
        cout<<"5 - Detalle rutina especifica\n";
        cout<<"6 - Registrar nueva medición socio\n";
        cout<<"7 - Mostrar mediciones socio\n";
        cout<<"8 - Regresar menú principal\n";
        cin>>opc;
        system("cls");

        switch (opc){
        case 1:{
        char x;
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Socios por instructor\n";
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"ID instructor:\n";
        cout<<get.nombreInstruct;
        cout<<"Nombre:\n";
        cout<<get.nombreInstruct;
        cout<<"Lista de socios:\n";
        cout<<menu1.instructor[];
         cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;


         case 2:{
        char x;
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Asignación de rutina\n";
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"ID Socio:\n";
        cin>>cedulaSocio;
        cout<<"Nombre del socio:\n";
        cout<<menu1.Buscarsocio;
        cout<<"Rutina numero:\n";
        cout<<menu1.asignaRutina;
        cout<<"Fecha de Inicio:\n";
        cin>>fechaInicio;
        cout<<"Fecha de Vencimiento:\n";
        cin>>fechaVencimiento;
        cout<<"Objetivo:\n";
        cin>>objetivo;
        cout<<"Parte del cuerpo:(1-Pierna, 2-Pecho, 3-espalda, 4-hombro ,5-tríceps, 6-biceps, 7-trapecio, 8-antebrazo)\n";
        cin>>partedelCuerpo;
        cout<<"Nombre del Ejercicio:\n";
        cin>>nombreEjercicio;
        cout<<"Series:\n";
        cin>>series;
        cout<<"Repeticiones:\n";
        cin>>repeticiones;
        cout<<menu1.stringtoString();
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;


        case 3:{
        char x;
        cout<<"Digita el ID del Socio\n";
        cin>>cedulaSocio;
        cout<<"Nombre del socio:\n";
        cout<<menu1.BuscarSocio();
        cout<<"Nombre del instructor:\n";
        cout<<menu1.BuscarInstructor();
        cout<<"Clases Grupales:\n";
        cout<<menu1.
        cout<<"Historial de rutinas:\n";
        cout<<menu1.
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;


        case 4:{
        char x;
        cout<<"Digita el ID del Instructor\n";
        cin>>cedulaInstruct;
        cout<<"Nombre del socio:\n";
        cout<<menu1.BuscarInstructor();
        cout<<"Rutinas vencidas:\n";
        cout<<menu1.
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;


        case 5:{
        char x;
        cout<<"Digita el ID de la rutina\n";
        cin>>rutina;
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;


        case 6:{
        char x;
        cout<<"Digita el ID del Socio\n";
        cin>>cedulaSocio;
        cout<<"Nombre del socio:\n";
        cout<<menu1.BuscarSocio();
        cout<<"Digite el peso en kilos:\n";
        cin>>peso;
        cout<<"Digite la altura en metros:\n";
        cin>>altura;
        cout<<"Digite el porcentje de grasa:\n";
        cin>>porcentajeGrasa;
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;


        case 7:{
        char x;
        cout<<"Digita el ID del Socio\n";
        cin>>cedulaSocio;
        cout<<"Nombre del socio:\n";
        cout<<menu1.BuscarSocio();
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;}
        system("cls");
     }while(opc==8){
         cout<<"Volviendo\n";
     }}
     case 8:{
        char x;
         do{
    cout<<"++++++++++++++++++++++++++++++++++++++\n";
	cout<<"+            MENU CLASES GRUPALES    +\n";
	cout<<"++++++++++++++++++++++++++++++++++++++\n";
    cout << "1-  Creacion de la clase grupal\n";
    cout << "2-  Visualizacion de las clases grupales\n";
    cout << "3-  Matriculas Socio\n";
    cout << "4-  Regresar al menú principal\n";
    cin>>opc;
    system("cls");
 switch(opc){
     case 1:{
        char x;
        cout<<"Digite el salón deseado(A,B,C):\n";
        cin>>salon;
        cout<<menu1.
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;


      case 2:{
        char x;
        cout<<"Digite el ID de la clase:\n";
        cin>>leccion;
        cout<<menu1.
        cout>>"Socios Matriculados:\n";
        cout<<menu1.
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;


      case 3:{
        char x;
        cout<<"Digite el ID de la clase:\n";
        cin>>leccion;
        cout<<menu1.
        cout<<"Digita el ID del socio:\n";
        cin>>cedulaSocio;
        cout<<"Nombre dek socio:\n";
        cout<<menu1.BuscarSocio();

        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;}
     }while (opc==4){
         cout<<"Volviendo\n";
     } 
     system("cls");
    }while(opc==9){
        cout<<"Adios\n";
    }
    return 0;
}
 
