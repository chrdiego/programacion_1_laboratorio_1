void inicializarAlmuerzos(Empleado vec[], int tam)
{
    for(int i=0; i < tam; i++)
    {
        vec[i].isEmpty = 0;
    }
}


void inicializarEmpleados(Empleado vec[], int tam)
{

    for(int i=0; i < tam; i++)
    {
        vec[i].isEmpty = 0;
    }

}

int buscarLibre(Empleado vec[], int tam)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void altaEmpleado(Empleado vec[], int tam, Sector sectores[], int tamSector)
{

    int indice;
    int legajo;
    int esta;


    indice = buscarLibre(vec, tam);

    if( indice == -1)
    {

        printf("\nNo hay lugar en el sistema\n");
    }
    else
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if( esta != -1)
        {
            printf("Existe un empleado de legajo %d en el sistema\n", legajo);
            mostrarEmpleado(sectores, tamSector, vec[esta]);
        }
        else
        {
            vec[indice].legajo = legajo;

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(vec[indice].nombre);

            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &vec[indice].sexo );

            printf("Ingrese sueldo: ");
            scanf("%f", &vec[indice].sueldo );

             printf("Ingrese fecha de ingreso dd/mm/aaaa: ");
            scanf("%d %d %d", &vec[indice].fechaIngreso.dia, &vec[indice].fechaIngreso.mes, &vec[indice].fechaIngreso.anio);

            mostrarSectores(sectores, tamSector);

            printf("Ingrese id sector: ");
            scanf("%d", &vec[indice].idSector);


            vec[indice].isEmpty = 1;

            printf("Alta empleado exitosa!!!\n\n");

        }
    }
}



void altaIncremental(Empleado vec[],int tam, Sector sectores[], int tamSector)
{
    int indice;
    int legajo;
    int esta;

    indice = buscarLibre(empleado,EMPLEADOS);
    if(indice == -1)
    {
        printf("NO HAY MAS LUGAR.\n");
        break;
    }
    for(i=0;i<EMPLEADOS;i++)
    {

    }
}
