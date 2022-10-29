/*
 * Archivo que define a la clase Cliente.
 * Paul Enrique Alonso Ramírez A01634608
 * Jueves 5 de mayo de 2022
 */

#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

class Cliente {
public:
    // Constructores
    Cliente();
    Cliente(
        std::string nombre,
        std::string direccion,
        std::string numeroTelefono);
    // Destructor
    ~Cliente();
    // Setters
    void setNombre(std::string nombre);
    void setDireccion(std::string direccion);
    void setNumeroTelefono(std::string numeroTelefono);
    // Getters
    std::string getNombre();
    std::string getDireccion();
    std::string getNumeroTelefono();
    // Métodos
    void imprimeCliente();
private:
    std::string nombre;
    std::string direccion;
    std::string numeroTelefono;
};

Cliente::Cliente()
{
    this->nombre = "";
    this->direccion = "";
    this->numeroTelefono = "";
}

Cliente::Cliente(
    std::string nombre,
    std::string direccion,
    std::string numeroTelefono)
{
    this->nombre = nombre;
    this->direccion = direccion;
    this->numeroTelefono = numeroTelefono;
}
    
Cliente::~Cliente()
{
    // Nothing
}

void Cliente::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

void Cliente::setDireccion(std::string direccion)
{
    this->direccion = direccion;
}

void Cliente::setNumeroTelefono(std::string numeroTelefono)
{
    this->numeroTelefono = numeroTelefono;
}

std::string Cliente::getNombre()
{
    return nombre;
}

std::string Cliente::getDireccion()
{
    return direccion;
}

std::string Cliente::getNumeroTelefono()
{
    return numeroTelefono;
}

/*
 * Función que imprime los atributos de la instancia.
 * No recibe parámetros.
 * No retorna objetos.
 */
void Cliente::imprimeCliente()
{
    std::cout << "Nombre: " << this->nombre << "\n"
    << "Dirección: " << this->direccion << "\n"
    << "Número de teléfono: " << this->numeroTelefono << std::endl;
}

#endif
