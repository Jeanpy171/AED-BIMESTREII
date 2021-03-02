#include <iostream>
using namespace std;
int main() {
 int opc;
 do
 {
 cout<<"Elija una opci�n:\n";
 cout<<"1.- Que es el algoritmo de B�squeda Exhaustiva\n";
 cout<<"2.- Como funciona el algoritmo de B�squeda Exhaustiva\n";
 cout<<"3.- Implementaci�n pr�ctica del algoritmo de B�squeda Exhaustiva\n";
 cout<<"4.- An�lisis de la complejidad del algoritmo de B�squeda Exhaustiva\n";
 cout<<"5.- Salir\n";
 cin>>opc;
 switch (opc)
 {
 case 1:
 cout<<"\nLa b�squeda exhaustiva es una t�cnica general de resoluci�n de problemas.\nSe lo considera como un algoritmo de fuerza bruta,debido a que verifica cada una de las posibles respuestas de un programa hasta encontrar la mejor respuesta.\n\n";
 break;
 case 2:
 cout<<"\n1. Generar una lista de todas las soluciones potenciales del problema en una forma sistem�tica. \n2. Eval�a las soluciones potenciales una por una descalificando las que no son factibles\ny manteniendo un registro de las posibles soluciones que se encuentren hasta el momento.\n3. Cuando la b�squeda finalice regresa la mejor soluci�n encontrada\n4. Finalmente, imprime dicho resultado obtenido.\n\n";
 break;
 case 3:
 cout<<"\nPara realizar una implementaci�n pr�ctica debemos saber que este algoritmo se lo implementa en un arbol binario por lo cual es necesario recorrer el mismo. Podemos hacer a trav�s de tres m�todos: \nRecorrido en anchura\nRecorrido a profunidad\nRamificaci�n y Acotaci�n\n\nPara el siguiente ejemplo tenemos un conjunto de n�meros enteros para los cules se necesita encontrar alg�n subconjunto cuya suma sea 20 para lo cual se plantea un arbol binario de soluciones en el cual se realiza un recorrido a profundidad, cada nodo representa un paso del algoritmo en el que se evalua si existe una soluci�n y si el valor no cumple con la soluci�n se retrocede al nivel anterior.\n\n";
 break;
 case 4:
 cout<<"\nMEJOR DE LOS CASOS\n";
 cout<<"El algoritmo puede encontrarse con una solcuci�n que resuelva el problema la cual sea la mejor por mucho respecto a otras soluciones sin la necesidad de tener que registrar muchas posibles soluciones.\n";
 cout<<"PEOR DE LOS CASOS\n";
 cout<<"El algoritmo no encuentre una soluci�n que sea mucho mejor frente a otras teniendo que registrar muchas posibles soluciones y as� teniendo que realizar muchas mas comparaciones.\n\n";
 break;
 case 5:
 cout<<"Saliendo...\n";
 break;
 default:
 cout<<"Opci�n no v�lida.\n";
 }
 } while (opc!=5);
 return 0;
}
