#include <stdio.h>
int main(int argc, char const *argv[])
{
    int f, c;
    printf("Ingrese el numero de filas");
    scanf("%d", &f);
    printf("Ingrese el numero de columnas");
    scanf("%d", &c);

    int matrix [f][c];

    for (int i = 0; i < f; i++)
    {
         for (int j = 0; j < c; j++)
         {
            matrix [i][j]=0;
         }
         
    }

     for (int i = 0; i < f && i < c; i++)
    {
        matrix[i][i]=1;
    }


    return 0;
}
