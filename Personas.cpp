#include "Personas.h"

    Personas::Personas(){
    listaRutinas = new ListaRutinas();

    altura=0;
    porcentajeGrasa=0;
    nombreSocio="_";
    cedulaSocio=0;
    correoSocio="_";
    telefonoSocio=0;
    fechaInscripcionSocio=0;
    pesoSocio=0;
    masaCorporalSocio=0;
    masaMuscularSocio=0; 
    idInstructor = 0;;  
    }     

    void Personas::setporcentajeGrasa(float porcentajeGrasa){
        Personas::porcentajeGrasa=porcentajeGrasa;
    }
    float Personas::getporcentajeGrasa(){
        return porcentajeGrasa;
    }

    void Personas::setaltura(float altura){
        Personas::altura=altura;
     }
    float Personas::getaltura(){
        return altura;
     }

    void Personas::setnombreSocio(string nombreSocio){
        Personas::nombreSocio=nombreSocio;
    }
    string Personas::getnombreSocio(){
        return nombreSocio;
    }

    void Personas::setcedulaSocio(int cedulaSocio){
    Personas::cedulaSocio=cedulaSocio;
    }
    int Personas::getcedulaSocio(){
        return cedulaSocio;
    }

    void Personas::setcorreoSocio(string correoSocio){
    Personas::correoSocio=correoSocio;
    }
    string Personas::getcorreoSocio(){
        return correoSocio;
    }

    void Personas::settelefonoSocio(int telefonoSocio){
    Personas::telefonoSocio=telefonoSocio;
    }
    int Personas::gettelefonoSocio(){
        return telefonoSocio;
    }

    void Personas::setfechaInscripcionSocio(float fechaInscripcionSocio){
    Personas::fechaInscripcionSocio=fechaInscripcionSocio;
    }
    float Personas::getfechaInscripcionSocio(){
        return fechaInscripcionSocio;
    }

    void Personas::setpesoSocio(int pesoSocio){
    Personas::pesoSocio=pesoSocio;
    }
    int Personas::getpesoSocio(){
        return pesoSocio;
    }

    void Personas::setmasaCorporalSocio(int masaCorporalSocio){
    Personas::masaCorporalSocio=masaCorporalSocio;
    }
    int Personas::getmasaCorporalSocio(){
        return masaCorporalSocio;
    }

    void Personas::setmasaMuscularSocio(int masaMuscularSocio){
    Personas::masaMuscularSocio=masaMuscularSocio;
    }
    int Personas::getmasaMuscularSocio(){
        return masaMuscularSocio;
    }

    float Personas::getPerdidaGrasa() {
        return perdidaDeGrasa;
    }

    int Personas::getIdInstructor(){
        return idInstructor;
    }

    void Personas::setIdInstructor(int id) {
        idInstructor = id;
    }
    

//metodos
    string Personas::toString(){
        // streamstring per;
        // per<<"El nombre del socio es: "<<nombreSocio<<endl;
        // per<<"El ID del socio es: "<<cedulaSocio<<endl;
        // per<<"El correo del socio es: "<<correoSocio<<endl;
        // per<<"El telefono del socio es: "<<telefonoSocio<<endl;
        // per<<"La fecha de Inscripcion del socio es: "<<fechaInscripcionSocio<<endl;
        // per<<"El peso del Socio es: "<<pesoSocio<<endl;
        // per<<"La masa corporal del Socio es: "<<masaCorporalSocio<<endl;
        // per<<"La masa muscular del Socio es: "<<masaMuscularSocio<<endl;
        // return per.str();
        return "";
    }
    float Personas::perdidaGrasa(int pesoActual){
        perdidaDeGrasa = pesoSocio - pesoActual;
        return(pesoSocio - pesoActual);
    }

string Personas::getSociosPorInstructor(string nombreInstructor) {
    string str = "";

    str+=to_string(cedulaSocio) + "\t" + nombreSocio + "\t" + nombreInstructor; 

    return str;
}

void Personas::addRutina(Rutina rutina) {
    listaRutinas->insertarFinal(rutina);
}

string Personas::toStringGetRutinas() {
    return listaRutinas->toStringGetRutinas();
}
float Personas::IMC(){
     float IMC=0;
    IMC=((pesoSocio)/altura*altura);
    return IMC;
}
string Personas::estado(){
    float _IMC= IMC();
    if(_IMC<18.5){
        return "Bajo Peso";
    }else{
    if(18.5<=_IMC<=24.9){
        return "Normal";
    }else{
        if(25<=_IMC<=29.9){
            return "Sobrepeso";
        }else{
            if(30<=_IMC && _IMC<=34.9){
                return "Obesidad 1";
            }else{
                if(35<=_IMC && _IMC<=39.9){
                    return "Obesidad 2";
                }else{
                    if(40<=_IMC && _IMC<=49.9){
                        return "Obesidad 3";
                    }else
                    {
                        return "Obesidad 4";
                    }
                    
                }
            }
        }
    }
    
    }
    
}

string Personas::vencimientoRutinas(float fechaActual) {
    return listaRutinas->vencimientoRutinas(fechaActual);
}