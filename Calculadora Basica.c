
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char letra;
    float a, b, divi, soma, subtra, mult;
    printf ("\t Digite um numero, a operação desejada e depois outro numero:\n");
    scanf("%f %c %f",&a, &letra, &b);
    
    if (letra == '+'){
       soma = a + b;
        printf ("Soma: %.2f", soma);
    }
    else if (letra == '-'){
       subtra = a - b;
        printf ("Subtração: %.2f", subtra);
    }
    else if (letra == '/'){
       divi = a / b;
        printf ("Divisão: %.2f", divi);
    }
    else if (letra == '*'){
       mult = a * b;
        printf ("Multiplicação: %.2f", mult);
    }
    else{
        printf ("Discagem incorreta");
        
    }
    
    
    
    return 0;
}

