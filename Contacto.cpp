//
// Created by gusar on 4/12/2018.
//
#include "Contacto.h"
Contacto::Contacto() {
    this->Nombre = "";
    this->Telefono = "";
    this->E_mail = "";
    this->Edad = "";
}
std::string Contacto ::getNombre(){
    return this->Nombre;
}
std::string Contacto ::getTelefono(){
    return this->Telefono;
}
std::string Contacto ::getE_mail(){
    return this->E_mail;
}
std::string Contacto ::getEdad(){
    return this->Edad;
}
void Contacto ::setNombre(std::string Nombre){
    this->Nombre = Nombre;
}
void Contacto ::setTelefono(std::string Telefono) {
    this->Telefono = Telefono;
}
void  Contacto ::setE_mail(std::string E_mail) {
    this->E_mail = E_mail;
}
void Contacto ::setEdad(std::string Edad) {
    this->Edad = Edad;
}