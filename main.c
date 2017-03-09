#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aux = 1,teste[5],cont = 0,x,i;

    printf("digite os numeros: \n");

    for (i = 0 ; i < 5; i++)
    {
        scanf("\n%d",&x);
        teste[i] = x;
    }
    printf("\nVETOR: ");
    for (i = 0 ; i < 5; i++)
    {
        printf("%d ",teste[i]);
    }

    for (i = 0 ; i < 5; i++)
    {
        if(teste[i] < 0)
            cont++;
    }
      printf("\n\nQuantidade de numeros negativos digitados: %d\n",cont);

 for (i = 0 ; i < 5; i++)
    {
       aux *= teste[i];
    }
      printf("\nO produtorio dos elementos do vetor eh: %d",aux);
      printf("\n\n");
    return 0;

}
