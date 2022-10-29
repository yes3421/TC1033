/*
 * Archivo que define a la clase Articulo.
 * Paul Enrique Alonso Ramírez A01634608
 * Jueves 5 de mayo de 2022
 */

#ifndef ARTICULO_H
#define ARTICULO_H

#include <iostream>
#include <string>

class Articulo {
public:
    // Constructores
    Articulo();
    Articulo(std::string nombre, int cantidad);
    // Destructor
    ~Articulo();
    // Setters
    void setNombre(std::string nombre);
    void setCantidad(int cantidad);
    // Getters
    std::string getNombre();
    int getCantidad();
    // Métodos
    void imprimeArticulo();
    void venta();
private:
    // Atributos
    std::string nombre;
    int cantidad;
};

Articulo::Articulo()
{
    this->nombre = "";
    this->cantidad = 0;    
}

Articulo::Articulo(std::string nombre, int cantidad)
{
    this->nombre = nombre;
    this->cantidad = cantidad;
}

Articulo::~Articulo()
{
    // Nothing
}

void Articulo::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

void Articulo::setCantidad(int cantidad)
{
    this->cantidad = cantidad;
}

std::string Articulo::getNombre()
{
    return nombre;
}

int Articulo::getCantidad()
{
    return cantidad;
}

/*
 * Función que imprime los atributos de la instancia.
 * No recibe parámetros.
 * No retorna objetos.
 */
void Articulo::imprimeArticulo()
{
    std::cout << "Nombre: " << this->nombre << "\n"
    << "Cantidad: " << this-> cantidad << std::endl;
}

/*
 * Función que representa una venta al restar 1 elemento
 * de la cantidad total de artículos.
 * No recibe parámetros.
 * No retorna objetos.
 */
void Articulo::venta()
{
    this->cantidad -= 1;
}

#endif
