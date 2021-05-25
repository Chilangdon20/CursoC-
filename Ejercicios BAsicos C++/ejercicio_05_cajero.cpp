#include<string>
#include<iostream>

using namespace std;

int main()
{
  int saldo_i = 65821,opcion;
  float extra, saldo =0,retiro;

  cout<<"\tBienvendio a la app de BBVA, porfavor ingresa alguna de las siguientes opciones"<<endl;
  cout<<"\nOpcion 1 - Retirar dinero";
  cout<<"\nOPcion 2 - Ingresar dinero";
  cout<<"\nOpcion 3 - Consultar saldo";
  cout<<"\nOPcion 4 - Salir";
  cin>>opcion;

  switch (opcion) {
    case 1:

      cout<<"Porfavor ingrese la cantidad a retirar: ";cin>>retiro;
      if(retiro>saldo_i){cout<<"La cantidad supera los fondos en la cuenta";}

      else{saldo = saldo_i - retiro;}
      break;

    case 2:

      cout<<"POrfavor ingrese la cantidad a ingresar a su cuenta: ";cin>>extra;
      saldo = saldo_i + extra;

      break;

    case 3:
      cout<<"saldo "<<saldo_i;break;

    case 4:
      break;

  }





}
