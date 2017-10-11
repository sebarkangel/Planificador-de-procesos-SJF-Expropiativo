#include <stdio.h>

#include "ListaProcesos.h"

void mensajeBinvenida()
{
    printf ("--------------------------------------------------------- \n");
    printf ("------     Obligatorio 1 – Sistemas Operativos     ------ \n");
    printf ("------          Tecnologo en Informática           ------ \n");
    printf ("------                  Grupo X                    ------ \n");
    printf ("------  Planificador de Procesos SJF Expropiativo  ------ \n");
    printf ("--------------------------------------------------------- \n \n");
}

int mensajeCantProc()
{
    printf("Por favor ingrese la cantidad total de procesos a ejecutar: ");
    int cant;
    scanf ("%d",&cant);
    while (cant <= 0){
        printf ("Error: La cantidad total de procesos a ejecutar debe ser mayor a cero. \n");
        printf("Por favor ingrese la cantidad total de procesos a ejecutar: ");
        scanf ("%d", &cant);
    }
    return cant;
}
void mensajeIngresoProc(int i, int &TiempoArribo, int &TiempoRafaga)
{
    printf("Proceso %d: \n",i);
    printf("Ingrese el tiempo de arribo: ");
    int arr;
    scanf ("%d",&arr);
    printf("Ingrese el tiempo de rafaga: ");
    int raf;
    scanf ("%d",&raf);
    while (arr < 0 || raf <= 0){
        if (arr < 0 ){
            printf ("Error: El tiempo de arribo debe ser mayor o igual a cero. \n");
        } else {
            printf ("Error: El tiempo de rafaga debe ser mayor a cero. \n");
        }
        printf("Por favor, ingrese de nuevo los valores para el proceso. \n");
        printf("Proceso %d: \n",i);
        printf("Ingrese el tiempo de arribo: ");
        scanf ("%d",&arr);
        printf("Ingrese el tiempo de rafaga: ");
        scanf ("%d",&raf);
    }
}


int main ()
{
    mensajeBinvenida();
    int cantproc= mensajeCantProc();
    ListaProceso* l = crearListaProceso();
    for (int i=1; i<=cantproc; i++)
    {
        int arrival= 0;
        int burstTime= 0;
        mensajeIngresoProc(i,arrival,burstTime);
        agregarListaProceso(l,i,arrival,burstTime,burstTime,0);
    }
//return 0 << "l {"; << l.tiempoArribo << " " << l.burstTime << "  " << "}";
print ("%d",l.tiempoArribo);
return 0;
}

