#include  <iostream>
#include <fstream>

using namespace std;


namespace imprimir
{
        void imprimirArreglo(int arr[], int n)
        {
          ofstream  quicksort;
          quicksort.open("quicksort.txt",ios::app);
            for (int i=0; i<10; i++)
            {
                   cout<<"|"<<arr[i]<<"|";
                   quicksort<<"|"<<arr[i]<<"|";
            }

        }
}
