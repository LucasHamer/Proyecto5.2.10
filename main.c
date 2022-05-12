#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,orden,tempmx,ordenmx,tempm,ordenm;

    orden=0;

    printf("Ingrese la temperatura: ");
    scanf("%d",&temp);
    fflush(stdin);

    while(temp!=-50)
    {
        orden++;
        if(orden==1)
        {
            tempmx=temp;
            tempm=temp;
            ordenmx=orden;
            ordenm=orden;
        }
        else if(temp<tempm)
        {
            tempm=temp;
            ordenm=orden;
        }
        else if(temp>tempmx)
        {
            tempmx=temp;
            ordenmx=orden;
        }

        printf("Ingrese la temperatura: ");
        scanf("%d",&temp);
        fflush(stdin);

    }

    if(orden==0)
    {
        printf("No se ingreso un dato correcto");
    }
    else
    {
        printf("Temperatura maxima: %d con ingreso en: %d\n",tempmx,ordenmx);
        printf("Temperatura minima: %d con ingreso en: %d",tempm,ordenm);
    }

    return 0;
}
