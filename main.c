#include <stdio.h>
#include <stdlib.h>

/*void main(){
int a, b;

printf("Insira seu peso \n");
scanf ("%d",&a) ;
printf("Insira sua altura\n");
scanf ("%d",&b);
printf("Seu imc e %d", a / b);

}
*/
void main(){
float altura, peso, imc;
printf("Entre com a sua altura e o seu peso:\n");
scanf("%f %f", &altura, &peso);
imc = (peso/altura)/altura;
printf("Seu IMC vale %f∖n", imc);
}

