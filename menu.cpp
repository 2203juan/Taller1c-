#include <iostream> //componente que utilizamos en c++ para entrada y salida
#include "funciones.h"// Incluimos la librería local creada previamente, para usar sus funciones-
using namespace std;


int main() {
	while(1){ //Loop infinito, con el fin de mostrar el menú cada vez que se realice una operacion


	//En este fragmento se declaran las variables que contendran los valores como resultado de la funcion
	int opcion=0, x1, x2, resultado,longArregloEntero = 7;
	int arregloEntero[] = {5,2,7,3,4,8,1};
	int arregloOrdenado[longArregloEntero];
	int longArregloPrincipal =  9, longArregloBuscado = 2;
	char cadena1[] = "mi cadena", cadenaBuscada[] = "ena";

	//En este fragmento se imprime el menu, que saldra para elegir la operacion que se quiere realizar.
	cout<<"MENU, digite la función que deseas utilizar"<<endl;
	cout<<"1 = Exponenciacion"<<endl;
	cout<<"2 = Busqueda Secuencial"<<endl;
	cout<<"3 = Ordenamiento Burbuja"<<endl;
	cout<<"4 = Ordenamiento Seleccion"<<endl;
	cout<<"5 = Emparejamiento Cadenas"<<endl;
	cin>>opcion;//En esta variable se guarda la opcion que se va a realizar
	cout<<endl;//Se imprime una funcion

	/*/ 
	En esta sentencia switch utilizamos los casos para dar opciones al usuario de seleccionar una función
	de las que hemos creado y este las pueda utilizar a su gusto 

	/*/
	while (!(opcion>=1 && opcion<=5)){
		cout<<"Ingrese un numero valido: ";
		cin>>opcion;	
	}
	switch (opcion){
		case 1:
			cout<<"Ingrese la base: ";
			cin>>x1;
			cout<<"Ingrese el exponente: ";
			cin>>x2;
			resultado = exponenciacion (x1,x2);
			cout<<x1<<" elevado a la "<<x2<<" es :"<<resultado<<endl;
			cout<<"\n";			
			break;
		case 2:
			cout<<"El arreglo de entrada es: ";
			imprimirArregloInt(arregloEntero, longArregloEntero);
			cout<<"Ingrese el numero que desea buscar: ";
			cin>>x1;
			resultado = busquedaSecuencial (arregloEntero, longArregloEntero, x1);
			if (resultado == -1){
				cout<<"El numero no se encuentra en el arreglo"<<endl;
				cout<<"\n";	
			}
			else{
				cout<<"El numero esta en la posicion: "<<resultado<<endl;
				cout<<"\n";	
			}
			break;
		case 3:
			cout<<"El arreglo de entrada es: ";
			imprimirArregloInt(arregloEntero, longArregloEntero);
			ordenamientoBurbuja (arregloEntero, longArregloEntero);
			cout<<"EL arreglo ordenado de menor a mayor es: ";
			imprimirArregloInt(arregloEntero, longArregloEntero);
			cout<<"\n";	
			break;

		case 4: 
			cout<<"El arreglo de entrada es: ";
			imprimirArregloInt(arregloEntero, longArregloEntero);
			ordenamientoSeleccion (arregloEntero, longArregloEntero);
			cout<<"El arrego ordenado de  menor a mayor es: ";
			imprimirArregloInt(arregloEntero, longArregloEntero);
			cout<<"\n";	
			break;
		case 5:
			resultado= emparejamientoCadenas (cadena1, longArregloPrincipal, cadenaBuscada, longArregloBuscado);
			
			cout<<"La cadena de entrada es: ";
			imprimirArregloChar(cadena1, longArregloPrincipal);
			cout<<"El patron a buscar es: ";
			imprimirArregloChar(cadenaBuscada, longArregloBuscado);

			if (resultado !=-1){
				cout<<"La posicion en la que se encuentra el patron buscado es: "<<resultado<<endl;
				cout<<"\n";	
			}
			else{
				cout<<"El patron no se encuentra en la cadena de entrada "<<endl;
				cout<<"\n";	
			}
			break;
	}
	}	
	return 0;
}

