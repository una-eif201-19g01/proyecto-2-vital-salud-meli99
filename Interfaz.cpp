#include "Interfaz.h"
#include <iostream>
using namespace std;

Interfaz::Interfaz() {
}

Interfaz menu1;

void Interfaz::correrInterfaz() {
int opc;
 string nombreSocio; int cedulaSocio; string correoSocio; int telefonoSocio; float fechainscripcionSocio;
 string nombreInstuct; int cedulaInstruct; string correoInstruct; int telefonoInstruct; float fechainscripcionInstruct;
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
        cout<<"Solicituda de nuevos insturctores\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Digita el nombre completo del instructor\n";
        cin>>nombreInstuct;
        cout<<"Digita el numero de cedula\n";
        cin>>cedulaInstruct;
        cout<<"Digita elo correo electronico del instructor\n";
        cin>>correoInstruct;
        cout<<"Digita el numero telefonico del instructor\n";
        cin>>telefonoInstruct;
        cout<<"Digita la fecha de inscripcion\n";
        cin>>fechainscripcionInstruct;
        cout<<"Ingrese una tecla y enter para continuar..."\n;
		cin>>x;
     }break;
     case 3:{
        char x;
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Listas de Socios\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"ID\n";
        cout<<get.cedulaSocio;
        cout<<"Nombre\n";
        cout<<get.nombreSocio;
        cout<<"Instructor\n";
        cout<<get.nombreInstruct;
        cout<<"Ingrese una tecla y enter para continuar..."\n;
		cin>>x;
     }break;
     case 4:{
        char x;
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Listas de Instructores\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"ID\n";
        cout<<get.cedulaInstruct;
        cout<<"Nombre\n";
        cout<<get.nombreInstruct;
        cout<<"Ingrese una tecla y enter para continuar..."\n;
		cin>>x;
     }break;
     case 5:{
        char x;
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Resultados de perdida de grasa\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"ID\n";
        cout<<get.cedulaSocio;
        cout<<"Nombre\n";
        cout<<get.nombreSocio;
        cout<<"Perdida de grasa\n";
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
        cout<<"ID instructor\n";
        cout<<get.nombreInstruct;
        cout<<"Nombre\n";
        cout<<get.nombreInstruct;
        cout<<
         cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;
         case 2:{
        char x;
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;
        case 3:{
        char x;
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;
        case 4:{
        char x;
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;
        case 5:{
        char x;
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;
        case 6:{
        char x;
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;
        case 7:{
        char x;
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;}
        system("cls");
     }while(opc==8){
         cout<<"Volviendo\n";
     }}
     case 8:{
        char x;
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;}
     system("cls");
    }while(opc==9){
        cout<<"Adios\n";
    }
    return 0;
}
 
