#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define alumnos 23
#define progresos 4

void imprimir_Matriz(int calificaciones[alumnos][progresos])
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

int main()
{
    int calificaciones[alumnos][progresos];
    int notaFinal;

    srand(time(NULL));

    /*Asignación de valores randómicos al arreglo calificaciones*/
    for (int i = 0; i < alumnos; i++)
    {
        for (int j = 0; j < progresos; i++){

            calificaciones[i][j] = rand() % 11;
        }
    }

    return 0;
}