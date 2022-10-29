/*
 * El siguiente programa es un sistema de compras en línea sencillo que
 * crea un inventario, registro de clientes y pedidos a partir de lo que
 * ingrese el usuario. Posteriormente se puede optar por desplegar la
 * información previamente capturada. Todo se hace a través de un menú
 * que se muestra en pantalla al inicio y cuando concluyan las tareas
 * seleccionadas.
 * 
 * Paul Enrique Alonso Ramírez A01634608
 * Jueves 5 de mayo de 2022
 */

#include <vector>

#include "Pedido.h"

std::vector<Articulo> inventario;
std::vector<Cliente> registroCliente;
std::vector<Pedido> listaPedidos;

int numeroRegistro = 0;

/*
 * Función que registra un artículo y lo anexa al vector inventario.
 * No recibe parámetros.
 * No retorna objetos.
 */
void altaArticulo()
{
    std::string nombreArticulo;
    int cantidadArticulo;

    std::cout << "Ingresa el nombre del artículo: ";
    std::cin >> nombreArticulo;
    std::cout << "Ingresa el número de ejemplares: ";
    std::cin >> cantidadArticulo;

    std::cout << "\n";

    Articulo nuevoArticulo(nombreArticulo, cantidadArticulo);

    inventario.push_back(nuevoArticulo);
}

/*
 * Función que registra a un cliente y lo anexa al vector registroCliente.
 * Al final muestra el número de cliente, o bien, la posición que tiene el
 * objeto dentro del vector.
 * No recibe parámetros.
 * No retorna objetos.
 */
void altaCliente()
{
    std::string nombreCliente;
    std::string direccionCliente;
    std::string numeroTelefonoCliente;

    std::cout << "Ingrese el nombre del cliente: ";
    std::cin >> nombreCliente;
    std::cout << "Ingrese la dirección del cliente: ";
    std::cin >> direccionCliente;
    std::cout << "Ingrese el número de teléfono del cliente: ";
    std::cin >> numeroTelefonoCliente;

    std::cout << "\n";

    Cliente nuevoCliente(nombreCliente, direccionCliente, numeroTelefonoCliente);

    registroCliente.push_back(nuevoCliente);

    std::cout << "Tu número de cliente es " << numeroRegistro << std::endl;

    std::cout << "\n";

    ++numeroRegistro;
}

/*
 * Función que registra pedidos y los anexa al vector listaPedidos.
 * Cambiar la cantidad del articulo seleccionado en el inventario.
 * No recibe parámetros.
 * No retorna objetos.
 */
void altaPedido()
{
    int numeroArticulo;

    std::cout << "¿Cuál es el número del artículo que deseas pedir? ";
    std::cin >> numeroArticulo;

    Articulo nuevoArticulo(
        inventario[numeroArticulo].getNombre(),
        1);

    int numeroCliente;

    std::cout << "Ingresa tu número de cliente: ";
    std::cin >> numeroCliente;

    int minutoPedido;
    int horaPedido;
    int diaPedido;
    int mesPedido;
    int anioPedido;

    std::cout << "Ingresa el minuto de tu pedido: ";
    std::cin >> minutoPedido;
    std::cout << "Ingresa la hora de tu pedido: ";
    std::cin >> horaPedido;
    std::cout << "Ingresa el día de tu pedido: ";
    std::cin >> diaPedido;
    std::cout << "Ingresa el mes de tu pedido: ";
    std::cin >> mesPedido;
    std::cout << "Ingresa el anio de tu pedido: ";
    std::cin >> anioPedido;

    std::cout << "\n";

    Fecha fechaPedido(
        minutoPedido,
        horaPedido,
        diaPedido,
        mesPedido,
        anioPedido);

    Pedido pedido(
        nuevoArticulo,
        registroCliente[numeroCliente],
        fechaPedido);
    
    listaPedidos.push_back(pedido);

    inventario[numeroArticulo].venta();
}

/*
 * Función que despliega el pedido seleccionado por el usuario.
 * No recibe parámetros.
 * No retorna objetos.
 */
void desplegarPedido()
{
    int numeroPedido;

    std::cout << "Ingrese el número de pedido que desea conocer: ";
    std::cin >> numeroPedido;

    std::cout << "\n";

    listaPedidos[numeroPedido].imprimePedido();

    std::cout << "\n";
}

/*
 * Función que despliega todos los artículos del inventario.
 * No recibe parámetros.
 * No retorna objetos.
 */
void desplegarArticulos()
{
    for(Articulo a : inventario) {
        a.imprimeArticulo();
        std::cout << "\n";
    }
}

/*
 * Función que despliega todos los pedidos registrados.
 * No recibe parámetros.
 * No retorna objetos.
 */
void desplegarPedidos()
{
    for(Pedido p : listaPedidos) {
        p.imprimePedido();
        std::cout << "\n";
    }
}

int main()
{
    int opcion = 0;

    do {
        std::cout << "Menú" << "\n"
        << "[1] Alta Articulo" << "\n"
        << "[2] Alta Cliente" << "\n"
        << "[3] Alta Pedido" << "\n"
        << "[4] Desplegar Información de Pedido" << "\n"
        << "[5] Desplegar Artículos Disponibles" << "\n"
        << "[6] Desplegar Lista de Pedidos" << "\n"
        << "[7] Salir" << "\n"
        << "Opcion: ";

        std::cin >> opcion;

        std::cout << "\n";

        switch (opcion) {
        case 1:
            altaArticulo();
            break;
        case 2:
            altaCliente();
            break;
        case 3:
            altaPedido();
            break;
        case 4:
            desplegarPedido();
            break;
        case 5:
            desplegarArticulos();
            break;
        case 6:
            desplegarPedidos();
            break;
        }
    
    } while (opcion != 7);

    return 0;
}
