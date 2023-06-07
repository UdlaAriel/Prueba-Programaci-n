#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define alumnos 23
#define progresos 4

float promedios_estudiantes[alumnos] = {0};

void promedio_individual(float calificaciones[alumnos][progresos])
{
    float promedio_individual;

    for (int i = 0; i < alumnos; i++)
    {
        float sumTotal = 0;

        for (int j = 0; j < progresos; j++)
        {
            sumTotal += calificaciones[i][j];
        }
        promedios_estudiantes[i] = sumTotal/3;
    }
}

float promedio_general()
{
    float sumTotal_individual[alumnos] = {0};
    float promedio_individual[alumnos] = {0};
    float promedio;
    float sumTotal_global;


    for (int i = 0; i < alumnos; i++)
    {

        sumTotal_individual[i] = promedios_estudiantes[i];
        
        promedio_individual[i] = sumTotal_individual[i]/3;

        sumTotal_global += promedio_individual[i];
    }
    
    promedio = sumTotal_global/23;

    return promedio;
}

void requerimiento_Mayor_Calificacion(float calificaciones[alumnos][progresos])
{
    float mayorPromedio = 0;
    int alumno = 0;

    for (int i = 0; i < alumnos; i++)
    {
        if(calificaciones[i][3] > mayorPromedio)
        {
            mayorPromedio = calificaciones[i][3];
            alumno = i;
        }      
    }
    printf("\nEL ESTUDIANTE %d, TIENE EL MAYOR PROMEDIO = %.1f\n", alumno+1, mayorPromedio);
}

int main()
{
    float calificaciones[alumnos][progresos] = {0};
    float promedio;

    srand(time(NULL));

    printf("\n\nESTUDIANTE\tNOTA1\tNOTA2\tNOTA3\tPROMEDIO\n");
    /*Asignación de valores randómicos al arreglo calificaciones*/
    for (int i = 0; i < alumnos; i++)
    {       
        for (int j = 0; j < 3; j++){

            calificaciones[i][j] = rand() % 11;
        }
    }

    promedio_individual(calificaciones);

    for (int i = 0; i < alumnos; i++)
    {
        printf("Estudiante %d:", i+1);
        
        for (int j = 0; j < progresos; j++){

            if (j == 3)
            {
                calificaciones[i][j] = promedios_estudiantes[i];
            }
            
            if(calificaciones[i][j] < 10) printf("\t  %.1f ", calificaciones[i][j]);
            else{
                printf("\t  %.0f", calificaciones[i][j]);
            }
        }
        printf("\n");
    }

    promedio = promedio_general(calificaciones);
    printf("\n\nPROMEDIO GENERAL: %.2f", promedio);

    requerimiento_Mayor_Calificacion(calificaciones);

    return 0;
}
