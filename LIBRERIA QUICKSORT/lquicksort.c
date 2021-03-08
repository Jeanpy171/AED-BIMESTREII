#define T 1250

void Quicksort(int A[T], int primero, int ultimo) {
	int central, i, j, pivote;

	central = (primero+ultimo)/2; // Obtener la posición central de los índices del arreglo.
	pivote = A[central]; // Obtener el elemento central de los elmentos del array.
	//Separa dos subsecciones del arreglo, inferior y superior.
	i = primero;
	j = ultimo;

	do {
		//Separar en dos subsecciones el arreglo principal
		while(A[i]<pivote) { //separando valores menores del pivote
			i++;
		}

		while(A[j]>pivote) { //separando valores mayores del pivote
			j--;
		}

		if(i<=j) {
			int temporal;
			temporal = A[i];
			//Intercambio de valores
			A[i] = A[j];
			A[j] = temporal;
			i++;
			j--;
		}


	} while(i<=j);

	if(primero<j) {
		Quicksort(A, primero, j);
	}
	if(i<ultimo) {
		Quicksort(A, i, ultimo);
	}


}

