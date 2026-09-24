//EJERCICIO A

#include <stdio.h>

int main (void) {
    char letra[1];
    int numero[1];
    int esletra[1];

    esletra [0]=0;

    printf ("Escriba una letra (puede ser caracter)\n");
    scanf ("%c",&letra[0]);

    printf ("Escriba un desplazamiento entre 1 y 25\n");
    scanf ("%d",&numero[0]);
    
    int numletra = letra[0];

    if (((numletra<65)&&(numletra>90))||((numletra<97)&&(numletra>122))) {
        esletra[0]=1;
    }

    if (esletra[0]=1){
        if ((numletra>=65)&&(numletra<=90)) {
            numletra= numletra + numero[0];
            if (numletra>=91)  {numletra=numletra-26; }
        } 
        else if ((numletra>=97)&&(numletra<=122)) {
            numletra= numletra + numero[0];
            if (numletra>=123)  {numletra=numletra-26; }
        } 
    }

    char letrafinal = numletra;

    printf("Tu letra es la %c \n",letrafinal);
    
    return 0;
}
