#include <stdio.h>

int main(){

int valor1;
int valor2;
int valor3;

printf("digite o valor\n");
scanf("%d", &valor1);

printf("digite o valor\n");
scanf("%d", &valor2);

printf("digite o valor\n");
scanf("%d", &valor3);

if(valor1 <= valor2 && valor1 <= valor3){
printf("%d %d %d", valor1, valor2, valor3);
}

else if (valor2 <= valor3 && valor3 <= valor1) {
    printf("%d %d %d", valor2, valor3, valor1);
}

else if (valor1 <= valor3 && valor3 <= valor2){
    printf("%d %d %d", valor1, valor3, valor2);
}

else if(valor3 <= valor2 && valor2 <= valor1){
    printf("%d %d %d", valor3, valor2, valor1);
}

else if(valor3 <= valor1 && valor1 <= valor2){
    printf("%d %d %d", valor3, valor1, valor2);
}
else if(valor2 <= valor3  && valor3 <= valor1){
    printf("%d %d %d", valor2, valor3, valor1);
}
else if(valor2 <= valor1 && valor1 <= valor3){
    printf("%d %d %d", valor2, valor1, valor3);
}

return 0;
}