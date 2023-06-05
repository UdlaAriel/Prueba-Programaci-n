#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define alumnos 23
#define progresos 3

float promedio_estudiante(int calificaciones[alumnos][progresos])
{
    float sumTotal;
    float promedio;

    for (int i = 0; i < alumnos; i++)
    {
        for (int j = 0; j < progresos; j++)
        {
            sumTotal = calificaciones[i][j];
        }
        promedio = sumTotal/3;
        printf("\nEl PROMEDIO individual del estudiante %d fue: %.2f",i+1, promedio);
    }

    return promedio;
}

void promedio_general(int calificaciones[alumnos][progresos])
{
    float sumTotal;
    float promedioTOTAL;

    for (int i = 0; i < alumnos; i++)
    {
        sumTotal += promedio_estudiante(calificaciones);
    }
    
    promedioTOTAL = sumTotal/23;
    printf("\n\nEl PROMEDIO GENERAL es: %.2f", promedio_general);
}

void mayor_promedio(int calificaciones[alumnos][progresos])
{
    float sumTotal;
    float promedioTOTAL;

    for (int i = 0; i < alumnos; i++)
    {
        sumTotal += promedio_estudiante(calificaciones);
    }
}

int main()
{
    int calificaciones[alumnos][progresos] = {0};

    srand(time(NULL));

    /*Asignación de valores randómicos al arreglo calificaciones*/
    for (int i = 0; i < alumnos; i++)
    {
        printf("Estudiante %d: ", i+1);
        
        for (int j = 0; j < progresos; j++){

            calificaciones[i][j] = rand() % 11;
            printf(" %d", calificaciones[i][j]);
        }
        printf(" \n");
    }

    promedio_estudiante(calificaciones);

    promedio_general(calificaciones);

    mayor_promedio(calificaciones);

    return 0;
}