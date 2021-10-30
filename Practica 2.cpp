#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctime>
#include <stdio.h>
#include <math.h>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    int cont;
    cont = 0;
    string nom;
    int edad,peso,sexo,enf,ejer;
    float IMC,calorias,factor,alt2,alt;
    int cereales,verduras,fruta,animal_leguminosa,leche,grasas,azucares,libres;
    
	cout<<endl<<"En esta aplicacion/programa me doy a la tarea de crear un Sistema Experto que pueda determinar";
    cout<<endl<<"una aporximacion a una dieta balanceada personalizada utilizando datos del usuario. \n";	
	cout<<endl<<"(Presione Enter para continuar) \n";
    std::cin.get();
    
    system("cls");
    
    
    	cout<<endl<<"Ingrese su nombre:  \n";
        cin>>nom;
        cout<<endl<<"Ingrese su edad:  \n";
        cin>>edad;
        cout<<endl<<"Seleccione su sexo:  \n";
        cout<<endl<<"1)Hombre \n2)Mujer \n";
        cout<<endl<<"opcion: ";
        cin>>sexo;
        cout<<endl<<"Ingrese su altura (en cm):  \n";
        cin>>alt;
        cout<<endl<<"Ingrese su peso (en kg)):  \n";
        cin>>peso;
        cout<<endl<<"Ingrese cuantas veces hace ejercicio a la semana:  \n";
        cin>>ejer;
        cout<<endl<<"Seleccione alguna enfermedad cronica que padezca:  \n";
        cout<<endl<<"1)Ninguna \n2)Diabetes \n3)Hipertension \n";
    	cout<<endl<<"opcion: ";
    	cin>>enf;
    	
    	alt2 = alt/100;
    	IMC = peso/pow(alt2,2);
    	
    	system("cls");
    	 
    	cout<<endl<<"Indice de masa corporal del usuario: ";
    	cout<<IMC<<endl;
    
    	cout<<endl<<"La organizacion Mundial de la salud estima que un peso saludable situa entre los valores ";
    	cout<<endl<<"de 18.5 y 24.9 de indice de masa corporal \n";
    	
    	if(IMC<18.5)
    	{
    		cout<<endl<<"El usuario tiene 'Peso insuficiente' ";
		}
		else if(18.5<=IMC && IMC<24.9)
		{
			cout<<endl<<"El usuario tiene 'Peso normal' ";
		}
    	else if(25<IMC && IMC<29.9)
		{
			cout<<endl<<"El usuario tiene 'Sobrepeso' ";
		}
    	else if(30<IMC && IMC<34.9)
		{
			cout<<endl<<"El usuario tiene 'Obesidad tipo I' ";
		}
		else if(35<IMC && IMC<39.9)
		{
			cout<<endl<<"El usuario tiene 'Obesidad tipo II' ";
		}
		else if(40<IMC && IMC<49.9)
		{
			cout<<endl<<"El usuario tiene 'Obesidad tipo III' ";
		}
    	else if(50<IMC)
		{
			cout<<endl<<"El usuario tiene 'Obesidad extrema' ";
		}
    	//////////////////////////////////////////////////////
    	
    	
    	if(ejer == 0)
    	{
    		factor = 1.2;
		}
		else if(1<=ejer && ejer<3)
		{
			factor = 1.375;
		}
		else if(3<=ejer && ejer<5)
		{
			factor = 1.55;
		}
		else if(6<=ejer && ejer<=7)
		{
			factor = 1.725;
		}
    	
