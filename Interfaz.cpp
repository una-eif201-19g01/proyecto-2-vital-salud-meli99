#include "Interfaz.h"
#include <iostream>
using namespace std;

Interfaz::Interfaz() {
    // inst = new Instructores();
    listaInstructores = new ListaInstructores();
}

Interfaz menu1;

void Interfaz::correrInterfaz() {
int opc;
 string nombreSocio; int cedulaSocio; string correoSocio; int telefonoSocio; float fechainscripcionSocio; float altura; float peso; float porcentajeGrasa;
 int pesoActual; int idInstructor;
 string nombreInstuct; int cedulaInstruct; string correoInstruct; int telefonoInstruct; 
 float fechaInicio; float fechaVencimiento; string objetivo; int parteCuerpo; string nombreEjercicio; int series; int repeticiones;
 char Dia; int hora; string nombreGrupal; string nombreInstructorGrupal; char Salon; string horario; int tam; int cont=0; int cantidad;
 float fechaActual;
// do{
    while (true) {
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
        cout<<"Digita el correo electronico del socio\n";
        cin>>correoSocio;
        cout<<"Digita el numero telefonico del socio\n";
        cin>>telefonoSocio;
        cout<<"Digita la fecha de inscripcion\n";
        cin>>fechainscripcionSocio;
        cout<<"Digita la id del instructor a cargo\n";
        cin>>idInstructor;

        socio.setnombreSocio(nombreSocio);
        socio.setcedulaSocio(cedulaSocio);
        socio.setcorreoSocio(correoSocio);
        socio.settelefonoSocio(telefonoSocio);
        socio.setfechaInscripcionSocio(fechainscripcionSocio);

        if (listaInstructores->insertarSocioPorId(idInstructor, socio)) {
            cout<<"Socio Agregado\n";
        } else {
            cout<<"No se pudo agregar socio. Verifique que existan instructores y que el id del instructor sea correcto\n";
        }

        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;
     case 2:{
         Instructores instructor;

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
        cout<<"Digita el id del instructor\n";
        cin>>idInstructor;

        instructor.setNombre(nombreInstuct);
        instructor.setCedula(cedulaInstruct);
        instructor.setCorreo(correoInstruct);
        instructor.setTelefono(telefonoInstruct);
        instructor.setId(idInstructor);

        listaInstructores->insertarFinal(instructor);

        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;
     case 3:{
        char x;
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Listas de Socios\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"ID \t Nombre \t Instructor\n";
        cout<<listaInstructores->getListaSocios();
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;
     case 4:{
        char x;
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Listas de Instructores\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"ID \t Nombre\n";
        cout<<listaInstructores->getListaInstructores();
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;
     case 5:{
        char x;
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Resultados de perdida de grasa\n";
        cout<<"++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Digite el ID del socio:\n";
        cin>>cedulaSocio;
        cout<<"Digite el peso actual:\n";
        cin>>pesoActual;
        cout<<"La perdida de peso es de:\n";

        // if (listaInstructores->getSocioPorId(cedulaSocio) != nullptr) {
        //     Personas* tempPer = listaInstructores->getSocioPorId(cedulaSocio);
        //     // cout<<tempPer->perdidaGrasa(pesoActual);
        // }

        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;


     case 6:{
        char x;
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Instructor con mejores resultados en pérdida de grasa\n";
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"El instructor con mejores resultados es: \n";
        // cout<<listaInstructores->mejoresResultadosPerdidaGrasa();
        cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
     }break;


     case 7:{
        //  do{
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Menu Instructores\n";
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
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
        cout<<"Digite el id del instructor:\n";
        cin>>idInstructor;
        cout<<"Lista de socios:\n";
        cout<<listaInstructores->getListaSociosPorInstructor(idInstructor);
         cout<<"Ingrese una tecla y enter para continuar...\n";
		cin>>x;
        }break;


        case 2:{
        char x;
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Asignación de rutina\n";
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"Digite el ID del Socio:\n";
        cin>>cedulaSocio;
        cout<<"Nombre del socio:\n";

        Personas tempSocio = listaInstructores->getSocioPorId(cedulaSocio);
        cout << tempSocio.getnombreSocio() + "\n\n";


        cout<<"Rutina numero:\n";
        // cout<<menu1.asignaRutina;
        // cout<<"Fecha de Inicio:\n";
        // cin>>fechaInicio;
        // cout<<"Fecha de Vencimiento:\n";
        // cin>>fechaVencimiento;
        // cout<<"Objetivo:\n";
        // cin>>objetivo;
        // cout<<"Parte del cuerpo:(1-Pierna, 2-Pecho, 3-espalda, 4-hombro ,5-tríceps, 6-biceps, 7-trapecio, 8-antebrazo)\n";
        // cin>>parteCuerpo;
        // cout<<"Nombre del Ejercicio:\n";
        // cin>>nombreEjercicio;
        // cout<<"Cantidad de Series:\n";
        // cin>>series;
        // cout<<"Cantidad de Repeticiones:\n";
        // cin>>repeticiones;
        // rutinario.setfechaInicio(fechaInicio);
        // rutinario.setfechaVencimeinto(fechaVencimiento);
        // rutinario.setobjetivo(objetivo);
        // rutinario.setparteCuerpo(parteCuerpo);
        // rutinario.setnombreEjercicio(nombreEjercicio);
        // rutinario.setseries(series);
        // rutinario.setrepeticiones(repeticiones);
        // cout<<"Ingrese una tecla y enter para continuar...\n";
		// cin>>x;
        }break;


        case 3:{
        // char x;
        // cout<<"Digita el ID del Socio\n";
        // cin>>cedulaSocio;
        // cout<<"Nombre del socio:\n";



        // cout<<menu1.BuscarSocio();
       
        // cout<<"Clases Grupales:\n";
        // cout<<menu1.toStringGrupal();
        // cout<<"Historial de rutinas:\n";
        // cout<<menu1.toStringRutina();
        // cout<<"Ingrese una tecla y enter para continuar...\n";
		// cin>>x;
        }break;


        case 4:{
        // char x;
        // cout<<"Digita el ID del Instructor:\n";
        // cin>>cedulaInstruct;
        //cout<<"Digite la fecha actual\n";
        //cin>>fechaActual;
        // cout<<"Nombre del Instructor:\n";


        // cout<<menu1.BuscarInstructor();


        // cout<<"Rutinas vencidas:\n";
        // cout<<menu1.vencimientoRutinas(fechaActual);
        // cout<<"Ingrese una tecla y enter para continuar...\n";
		// cin>>x;
        }break;


        case 5:{
        // char x;
        // cout<<"Digita el ID de la rutina\n";
        // cin>>rutina;
        // cout<<menu1.toStringRutina();
        // cout<<"Ingrese una tecla y enter para continuar...\n";
		// cin>>x;
        }break;


        case 6:{
        // char x;
        // cout<<"Digita el ID del Socio\n";
        // cin>>cedulaSocio;
        // cout<<"Nombre del socio:\n";
       //Personas tempSocio = listaInstructores->getSocioPorId(cedulaSocio);
        //cout << tempSocio.getnombreSocio() + "\n\n";
        // cout<<"Digite el peso en kilos:\n";
        // cin>>peso;
        // cout<<"Digite la altura en metros:\n";
        // cin>>altura;
        // cout<<"Digite el porcentje de grasa:\n";
        // cin>>porcentajeGrasa;
       // socio.setpesoSocio(peso);
        //socio.setaltura(altura);
        //socio.setporcentajeGrasa(porcentajeGrasa);
        // cout<<"Ingrese una tecla y enter para continuar...\n";
		// cin>>x;
        }break;


        case 7:{
        // char x;
        // cout<<"Digita el ID del Socio\n";
        // cin>>cedulaSocio;
        // cout<<"Nombre del socio:\n";
        //Personas tempSocio = listaInstructores->getSocioPorId(cedulaSocio);
        //cout<<tempSocio.getnombreSocio() + "\n\n";
        //cout<<"Datos del socio :\n";
        //cout<<menu1.toString();
        // cout<<"Ingrese una tecla y enter para continuar...\n";
		// cin>>x;
        }break;
        system("cls");
    //  }while(opc==8);
    //  {
    //      cout<<"Volviendo\n";
    //  }}
     case 8:{
        char x;
     
        //  do{
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
                // char x;
                //cout<<"Digite el nombre de la clase grupal: \n";
                //cin>>nombreGrupal;
                //grupo.setNombre(nombreGrupal);
                 //cout<<"Digite el nombre del instructor para la clase grupal: \n";
                //cin>>nombreInstructorGrupal;
                //grupo.setInstructor(nombreInstructorGrupal);
                 //cout<<"Digite el salón deseado(A,B,C):\n";
                 //cin>>Salon;
                 //grupo.setSalon(Salon);
                 //cout<<"Digita el tamaño que deseas para el grupo: ";
	            //cin>>tam;
	            // Grupal grupo(tam);
	            //cout<<"\n";
                //cout<<"Digite el dia y la hora: \n";
                //cin>>horario;
                // grupo.setHorario(horario)  
                //cout<<menu1.toStringGrupal();             
                // cout<<"Digite el Dia que desea crear la clase(L,M,K,J,V,S,D):\n";
                // cout<<"|Lunes=L|Martes=M|Miercoles=K|Jueves=J|Viernes=V|Sabado=V|Domingo=D|\n";
                // cin>>Dia;
                // cout<<"Digite la Hora que desea para la clase, en base al horario de 24 horas\n";
                // cin>>hora;
                // grupo.crearGrupal(Dia,hora);
                // cout<<"Ingrese una tecla y enter para continuar...\n";
                // cin>>x;
            
            }break;


            case 2:{
                // char x;
                // cout<<"Digite el nombre de la clase:\n";
                // cin>>nombreGrupal;
                //cout<<menu1.toStringHorario();
                //cout<<menu1.toStringGrupal(); 
                // cout>>"Socios Matriculados:\n";
                // cout<<menu1.toStringVectorGrupal();
                // cout<<"Ingrese una tecla y enter para continuar...\n";
                // cin>>x;
            }break;


            case 3:{
                // char x;
                // cout<<"Digite el nombre de la clase:\n";
                // cin>>nombreGrupal;
	            //cout<<"Digita la cantidad de socios que deseas matricular: ";
	            //cin>>cantidad;
	            //cont=0;
	            //while(cont<cantidad){
		        //cout<<"Digita el socio "<<cont+1<<": ";
		        //cin>>nombreSocio;
		        //grupo.insertarSocio(nombreSocio);
		        //cont++;
	            //}
                // cout<<"Ingrese una tecla y enter para continuar...\n";
                // cin>>x;
            }break;}
    //  }while (opc==4);
     system("cls");
     }
        }
    // }while(opc==9){
        // cout<<"Adios\n";
    // }
    // return 0;
}
    
     }}}