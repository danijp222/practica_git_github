//EJERCICIO A

#include <stdio.h>

int main (void) {
    char letra[1];
    int numero[1];

    printf ("Escriba una letra minuscula\n");
    scanf ("%c",&letra[0]);

    printf ("Escriba un desplazamiento entre 1 y 25\n");
    scanf ("%d",&numero[0]);
    
    int numletra = letra[0];

    numletra= numletra + numero[0];
    
    if (numletra>=123)     
    {  numletra=numletra-26; }
    
    char letrafinal = numletra;

    printf("Tu letra es la %c \n",letrafinal);

}
