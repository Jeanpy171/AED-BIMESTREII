#include <iostream>
#include "quicksort.h"
#include "imprimir.h"
#include <fstream>


using namespace std;
using namespace palabraclave;
using namespace imprimir;



int main()
{   ofstream  quicksort;
    quicksort.open("quicksort.txt",ios::app);
    int A[10]= {88, -6, 69, -33, 98, 7, 23, -5, 0, 100};
    quicksort<<"ELEMENTOS DESORDENADOS"<<endl;
    imprimirArreglo(A,10);
    cout<<endl;
    quicksort<<endl;
    quicksort<<"ELEMENTOS ORDENADOS POR QUICKSORT"<<endl;
    ordenar(A,0,9);
    imprimirArreglo(A,10);
    return 0;
}




