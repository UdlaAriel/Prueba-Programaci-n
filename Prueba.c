#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define alumnos 23
#define progresos 4

void Imprimir_Matriz(int calificaciones[alumnos][progresos])
{
    for (int i = 0; i < alumnos; i++){
        for (int j = 0; j < progresos; i++){
            printf(" %d", calificaciones[i][j]);
        }
        printf("\n");
    }  
}

int promedio(int calificaciones[alumnos][progresos])
{
    int promedio_final;
    

    return promedio_final;
}

int main (void)
{
    int calificaciones[alumnos][progresos];
    int notaFinal;

    srand(time(NULL));

    /*Asignación de valores randómicos al arreglo calificaciones*/
    for (int i = 0; i < alumnos; i++)
    {
        for (int j = 0; j < progresos; i++){

            calificaciones[i][j] = rand() % 11;

            if(j = (progresos-1)){

                calificaciones[i][j] = promedio(calificaciones);
            }
        }
    }

    Imprimir_Matriz(calificaciones);

    return 0;
}