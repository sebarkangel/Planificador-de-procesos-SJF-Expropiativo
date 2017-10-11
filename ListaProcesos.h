#ifndef LISTAPROCESO_H
#define LISTAPROCESO_H

struct ListaProceso;

ListaProceso* crearListaProceso();
// Crea una lista de nodos vacia.

bool esVaciaListaProceso(ListaProceso l);
// Devuelve true si la lista es vacia y false en caso contrario.
// Precondición: l fue previamente creada.

void agregarListaProceso(ListaProceso* &l,  int idProceso, int tiempoArribo, int burstTime, int burstTimeRest, int tiempoRetorno);
// Agrega el elemento n al principio de la lista  l.
// Precondición: l fue previamente creada.

ListaProceso* primeroListaProceso(ListaProceso l);
// Devuelve el primer elemento de la lista.
// Precondicion: !esVaciaListaEnteros(l).
// Precondición: l fue previamente creada.

ListaProceso* restoListaProceso(ListaProceso l);
// Devuelve el resto de la lista l.
// Precondicion: !esVaciaListaEnteros(l).
// Precondición: l fue previamente creada.

void destruirListaProceso(ListaProceso &l);
// libera la memoria asociada a la lista.
// Precondición: l fue previamente creada.

#endif /* LISTPROCESO_H */
