#include <iostream>
#include "Contacto.h"
int main() {
    Contacto contacto_a= *new Contacto;
    Contacto contacto_b= *new Contacto;

    contacto_a.setNombre("Gustavo");
    contacto_a.setTelefono("8334568901");
    contacto_a.setE_mail("gashdhd@hotmail.com");
    contacto_a.setEdad("28");

    std::cout<<"\n Nombre: "<<contacto_a.getNombre()<<"\n Num: "<< contacto_a.getTelefono()<< "\n E_mail: "<< contacto_a.getE_mail()<<"\n Edad: " << contacto_a.getEdad() <<"\n";

    int *arreglo=NULL;
    int cant;
    std::string val;
    std::cout<<"\n Cantidad de Usuarios?";
    std::cin>>cant;

    arreglo=new int [cant];
    for (int i=0; i< cant; i++){
        std::cout<<"Datos Contacto: "<< i+1 <<":";
        std::cout<<"\n";
        std::cout<<"\n Nombre Usuario:";
        std::cin>> val;
        std::cout<<"\n";
        std::cout<<"Edad";
        std::cin>> val;
        std::cout<<"\n";
        std::cout<<"E_mail";
        std::cin>> val;
        std::cout<<"\n";
        std::cout<<"Telefono";
        std::cin>> val;
        std::cout<<"\n";
    }
}