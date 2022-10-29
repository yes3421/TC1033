/* 
 * Archivo que define a la clase Pedido.
 * Paul Enrique Alonso Ramírez A01634608
 * Jueves 5 de mayo de 2022
 */

#ifndef PEDIDO_H
#define PEDIDO_H

#include "Articulo.h"
#include "Cliente.h"
#include "Fecha.h"

class Pedido {
    public:
    // Constructores
    Pedido();
    Pedido(
        Articulo articulo,
        Cliente cliente,
        Fecha fecha);
    // Destructor
    ~Pedido();
    // Setters
    void setArticulo(Articulo articulo);
    void setCliente(Cliente cliente);
    void setFecha(Fecha fecha);
    // Getters
    Articulo getArticulo();
    Cliente getCliente();
    Fecha getFecha();
    // Métodos
    void imprimePedido();
private:
    // Atributos
    Articulo articulo;
    Cliente cliente;
    Fecha fecha;
};

Pedido::Pedido()
{
    Articulo defaultArticulo;
    Cliente defaultCliente;
    Fecha defaultFecha;

    this->articulo = defaultArticulo;
    this->cliente = defaultCliente;
    this->fecha = defaultFecha;
}

Pedido::Pedido(
    Articulo articulo,
    Cliente cliente,
    Fecha fecha)
{
    this->articulo = articulo;
    this->cliente = cliente;
    this->fecha = fecha;
}

Pedido::~Pedido()
{
    // Nothing
}

void Pedido::setArticulo(Articulo articulo)
{
    this->articulo = articulo;
}

void Pedido::setCliente(Cliente cliente)
{
    this->cliente = cliente;
}

void Pedido::setFecha(Fecha fecha)
{
    this->fecha = fecha;
}

Articulo Pedido::getArticulo()
{
    return articulo;
}

Cliente Pedido::getCliente()
{
    return cliente;
}

Fecha Pedido::getFecha()
{
    return fecha;
}

/*
 * Función que imprime los atributos de la instancia.
 * No recibe parámetros.
 * No retorna objetos.
 */
void Pedido::imprimePedido()
{
    std::cout << "Articulo" << "\n"
    << "\n";
    this->articulo.imprimeArticulo();
    std::cout << "\n"
    << "Cliente" << "\n"
    << "\n";
    this->cliente.imprimeCliente();
    std::cout << "\n" 
    << "Fecha" << "\n"
    << "\n";
    this->fecha.imprimeFecha();
}

#endif
