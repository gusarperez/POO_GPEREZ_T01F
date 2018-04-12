//
// Created by gusar on 4/12/2018.
//

#ifndef POO_GPEREZ_T01F_CONTACTO_H
#define POO_GPEREZ_T01F_CONTACTO_H
#include <iostream>

class Contacto {
private:
std::string Nombre, E_mail, Edad, Telefono;

public:
    Contacto();
    std::string getNombre();
    std::string getE_mail();
    std::string getEdad();
    std::string getTelefono();
    void setNombre (std::string Nombre);
    void setE_mail (std::string E_mail);
    void setEdad (std::string Edad);
    void setTelefono (std::string Telefono);
};


#endif //POO_GPEREZ_T01F_CONTACTO_H
