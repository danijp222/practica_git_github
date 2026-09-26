//EJERCICIO A


#include <stdio.h>


char desplazar_caracter(char c, int desplazamiento){

    if (c >= 'A' && c <= 'Z') {

        c = c + desplazamiento;

        if (c > 'Z') { c = c - 26; }
        else if (c < 'A') { c = c + 26; }
    }
    else if (c >= 'a' && c <= 'z') {

        c = c + desplazamiento;

        if (c > 'z') { c = c - 26; } 
        else if (c < 'a') { c = c + 26; } 
    }
}


int main (void) {
    char letra;
    int numero;
    int esletra;
    char cifrado[20];

    esletra = 0;
    
    printf ("Escriba Cifrar o Descifrar\n");
    scanf ("%19s",cifrado);

    if (!((cifrado[0]=='C')||(cifrado[0]=='D'))) { return 1; }

    printf ("Escriba una letra (puede ser caracter)\n");
    scanf (" %c",&letra);

    printf ("Escriba un desplazamiento entre 1 y 25\n");
    scanf ("%d",&numero);
    
    int numletra = letra;

    if (cifrado[0]=='D') { numero=-numero;};

    char letrafinal =  desplazar_caracter(letra, numero);

    printf("Tu caracter es la %c \n",letrafinal);
    
    return 0;
}


/*
   if (((numletra >= 65 && numletra <= 90) || (numletra >= 97 && numletra <= 122)))  
        {esletra = 1; }

    if (esletra==1){
        if ((numletra>=65)&&(numletra<=90)) {
            if (cifrado[0]=='C') 
                { numletra= numletra + numero; 
                 if (numletra>=91)  {numletra=numletra-26;}
            }
            else if (cifrado [0]=='D') 
                { numletra= numletra - numero; 
                 if (numletra<65)  {numletra=numletra+26;}
            }
        } 

        else if ((numletra>=97)&&(numletra<=122)) {
            if (cifrado[0]=='C') {
                 numletra= numletra + numero; 
                if (numletra>=123)  {numletra=numletra-26; }
            }
            else if (cifrado[0]=='D') {
                 numletra= numletra - numero; 
                 if (numletra<97)  {numletra=numletra+26;}
            }
        } 
    } */ 