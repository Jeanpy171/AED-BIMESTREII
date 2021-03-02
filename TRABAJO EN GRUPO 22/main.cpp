#include <iostream>
#include <fstream>
using namespace std;
#define x 100
int ingresar (int a[], int n);
int ordenar (int a[], int n);
int imprimir (int a[], int n);
void ingresarAhorros(int arr[]);
int Busqueda(int arr[], int dato);
void IngresarDatos(int arrdatos[50]);
void OrdenarDatos(int arrdatos[50]);
void imprimir2(int pbuscado);
int main() {
int arr[x];
int num;
int introarreglo[50];
int a[12], opc, opc2, datobuscado,pbuscado;
ofstream ahorros;
ahorros.open("cuenta", ios::app);
do
{
cout<<"\t\t TRABAJO EN GRUPO\n\n";
cout<<"\t\t SELECCIONE UNA OPCION DEL MENU\n\n";
cout<<"1.- INTERCAMBIAR POSICIONES DE UN VECTOR\n";
cout<<"2.- ORDENAMIENTO DE UN VECTOR\n";
cout<<"3.- CUENTA DE AHORROS VIRTUAL DEL BANCO PICHINCHA\n";
cout<<"4.- SALIR\n";
cout<<"OPCION: ";
cin>>opc;
switch (opc)
{
case 1:
cout<<"\t\t\t\tBienvenido a la sección de ordenamiento inverso\n\nIngrese los 6 datos en el arreglo:\n\n";
IngresarDatos(introarreglo);
break;
case 2:
cout<<"DIgite el tamaño del arreglo ";
cin>>num;
ingresar(arr,num);
cout<<endl;
imprimir(arr,num);
cout<<endl;
ordenar(arr,num);
cout<<endl;
imprimir(arr,num);
break;
case 3:
cout<<"\t\t BIENVENIDO\n\n";
do {
cout<<"\nSELECCIONE UNA OPERACIÓN\n";
cout<<"1.- INGRESAR AHORROS\n";
cout<<"2.- BUSCAR UN VALOR AHORRADO\n";
cout<<"3.- Salir\n";
cin>>opc2;
switch (opc2)
{
case 1:
ingresarAhorros(a);
break;
case 2:
cout<<"Que valor desea buscar: ";
cin>>datobuscado;
pbuscado=Busqueda(a, datobuscado);
imprimir2(pbuscado);
break;
case 3:
cout<<"Saliendo...\n";
break;
default:
cout<<"Opción no valida.\n";
}
} while (opc2!=3);
break;
case 4:
cout<<"Saliendo....\n";
break;
default:
cout<<"Opción no válida.\n";
}
}while (opc!=4);
return 0;
}
//EJERCICIO 3
void ingresarAhorros(int arr[])
{
ofstream ahorros;
ahorros.open("cuenta", ios::out);
ahorros<<"Los ahorros ingresados son:\n";
for (int i=0; i<12; i++)
{
cout<<"Ingrese los ahorros del mes "<<i+1<<": ";
cin>>arr[i];
ahorros<<"["<<arr[i]<<"]";
cin.ignore();
}
ahorros<<"\n";
}
int Busqueda(int arr[], int dato)
{
ofstream ahorros;
ahorros.open("cuenta", ios::app);
ahorros<<"Cantidad a buscar: "<<dato<<"\n";
cin.ignore();
for (int i=0; i<=12; i++)
{
if (arr[i]==dato)
{
return i+1;
}
}
return -1;
}
void imprimir2(int pbuscado)
{
ofstream ahorros;
ahorros.open("cuenta", ios::app);
if (pbuscado==1)
{
ahorros<<"Usted ahorró esa cantidad en el mes de enero\n";
cout<<"Usted ahorró esa cantidad en el mes de enero\n";
}
if (pbuscado==2)
{
ahorros<<"Usted ahorró esa cantidad en el mes de febrero\n";
cout<<"Usted ahorro esa cantidad en el mes de febrero\n";
}
if (pbuscado==3)
{
ahorros<<"Usted ahorró esa cantidad en el mes de marzo\n";
cout<<"Usted ahorro esa cantidad en el mes de marzo\n";
}
if (pbuscado==4)
{
ahorros<<"Usted ahorró esa cantidad en el mes de abril\n";
cout<<"Usted ahorro esa cantidad en el mes de abril\n";
}
if (pbuscado==5)
{
ahorros<<"Usted ahorró esa cantidad en el mes de mayo\n";
cout<<"Usted ahorro esa cantidad en el mes de mayo\n";
}
if (pbuscado==6)
{
ahorros<<"Usted ahorró esa cantidad en el mes de junio\n";
cout<<"Usted ahorro esa cantidad en el mes de junio\n";
}
if (pbuscado==7)
{
ahorros<<"Usted ahorró esa cantidad en el mes de julio\n";
cout<<"Usted ahorro esa cantidad en el mes de julio\n";
}
if (pbuscado==8)
{
ahorros<<"Usted ahorró esa cantidad en el mes de agosto\n";
cout<<"Usted ahorro esa cantidad en el mes de agosto\n";
}
if (pbuscado==9)
{
ahorros<<"Usted ahorró esa cantidad en el mes de septiembre\n";
cout<<"Usted ahorro esa cantidad en el mes de septiembre\n";
}
if (pbuscado==10)
{
ahorros<<"Usted ahorró esa cantidad en el mes de octubre\n";
cout<<"Usted ahorro esa cantidad en el mes de octubre\n";
}
if (pbuscado==11)
{
ahorros<<"Usted ahorró esa cantidad en el mes de noviembre\n";
cout<<"Usted ahorro esa cantidad en el mes de noviembre\n";
}
if (pbuscado==12)
{
ahorros<<"Usted ahorró esa cantidad en el mes de diciembre\n";
cout<<"Usted ahorro esa cantidad en el mes de diciembre\n";
}
if (pbuscado!=1 && pbuscado!=2 && pbuscado!=3 && pbuscado!=4 && pbuscado!=5 &&
pbuscado!=6 && pbuscado!=7 && pbuscado!=8 && pbuscado!=9 && pbuscado!=10 &&
pbuscado!=11 && pbuscado!=12)
{
ahorros<<"No se encuentra registrado ese valor en su cuenta.\n";
cout<<"No se encuentra registrado ese valor en su cuenta.\n";
}
ahorros.close();
}
//EJERCICIO 2
int ingresar (int a[], int n)
{
ofstream ordenar;
ordenar.open("ordenamiento", ios::out);
int i;
ordenar<<"Lista de los valores ingresado:"<<endl;
for (i=0 ; i<n ; i++)
{
cout<<"Dijite los numeros sean positivos o negativos "<<i+1<<" : ";
cin>>a[i];
ordenar<<"["<<a[i]<<"]";
}
ordenar<<endl;
return 0;
}
int ordenar (int a[], int n)
{
ofstream ordenar;
ordenar.open("ordenamiento", ios::app);
ordenar<<"Lista de valores ordenados:"<<endl;
int aux;
for (int i=0 ; i<n ; i++)
{
for(int j=i+1 ; j<n ; j++)
{
if(a[j]<a[i])
{
aux=a[i];
a[i]=a[j];
a[j]=aux;
}
}
}
for (int i=0; i<n; i++)
{
ordenar<<"["<<a[i]<<"]";
}
ordenar.close();
return 0;
}
//EJERCICIO 1
int imprimir(int a[], int n)
{
int i;
for (i=0 ; i<n; i++)
{
cout<<"["<<a[i]<<"]";
}
cout<<endl;
return 0;
}
void IngresarDatos(int arrdatos[50])
{
ofstream intercambio;
intercambio.open("intercambiar", ios::out);
intercambio<<"Lista de valores:"<<endl;
for(int r=0; r<6;r++)
{
cout<<"dato["<<r+1<<"]: ";
cin>>arrdatos[r];
intercambio<<"["<<arrdatos[r]<<"]";
}
intercambio<<endl;
OrdenarDatos(arrdatos);
}
void OrdenarDatos(int arrdatos[50])
{
int i=0;
ofstream intercambio;
intercambio.open("intercambiar", ios::app);
intercambio<<"Lista de valores intercambiados:"<<endl;
cout<<"\nLos datos ordenados de forma inversa son:"<<endl;
for(int r=5; r>=0; r--)
{
cout<<"dato["<<i+1<<"]: ";
i++;
cout<<arrdatos[r];
intercambio<<"["<<arrdatos[r]<<"]";
cout<<"\n";
}
intercambio<<endl;
intercambio.close();
}
