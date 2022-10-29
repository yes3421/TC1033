/*
 * Archivo que define a la clase Fecha.
 * Paul Enrique Alonso Ramírez A01634608
 * Jueves 5 de mayo de 2022
 */

#ifndef FECHA_H
#define FECHA_H

#include <iostream>

class Fecha {
public:
    // Constructores
    Fecha();
    Fecha(
        int minuto,
        int hora, 
        int dia,
        int mes,
        int anio);
    // Destructor
    ~Fecha();
    // Setters
    void setMinuto(int minuto);
    void setHora(int hora);
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    // Getters
    int getMinuto();
    int getHora();
    int getDia();
    int getMes();
    int getAnio();
    // Métodos
    void imprimeFecha();
private:
    // Atributos
    int minuto;
    int hora;
    int dia;
    int mes;
    int anio;
};

Fecha::Fecha()
{
    this->minuto = 0;
    this->hora = 0;
    this->dia = 0;
    this->mes = 0;
    this->anio = 0;
}

Fecha::Fecha(
    int minuto,
    int hora,
    int dia,
    int mes,
    int anio)
{
    this->minuto = minuto;
    this->hora = hora;
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

Fecha::~Fecha()
{
    // Nothing
}

void Fecha::setMinuto(int minuto)
{
    this->minuto = minuto;
}

void Fecha::setHora(int hora)
{
    this->hora = hora;
}

void Fecha::setDia(int dia)
{
    this->dia = dia;
}

void Fecha::setMes(int mes)
{
    this->mes = mes;
}

void Fecha::setAnio(int anio)
{
    this->anio = anio;
}

int Fecha::getMinuto()
{
    return minuto;
}

int Fecha::getHora()
{
    return hora;
}

int Fecha::getDia()
{
    return dia;
}

int Fecha::getMes()
{
    return mes;
}

int Fecha::getAnio()
{
    return anio;
}

/*
 * Función que imprime los atributos de la instancia.
 * No recibe parámetros.
 * No retorna objetos.
 */
void Fecha::imprimeFecha()
{
    std::cout << "Minuto: " << this->minuto << "\n"
    << "Hora: " << this->hora << "\n"
    << "Dia: " << this->dia << "\n"
    << "Mes: " << this->mes << "\n"
    << "Anio: " << this->anio << std::endl;
}

#endif
