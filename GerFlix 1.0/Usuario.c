
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }

}

void mostrarListaUsuarios(eUsuario usuarios[], int t)
{
    int i;

    for(i=0; i<t; i++)
    {
        if(usuarios[i].estado==1)
        {
            printf("%d %s %d \n", usuarios[i].idUsuario, usuarios[i].nombre, usuarios[i].idSerie);

        }
    }
}


void mostrarUsuarioConSuSerie(eUsuario usuarios[], int t, eSerie series[], int t2)
{
    int i;
    int j;

    for(i=0; i<t; i++)
    {
        for(j=0; j<t2; j++)
        {
            if(usuarios[i].estado==1 && series[j].estado==1)
            {
                if(usuarios[i].idSerie==series[j].idSerie)
                {
                        printf("%d %s %s \n", usuarios[i].idUsuario, usuarios[i].nombre, series[j].nombre);

                        break;
                }
            }

        }
    }
}
void mostrarSerieConUsuario(eSerie series[], int t, eUsuario usuarios[], int t2)
{
    int i;
    int j;

    for(i=0; i<t; i++)
    {
        for(j=0; j<t2; j++)
        {
            if(series[i].estado==1 && usuarios[j].estado==1)
            {
                if(series[i].idSerie==usuarios[j].idSerie)
                {
                  printf("%s %s %d %d %s\n", series[i].nombre, series[i].genero, series[i].idSerie, series[i].cantidadTemporadas,usuarios[j].nombre);


                }
            }

        }
    }
}


