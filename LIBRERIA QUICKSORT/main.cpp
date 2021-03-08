#include <iostream>
#include "lquicksort.c"
# include <fstream>
using namespace std;
#define T 1250

void Ingresarelementos( int A[T], int n);
void Imprimirlementos( int A[T], int n);
void Ordenamientolementos( int A[T], int n);


int main(int argc, char** argv) {
	int num, A[T];
	cout<<endl<<"Digite el numero de elmentos del arreglo: ";
	cin>>num;
	Ingresarelementos( A, num);
	Imprimirlementos( A, num);
	Ordenamientolementos( A, num);

}

void Ingresarelementos( int A[T], int n) {
    cout<<endl<<"\t\t\t-----------------------INGRESO DE ELEMENTOS----------------------"<<endl<<endl;
	for(int i=0; i<n; i++) {
		cout<<"A["<<i+1<<"] =";
		cin>>A[i];
	}
}

void Imprimirlementos( int A[T], int n) {
	ofstream quicksort;
	quicksort.open("QUICKSORT.txt", ios::app);
	quicksort<<"\t\t--------ElEMENTOS INGRESADOS/DESORDENADOS------------"<<endl<<endl;
	cout<<"\t\t\t-----------------------ELEMENTOS INGRESADOS----------------------"<<endl<<endl;
	for(int i=0; i<n; i++) {
		cout<<"A["<<i<<"] = "<<A[i];
		cout<<endl;
		quicksort<<"A["<<i<<"] = "<<A[i]<<endl;
	}
	quicksort.close();
}

void Ordenamientolementos( int A[T], int n)
{
	Quicksort(A,0, n-1);
    ofstream quicksort;
	quicksort.open("QUICKSORT.txt", ios::app);
	quicksort<<"\t\t--------ElEMENTOS ORDENADOS-QUICKSORT------------"<<endl<<endl;
	cout<<endl<<"\t\t\t---------------------ORDENAMIENTO QUICKSORT---------------------"<<endl<<endl;
	for(int i=0; i<n; i++) {
		cout<<"A["<<i<<"] = "<<A[i];
		cout<<endl;
		quicksort<<"A["<<i<<"] = "<<A[i]<<endl;
	}
	quicksort.close();
}



