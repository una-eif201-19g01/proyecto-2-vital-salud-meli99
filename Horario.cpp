#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
#include <string.h>
using namespace std;
const int tam=7;
const int horas=12;

class Coleccion{
	
private:
	string matriz[tam][horas];
public:
	
	Coleccion(){
		for (int i = 0; i<tam; i++)
		for (int j = 0; j<horas ; j++)
			matriz[i][j]=0;
	}
	
	Coleccion(int a){
		for (int i = 0; i<tam; i++)
		for (int j = 0; j<horas;j++)
			matriz[i][j]=a;
	}
	
	void setPos (int i, int j, int val){
		matriz[i][j] = val;
	}
	
	int getPos (int i, int j){
		return matriz[i][j];
	}
	
	void llenarColeccion() {
		int valor;
		for (int i = 0; i<tam;i++)
		for (int j = 0; j<horas;j++)
		{ cout<<"valor["<<i<<"]["<<j<<"]: ";
		cin>>valor;
		setPos(i,j,valor); } }
		
		~ Coleccion() {}
		
		string toStringHorario(){
			stringstream s;
			for (int i = 0; i< tam;i++){
			for (int j = 0; j< horas;j++){
				s<<"|Lunes=L|Martes=M|Miercoles=K|Jueves=J|Viernes=V|Sabado=V|Domingo=D|\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|Horario| L | M | K | J | V | S | D |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|7 a.m. |"  <<matriz[0][0]<<"  |"<<matriz[1][0]<<"  |"<<matriz[2][0]<<"  |"<<matriz[3][0]<<"  |"<<matriz[4][0]<<"  |"<<matriz[5][0]<<"  |"<<matriz[6][0]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|8 a.m. |"  <<matriz[0][1]<<"  |"<<matriz[1][1]<<"  |"<<matriz[2][1]<<"  |"<<matriz[3][1]<<"  |"<<matriz[4][1]<<"  |"<<matriz[5][1]<<"  |"<<matriz[6][1]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|9 a.m. |"  <<matriz[0][2]<<"  |"<<matriz[1][2]<<"  |"<<matriz[2][2]<<"  |"<<matriz[3][2]<<"  |"<<matriz[4][2]<<"  |"<<matriz[5][2]<<"  |"<<matriz[6][2]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|10 a.m.|"  <<matriz[0][3]<<"  |"<<matriz[1][3]<<"  |"<<matriz[2][3]<<"  |"<<matriz[3][3]<<"  "<<matriz[4][3]<<"  |"<<matriz[5][3]<<"  |"<<matriz[6][3]<<"  |\n";
				s<<"--------------------------------------------------------------\n"; 
				s<<"|11 a.m.|"  <<matriz[0][4]<<"  |"<<matriz[1][4]<<"  |"<<matriz[2][4]<<"  |"<<matriz[3][4]<<"  |"<<matriz[4][4]<<"  |"<<matriz[5][4]<<"  |"<<matriz[6][4]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|12 p.m.|"  <<matriz[0][5]<<"  |"<<matriz[1][5]<<"  |"<<matriz[2][5]<<"  |"<<matriz[3][5]<<"  |"<<matriz[4][5]<<"  |"<<matriz[5][5]<<"  |"<<matriz[6][5]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|1 p.m. |"  <<matriz[0][6]<<"  |"<<matriz[1][6]<<"  |"<<matriz[2][6]<<"  |"<<matriz[3][6]<<"  |"<<matriz[4][6]<<"  |"<<matriz[5][6]<<"  |"<<matriz[6][6]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|2 p.m. |"  <<matriz[0][7]<<"  |"<<matriz[1][7]<<"  |"<<matriz[2][7]<<"  |"<<matriz[3][7]<<"  |"<<matriz[4][7]<<"  |"<<matriz[5][7]<<"  |"<<matriz[6][7]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|3 p.m. |"  <<matriz[0][8]<<"  |"<<matriz[1][8]<<"  |"<<matriz[2][8]<<"  |"<<matriz[3][8]<<"  |"<<matriz[4][8]<<"  |"<<matriz[5][8]<<"  |"<<matriz[6][8]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|4 p.m. |"  <<matriz[0][9]<<"  |"<<matriz[1][9]<<"  |"<<matriz[2][9]<<"  |"<<matriz[3][9]<<"  |"<<matriz[4][9]<<"  |"<<matriz[5][9]<<"  |"<<matriz[6][9]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|5 p.m. |"  <<matriz[0][10]<<"  |"<<matriz[1][10]<<"  |"<<matriz[2][10]<<"  |"<<matriz[3][10]<<"  |"<<matriz[4][10]<<"  |"<<matriz[5][10]<<"  |"<<matriz[6][10]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|6 p.m. |"  <<matriz[0][11]<<"  |"<<matriz[1][11]<<"  |"<<matriz[2][11]<<"  |"<<matriz[3][11]<<"  |"<<matriz[4][11]<<"  |"<<matriz[5][11]<<"  |"<<matriz[6][11]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				s<<"|7 p.m. |"  <<matriz[0][12]<<"  |"<<matriz[1][12]<<"  |"<<matriz[2][12]<<"  |"<<matriz[3][12]<<"  |"<<matriz[4][12]<<"  |"<<matriz[5][12]<<"  |"<<matriz[6][12]<<"  |\n";
				s<<"--------------------------------------------------------------\n";
				
				
			s<<endl;
			}}
			s<<endl;
			return s.str();
		}
};