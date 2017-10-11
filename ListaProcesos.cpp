#ifndef LISTAPROCESO_H
#define LISTAPROCESO_H
#include "ListaProcesos.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct ListaProceso {
    int idProceso;
    int tiempoArribo;
    int burstTime;
    int burstTimeRest;
    int tiempoRetorno;
    bool finalizado;
    struct ListaProceso *sig;
};

ListaProceso* crearListaProceso()
// Crea una lista de nodos vacia.
{
   return NULL;
}

bool esVaciaListaProceso(ListaProceso* l)
// Devuelve true si la lista es vacia y false en caso contrario.
// Precondición: l fue previamente creada.
{
   if ( l == NULL ) return 1;
   else return 0;
}

void agregarListaProceso(ListaProceso* &l,  int idProceso, int tiempoArribo, int burstTime, int burstTimeRest, int tiempoRetorno)
// Agrega un proceso al principio de la lista  l.
// Precondición: l fue previamente creada.
{
   ListaProceso* nuevo= new ListaProceso;
   nuevo->idProceso= idProceso;
   nuevo->tiempoArribo= tiempoArribo;
   nuevo->burstTime= burstTime;
   nuevo->burstTimeRest= burstTimeRest;
   nuevo->tiempoRetorno= tiempoRetorno;
   nuevo->finalizado= false;
   nuevo->sig= l;
   l= nuevo;
}

ListaProceso* primeroListaProceso(ListaProceso* &l)
// Devuelve el primer elemento de la lista.
// Precondicion: !esVaciaListaEnteros(l).
// Precondición: l fue previamente creada.
{
    ListaProceso* aux= new ListaProceso;
    if (!esVaciaListaProceso(l))
    {
        aux->idProceso= l->idProceso;
        aux->tiempoArribo= l->tiempoArribo;
        aux->burstTime= l->burstTime;
        aux->burstTimeRest= l->burstTimeRest;
        aux->tiempoRetorno= l->tiempoRetorno;
        aux->finalizado= l->finalizado;
    }
return aux;
}

ListaProceso* restoListaProceso(ListaProceso* &l)
// Devuelve el resto de la lista l.
// Precondicion: !esVaciaListaEnteros(l).
// Precondición: l fue previamente creada.
{
return l->sig;
}

void destruirListaProceso(ListaProceso* &l)
// libera la memoria asociada a la lista.
// Precondición: l fue previamente creada.
{

}

#endif /* LISTAPROCESO_H */