///////////////////////////////////////////////////////////////
    	
    	if(sexo == 2)
    	{
    		calorias = (655 + (9.6*peso)) + (1.8*(alt)-(4.7*(edad)))*factor;
		}
    	if(sexo == 1)
    	{
    		calorias = (66 + (13.7*peso)) + (5*(alt)-(6.8*(edad)))*factor;
		}
    	
    	cout<<endl<<endl<<"El usuario debe consumir: "<<calorias<<" calorias al dia. ";
    	
    	
    	if(1000<calorias && calorias<1300)
    	{
    		cereales = 5;
    		verduras = 5;
    		fruta = 3;
    		animal_leguminosa = 2;
    		leche = 4;
    		grasas = 2;
    		azucares = 0;
    		libres = 1;
		}
    	else if(1300<=calorias && calorias<1600)
    	{
    		cereales = 6;
    		verduras = 4;
    		fruta = 3;
    		animal_leguminosa = 4;
    		leche = 3;
    		grasas = 2;
    		azucares = 0;
    		libres = 0;
		}
    	else if(1600<=calorias && calorias<2000)
    	{
    		cereales = 8;
    		verduras = 5;
    		fruta = 4;
    		animal_leguminosa = 5;
    		leche = 3;
    		grasas = 2;
    		azucares = 0;
    		libres = 1;
		}
		else if(2000<=calorias && calorias<2600)
    	{
    		cereales = 9;
    		verduras = 5;
    		fruta = 5;
    		animal_leguminosa = 5;
    		leche = 5;
    		grasas = 3;
    		azucares = 5;
    		libres = 2;
		}
    		else if(2600<=calorias && calorias<3100)
    	{
    		cereales = 11;
    		verduras = 7;
    		fruta = 5;
    		animal_leguminosa = 6;
    		leche = 6;
    		grasas = 4;
    		azucares = 9;
    		libres = 4;
		}
		
		if(enf==2)
		{
			azucares=0;
			grasas=grasas-1;
		}
		if(enf==3)
		{
			azucares=azucares-2;
			grasas=grasas-1;
			
		}
		
		
		cout<<endl<<"Considerando el numero de calorias, una dieta balanceada de acuerdo a las necesidades del usuario";
        cout<<endl<<"tendria este numero de porciones: \n";
		cout<<endl<<"Cereales: "<<cereales;
		cout<<endl<<"Verduras: "<<verduras;
		cout<<endl<<"Frutas: "<<fruta;
		cout<<endl<<"Origen animal/Leguminosas: "<<animal_leguminosa;
		cout<<endl<<"Leche y sustitutos: "<<leche;
		cout<<endl<<"Grasas: "<<grasas;
		cout<<endl<<"Azucares: "<<azucares;
		cout<<endl<<"Alimentos libres de energia: "<<libres;
		
		cout<<endl<<endl;
	     system("pause");
       	
	 	int opc;
	 	int salida;
    do{
        system("cls");
        cout<<endl<<"Porciones: ";
        cout<<endl<<"Cereales: "<<cereales;
		cout<<endl<<"Verduras: "<<verduras;
		cout<<endl<<"Frutas: "<<fruta;
		cout<<endl<<"Origen animal/Leguminosas: "<<animal_leguminosa;
		cout<<endl<<"Leche y sustitutos: "<<leche;
		cout<<endl<<"Grasas: "<<grasas;
		cout<<endl<<"Azucares: "<<azucares;
		cout<<endl<<"Alimentos libres de energia: "<<libres;
        
    	cout<<endl<<endl<<"INFORMACION SOBRE PORCIONES DE ALIMENTOS ";
    	cout<<endl<<"Elija una opcion: \n";
        cout<<endl<<"1)Cereales y Tuberculos";
        cout<<endl<<"2)Verduras";
        cout<<endl<<"3)Frutas";
        cout<<endl<<"4)Alimentos de origen animal";
        cout<<endl<<"5)Leche y Sustituos";
        cout<<endl<<"6)Grasas";
        cout<<endl<<"7)Azucares";
        cout<<endl<<"8)Libres";
    	cout<<endl<<"9)Salir";
    	cout<<endl<<"Opcion:";
    	opc=getche();
    	
    	switch(opc)
    	{
    		case '1':
    			{
    				int opc_;
    				do
    				{
    				    system("cls");
    					cout<<endl<<"1)Cereales y Tuberculos con Grasa";
    					cout<<endl<<"2)Cereales y Tuberculos sin Grasa";
    					cout<<endl<<"3)Salir\n";
    					cout<<endl<<"Opcion: ";
                        cin>>opc_;
                        
                        if(opc_==1)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Cereales y Tuberculos-con Grasa.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	                            archivo.close();
                                    system("pause");
                                	system("cls");
	                            
	                            
						}
						else if(opc_==2)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Cereales y Tuberculos-sin Grasa.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	
                              	archivo.close();
                             	system("pause");
                               	system("cls");
						}
						else if (opc_!= 1 && opc_!= 2 && opc_!= 3)
						{
							cout<<endl<<"No seleccionaste una opcion valida \n";
							system("pause");
                            system("cls");
						}
					}while(opc_!=3);
    				    
    				break;
				}
    		case '2':
    			{
    				int opc_;
    				do
    				{
    				    system("cls");
    					cout<<endl<<"1)Verduras ";
    					cout<<endl<<"2)Verduras de consumo libre ";
    					cout<<endl<<"3)Salir\n";
    					cout<<endl<<"Opcion: ";
                        cin>>opc_;
                        
                        if(opc_==1)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Verduras.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	                            archivo.close();
                                    system("pause");
                                	system("cls");
	                            
	                            
						}
						else if(opc_==2)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Verduras-Consumo libre.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	
                              	archivo.close();
                             	system("pause");
                               	system("cls");
						}
						else if (opc_!= 1 && opc_!= 2 && opc_!= 3)
						{
							cout<<endl<<"No seleccionaste una opcion valida \n";
							system("pause");
                            system("cls");
						}
					}while(opc_!=3);
    				
    				break;
				}
			case '3':
				{
					system("cls");
						ifstream archivo;
                         	string texto;
	
                            	archivo.open("Frutas.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	
                              	archivo.close();
                             	system("pause");
                               	system("cls");
					
					break;
				}
    		case '4':
    			{
    				int opc_;
    				do
    				{	
				    	system("cls");			
    					cout<<endl<<"1)Origen animal-Muy bajos en grasa ";
    					cout<<endl<<"2)Origen animal-Bajos en grasa ";
    					cout<<endl<<"3)Origen animal-Moderados en grasa ";
    					cout<<endl<<"4)Origen animal-Altos en grasa ";
    					cout<<endl<<"5)Leguminosas ";					
    					cout<<endl<<"6)Salir\n";
    					cout<<endl<<"Opcion: ";
                        cin>>opc_;
                        
                        if(opc_==1)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Origen animal-Muy bajos en grasa.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	                            archivo.close();
                                    system("pause");
                                	system("cls");
	                            
	                            
						}
						else if(opc_==2)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Origen animal-Bajos en grasa.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	
                              	archivo.close();
                             	system("pause");
                               	system("cls");
						}
							else if(opc_==3)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Origen animal-Moderados en grasa.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	
                              	archivo.close();
                             	system("pause");
                               	system("cls");
						}
							else if(opc_==4)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Origen animal-Altos en grasa.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	
                              	archivo.close();
                             	system("pause");
                               	system("cls");
						}
							else if(opc_==5)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Leguminosas.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	
                              	archivo.close();
                             	system("pause");
                               	system("cls");
						}
						else if (opc_!= 1 && opc_!= 2 && opc_!= 3 && opc_!= 4 && opc_!= 5 && opc_!= 6)
						{
							cout<<endl<<"No seleccionaste una opcion valida \n";
							system("pause");
                            system("cls");
						}
					}while(opc_!=6);
    				
    				break;
				}
    		case '5':
    			{
    				int opc_;
    				do
    				{
    				    system("cls");
    					cout<<endl<<"1)Leche y Sustitutos-Entera ";
    					cout<<endl<<"2)Leche y Sustitutos-Descremada ";
    					cout<<endl<<"3)Salir\n";
    					cout<<endl<<"Opcion: ";
                        cin>>opc_;
                        
                        if(opc_==1)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Leche y Sustitutos-Entera.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	                            archivo.close();
                                    system("pause");
                                	system("cls");
	                            
	                            
						}
						else if(opc_==2)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Leche y Sustitutos-Descremada.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	
                              	archivo.close();
                             	system("pause");
                               	system("cls");
						}
						else if (opc_!= 1 && opc_!= 2 && opc_!= 3)
						{
							cout<<endl<<"No seleccionaste una opcion valida \n";
							system("pause");
                            system("cls");
						}
					}while(opc_!=3);
    				
    				break;
				}
			case '6':
				{
						int opc_;
    				do
    				{
    				    system("cls");
    					cout<<endl<<"1)Grasas- Monoinsaturadas ";
    					cout<<endl<<"2)Grasas- Polinsaturadas ";
    					cout<<endl<<"3)Grasas-Saturadas y Trans ";
    					cout<<endl<<"4)Salir\n";
    					cout<<endl<<"Opcion: ";
                        cin>>opc_;
                        
                        if(opc_==1)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Grasas- Monoinsaturadas.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	                            archivo.close();
                                    system("pause");
                                	system("cls");
	                            
	                            
						}
						else if(opc_==2)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Grasas- Polinsaturadas.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	
                              	archivo.close();
                             	system("pause");
                               	system("cls");
						}
						else if(opc_==3)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Grasas-Saturadas y Trans.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	
                              	archivo.close();
                             	system("pause");
                               	system("cls");
						}
				    	else if (opc_!= 1 && opc_!= 2 && opc_!= 3 && opc_!= 4)
						{
							cout<<endl<<"No seleccionaste una opcion valida \n";
							system("pause");
                            system("cls");
						}
					}while(opc_!=4);
					
					break;
				}
    		case '7':
    			{
    				int opc_;
    				do
    				{
    				    system("cls");
    					cout<<endl<<"1)Azucares ";
    					cout<<endl<<"2)Azucares-Con grasa ";
    					cout<<endl<<"3)Salir\n";
    					cout<<endl<<"Opcion: ";
                        cin>>opc_;
                        
                        if(opc_==1)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Azucares.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	                            archivo.close();
                                    system("pause");
                                	system("cls");
	                            
	                            
						}
						else if(opc_==2)
                        {
                        	ifstream archivo;
                         	string texto;
	
                            	archivo.open("Azucares-Con grasa.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	
                              	archivo.close();
                             	system("pause");
                               	system("cls");
						}
						else if (opc_!= 1 && opc_!= 2 && opc_!= 3)
						{
							cout<<endl<<"No seleccionaste una opcion valida \n";
							system("pause");
                            system("cls");
						}
					}while(opc_!=3);
    				
    				
    				break;
				}
    		case '8':
    			{
    				system("cls");
    				ifstream archivo;
                         	string texto;
	
                            	archivo.open("Libres de energia.txt",ios::in);
	
                            	if(archivo.fail())
                              	{
	                            	cout<<"no se pudo abrir el archivo";
	                            	exit(1);
                             	}
	
	                            while(!archivo.eof())
                             	{
                        		getline(archivo,texto);
	                          	cout<<texto<<endl;
                               	}
	                            archivo.close();
                                    system("pause");
                                	system("cls");
    				
    				break;
				}
			case '9':
					{
						salida=1;
						exit(-1);
						break;
					}
    		default:
    			{
    				cout<<"No has escogido una opcion valida";
    				break;
				}
    		
    		
		}
    	 	  	

	}while(opc!=9);
    		
		
}
