#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define alumnos 23
#define progresos 3

float promedio_estudiante(int calificaciones[alumnos][progresos])
{
    float promedio_individual;

    for (int i = 0; i < alumnos; i++)
    {
        float sumTotal = 0;

        for (int j = 0; j < progresos; j++)
        {
            sumTotal += calificaciones[i][j];
        }
        promedio_individual = sumTotal/3;
        printf("\nEl PROMEDIO individual del estudiante %d fue: %.2f",i+1, promedio_individual);
    }

    return promedio_individual;
}

void promedio_general(float calificaciones[alumnos][progresos])
{
    float sumTotal_individual[alumnos] = {0};
    float promedio_individual[alumnos] = {0};
    float promedioTOTAL, sumTotal_global;


    for (int i = 0; i < alumnos; i++)
    {
        for (int j = 0; j < progresos; j++)
        {
            sumTotal_individual[i] = calificaciones[i][j];
        }
        promedio_individual[i] = sumTotal_individual[i]/3;
        sumTotal_global = promedio_individual[i];
    }
    
    promedioTOTAL = sumTotal_global/23;

    printf("\n\nEl PROMEDIO GENERAL es: %.2f", promedio_general);
}

void mayor_promedio(int calificaciones[alumnos][progresos])
{
    float mayorPromedio;

    for (int i = 0; i < alumnos; i++)
    {
        for (int j = 0; j < progresos; j++)
        {
            /* code */
        }
        
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