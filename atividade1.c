#include <stdio.h>

int main(){

float nota1;
float nota2;
float media;
float notafinal;
float mediafinal;

printf("digite a primeira nota\n");
scanf("%f", &nota1);

printf("digite a segunda nota\n");
scanf("%f", &nota2);

media = (nota1 + nota2)/2;

if (media >= 7){
    printf("aprovado");
}

else {
printf("digite a nota final\n");
scanf("%f", &notafinal);

mediafinal = (media + notafinal)/2;

if (mediafinal >= 7){
    printf("aprovado com nota 6");
}

else { 
    printf("reprovado");
  }

}







return 0;
}