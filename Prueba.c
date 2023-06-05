#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define alumnos 24
#define progresos 4

void promedio_general(int calificaciones[alumnos][progresos])
{
    float sumTotal;
    float promedio;

    for (int i = 0; i < alumnos; i++)
    {
        sumTotal += calificaciones[i][4];
    }
    
    promedio = sumTotal/alumnos;
    printf("\nEl PROMEDIO GENERAL fue: ");
    printf("%d\n");
}

void mayor_promedio(int calificaciones[alumnos][progresos])
{

}

int main()
{
    int calificaciones[alumnos][progresos] = {0};
    float sumTotal[alumnos] = {0}; 
    float promedio_individual[alumnos] = {0};

    srand(time(NULL));

    /*Asignación de valores randómicos al arreglo calificaciones*/
    for (int i = 0; i < alumnos; i++)
    {
        printf("Estudiante %d: ", i);
        
        for (int j = 0; j < progresos; j++){

            calificaciones[i][j] = rand() % 11;
            sumTotal[i] += calificaciones[i][j];
            if(j == (progresos -1))
            {
                promedio_individual[i] = sumTotal[i]/progresos;
                calificaciones[i][j] = promedio_individual[i];
            }
            printf(" %d", calificaciones[i][j]);
        }

        printf(" \n");
    }

    promedio_general(calificaciones);

    mayor_promedio(calificaciones);

    return 0;
}