#include <iostream> //componente que utilizamos en c++ para entrada y salida
using namespace std;


int exponenciacion (int base, int exponente){
	/*/
	Esta funcion tiene por objetivo calcular la potencia de un número entero
	cuya base y exponente se piden por teclado al usuario
	
	/*/
	int resultado = 1;

	for (int i = 1; i <= exponente; i++){
		resultado *= base;
	}
	
	return resultado;
}


int busquedaSecuencial (int * A, int n, int k){
	/*/
	Esta funcion tiene por objetivo encontrar un elemento k ingresado por el usuario, el cuál
	se buscará en un arreglo previamente definido, en caso de encontrarlo retorna la posición en
	la cual está el elemento k, y si no lo encuentra retorna -1
	/*/
	int i=0;
	
	while (i < n){
		if ( A [i] == k){
			return i;
		}
		i++;
	}
	
	return -1;
}

void ordenamientoBurbuja (int * A, int n){
	/*/
	Esta funcion tiene por objetivo ordenar ascendentemente un arreglo con números enteros
	recorriendo el arreglo con el fin de ir comparando cada uno de los datos dejando siempre el mayor de ultimo
	para poder lograr organizarlo de la manera indicada. 
	/*/	
	int temp;
	
	for (int i=0; i<=n-2; i++){
		for (int j=0; j<=n-2-i; j++){
			if (A[j+1] < A[j]){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp; 		
			}
		}
	}
}


void ordenamientoSeleccion (int * A, int n){

	/*/	
	Esta funcion tiene por objetivo ordenar ascendentemente un arreglo con números enteros
	recorriendolo con el fin de ir comparando cada uno de los datos para dejar siempre el valor
	mas pequeño de primero, logrando así organizarlo de la manera adecuada.
	/*/
	int temp;
	int min;

	for (int i=0; i<n-1; i++){
		min=i;
		for (int j=i+1; j<n; j++){
			if (A[j]< A[min]){
				min = j;
			
			}
			temp = A[i];
			A[i] = A[min];
			A[min] = temp;
		}
	}
	
}

int emparejamientoCadenas (char * T, int n, char * P, int m){
	/*/
	Esta funcion tiene por objetivo buscar la posicion de un patron ya definido en una cadena que tambien ha sido 
	definida y es más grande, retornando siempre el valor que representa la posicion de la primera letra del patron
	a buscar. 

	/*/
	int j;
	for (int i=0; i<=n-m; i++){
		j=0;
		while (j<m && P[j] == T [i + j]){
			j += 1;
		}
		if (j == m){
			return i;
		}
	}
	return -1;
}
/*/Las funciones posteriores se han definido con el fin de utilizarlas en el menu principal para imprimir tanto el 
arreglo que se quiere organizar como tambien el arreglo ya organizado, la primera es para imprimir arreglos enteros
y la segunda es para imprimir un arreglo de una cadena
/*/
void imprimirArregloInt (int * arreglo, int lon){
	for (int i=0; i<= lon-1; i++){
		cout<<arreglo[i]<<" ";	
	}
	cout<<endl;
}

void imprimirArregloChar (char * arreglo, int lon){
	for (int i=0; i<= lon-1; i++){
		cout<<arreglo[i];
	}
	cout<<endl;
}






































































