#include "Grupal.h"

        Grupal::Grupal(){
        nombre="_";
        instructor="_";
        salon="_";
        horario="_";
		        cantidad=0;
        tamano=10;
        for(int i=0;i<tamano;i++)
            grupo[i]="";
        }
       
        string Grupal::getInstructor(){
            return instructor;
        }
        void Grupal::setInstructor(string Insrtructor){
            Grupal::instructor=Insrtructor;
        }
        string Grupal::getNombre(){
            return nombre;
        }
        void Grupal::setNombre(string Nombre){
            Grupal::nombre=Nombre;
        }
        string Grupal::getSalon(){
            return salon;
        }
        void Grupal::setSalon(char Salon){
            Grupal::salon=Salon;
        }
        string Grupal::getHorario(){
            return horario;
        }
        void Grupal::setHorario(string Horario){
            Grupal::horario=Horario;
        }
		string Grupal::getMatriz(){
			return matriz;
		}
    
         string Grupal::toStringGrupal(){
             stringstream grupo;
             grupo<<"El nombre del Grupo es: "<<nombre<<endl;
             grupo<<"El nombre del Instructor es: "<<instructor<<endl;
             grupo<<"El salon correspondiente es el: "<<salon<<endl;
             grupo<<"El horario es de: "<<horario<<endl;
             return grupo.str();
         }

        string Grupal::crearGrupal(char Dia, char hora){
			string matriz[8][13];
            do{
		if((Dia=='L')&&(hora==7)){
		matriz[0][0]=nombre;    
		}
		else{
		if((Dia=='L')&&(hora==8)){
		matriz[0][1]=nombre;    
		}
		else{ 
		if((Dia=='L')&&(hora==9)){
		matriz[0][2]=nombre;    
		}
		else{ 
		if((Dia=='L')&&(hora==10)){
		matriz[0][3]=nombre;    
		} 
		else{ 
		if((Dia=='L')&&(hora==11)){
		matriz[0][4]=nombre;    
		} 
		else{ 
		if((Dia=='L')&&(hora==12)){
		matriz[0][5]=nombre;    
		} 
		else{ 
		if((Dia=='L')&&(hora==13)){
		matriz[0][6]=nombre;    
		} 
		else{ 
		if((Dia=='L')&&(hora==14)){
		matriz[0][7]=nombre;    
		} 
		else{ 
		if((Dia=='L')&&(hora==15)){
		matriz[0][8]=nombre;    
		} 
		else{ 
		if((Dia=='L')&&(hora==16)){
		matriz[0][9]=nombre;    
		} 
		else{ 
		if((Dia=='L')&&(hora==17)){
		matriz[0][10]=nombre;    
		} 
		else{ 
		if((Dia=='L')&&(hora==18)){
		matriz[0][11]=nombre;    
		} 
		else{ 
		if((Dia=='L')&&(hora==19)){
		matriz[0][12]=nombre;    
		}
		else{
			if((Dia=='M')&&(hora==7)){
			matriz[1][0]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==8)){
			matriz[1][1]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==9)){
			matriz[1][2]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==10)){
			matriz[1][3]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==11)){
			matriz[1][4]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==12)){
			matriz[1][5]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==13)){
			matriz[1][6]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==14)){
			matriz[1][7]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==15)){
			matriz[1][8]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==16)){
			matriz[1][9]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==17)){
			matriz[1][10]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==18)){
			matriz[1][11]=nombre;
			}
			else{
			if((Dia=='M')&&(hora==19)){
			matriz[1][12]=nombre;
			}
				else{
				if((Dia=='K')&&(hora==7)){
				matriz[2][0]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==8)){
				matriz[2][1]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==9)){
				matriz[2][2]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==10)){
				matriz[2][3]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==11)){
				matriz[2][4]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==12)){
				matriz[2][5]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==13)){
				matriz[2][6]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==14)){
				matriz[2][7]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==15)){
				matriz[2][8]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==16)){
				matriz[2][9]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==17)){
				matriz[2][10]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==18)){
				matriz[2][11]=nombre;
				}
				else{
				if((Dia=='K')&&(hora==19)){
				matriz[2][12]=nombre;
				}
					else{
					if((Dia=='J')&&(hora==7)){
					matriz[3][0]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==8)){
					matriz[3][1]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==9)){
					matriz[3][2]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==10)){
					matriz[3][3]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==11)){
					matriz[3][4]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==12)){
					matriz[3][5]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==13)){
					matriz[3][6]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==14)){
					matriz[3][7]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==15)){
					matriz[3][8]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==16)){
					matriz[3][9]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==17)){
					matriz[3][10]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==18)){
					matriz[3][11]=nombre;
					}
					else{
					if((Dia=='J')&&(hora==19)){
					matriz[3][12]=nombre;
					}
						else{
						if((Dia=='V')&&(hora==7)){
						matriz[4][0]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==8)){
						matriz[4][1]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==9)){
						matriz[4][2]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==10)){
						matriz[4][3]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==11)){
						matriz[4][4]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==12)){
						matriz[4][5]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==13)){
						matriz[4][6]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==14)){
						matriz[4][7]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==15)){
						matriz[4][8]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==16)){
						matriz[4][9]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==17)){
						matriz[4][10]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==18)){
						matriz[4][11]=nombre;
						}
						else{
						if((Dia=='V')&&(hora==19)){
						matriz[4][12]=nombre;
						}
							else{
							if((Dia=='S')&&(hora==7)){
							matriz[5][0]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==8)){
							matriz[5][1]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==9)){
							matriz[5][2]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==10)){
							matriz[5][3]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==11)){
							matriz[5][4]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==12)){
							matriz[5][5]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==13)){
							matriz[5][6]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==14)){
							matriz[5][7]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==15)){
							matriz[5][8]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==16)){
							matriz[5][9]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==17)){
							matriz[5][10]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==18)){
							matriz[5][11]=nombre;
							}
							else{
							if((Dia=='S')&&(hora==19)){
							matriz[5][12]=nombre;
							}
								else{
								if((Dia=='D')&&(hora==7)){
								matriz[6][0]=nombre;
								}
								else{
								if((Dia=='D')&&(hora==8)){
								matriz[6][1]=nombre;
								}
								else{
								if((Dia=='D')&&(hora==9)){
								matriz[6][2]=nombre;
								}
								else{
								if((Dia=='D')&&(hora==10)){
								matriz[6][3]=nombre;
								}
								else{
								if((Dia=='D')&&(hora==11)){
								matriz[6][4]=nombre;
								}
								else{
								if((Dia=='D')&&(hora==12)){
								matriz[6][5]=nombre;
								}
								else{
								if((Dia=='D')&&(hora==13)){
								matriz[6][6]=nombre;
								}
								else{
								if((Dia=='D')&&(hora==14)){
								matriz[6][7]=nombre;
								}
								else{
								if((Dia=='D')&&(hora==15)){
								matriz[6][8]=nombre;
								}
								else{
								if((Dia=='D')&&(hora==16)){
								matriz[6][9]=nombre;
								}
								else{
								if((Dia=='D')&&(hora==17)){
								matriz[6][10]=nombre;
								}
								else{	
								if((Dia=='D')&&(hora==18)){
								matriz[6][11]=nombre;
								}
								else{
								if((Dia=='D')&&(hora==19)){
								matriz[6][12]=nombre;
								}
								}
								}}}}}}}}}}}}
							}}}}}}}}}}}}
						}}}}}}}}}}}}}
					}}}}}}}}}}}}
				}}}}}}}}}}}}
			}}}}}}}}}}}}
		}}}}}
	}}}}}}}}}}}
    return "Clase grupal colocada";
            }while((hora<=20)||(hora>=6));
                return "NO es una hora valida";
            
}

    Grupal::Grupal(int n){
        cantidad=0;
        tamano=n;
        for(int i=0;i<tamano;i++)
            grupo[i]=' ';
    }
    Grupal::~Grupal(){}
    void Grupal::setCantidad(int can){
        if((can<tamano)&&(can>0))
            cantidad=can;
    }
    int Grupal::getCantidad(){
        return cantidad;
    }
    int Grupal::getTamano(){
        return tamano;
    }
	void Grupal::insertarSocio(string nombreSocio){
		if (cantidad < tamano)
			grupo[cantidad]=nombreSocio; 
		setCantidad(cantidad+1); 
	}
	string Grupal::toStringVectorGrupal(){
		stringstream x;
		x<<"Grupo: \n";
		x<<getNombre();
		for(int i=0;i<cantidad;i++){
		x<<"["<<grupo[i]<<"]";}
		return x.str();
	}


