/*


Programa que le la entrada estandar de un caracter e indica en la salida
estandar si este es minuscula o no

*/
#include "iostream"
#include "string"

using namespace std;

int main()
{
    char caracter;

    cout<<"Ingresa un caracter: ";cin>>caracter;
    switch (caracter) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u': cout<<"Es una vocal minuscula";break;

      default:cout<<"no es una vocal minuscula";break;
    }
    return 0;
}
