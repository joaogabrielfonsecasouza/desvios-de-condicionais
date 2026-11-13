#include <stdio.h>

int main(){
 
float salario;
float comissao;
float vendas;
float porcentagem = 3.0;
float porcentagem1 = 5.0;
float salariototal;

printf("digite o salario\n");
scanf("%f", &salario);

printf("valor da venda\n");
scanf("%f", &vendas);


if(vendas <= 1500) {
comissao = (vendas * porcentagem)/100;
}

else {
    comissao = (1500 * porcentagem) / 100
     + ((vendas - 1500) * porcentagem1) / 100;
}

salariototal = salario + comissao;

printf("Salario total: R$ %.2f", salariototal);

return 0;
}