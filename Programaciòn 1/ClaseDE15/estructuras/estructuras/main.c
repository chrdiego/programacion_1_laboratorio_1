#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

int main()
{
    ePersona per;

    per = alta(per);

    printf("%s\t%s\t%d\t%d", per.apellido, per.nombre, per.edad, per.isEmpty);

    return 0;
}
