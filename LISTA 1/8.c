#include <stdio.h>
#define GRATIFICACAO 50
int main() {

float salarioBase, salarioAReceber, imposto;

printf ("ESCREVA SEU SALARIO BASE: ");
scanf ("%f", &salarioBase);

imposto = 0.30;

salarioAReceber = GRATIFICACAO + salarioBase - imposto;

printf("SEU SALARIO FINAL: %.2f ", salarioAReceber);

return 0;

}