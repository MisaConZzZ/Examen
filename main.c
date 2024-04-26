#include <stdio.h>
int main() {
  
  float tasaimpuestorenta, montomensual, total_meses, ImpuestoRenta, Total, Interes, tasasinteres;

  float total_acumulado = 0.0;

  printf("Ingrese el total de meses: ");
  scanf("%f", &total_meses);
  
  for (int i = 0; i < total_meses; i++){

  printf("Ingrese el monto mensual: ");
  scanf("%f", &montomensual);
  printf("Ingrese la tasa de interes: ");
  scanf("%f", &tasasinteres);
  printf("Ingrese la tasa de impuesto a renta: ");
  scanf("%f", &tasaimpuestorenta);

  ImpuestoRenta= montomensual * tasaimpuestorenta * (total_meses / 12);
  Interes= montomensual * tasasinteres * (total_meses / 12);
    Total = montomensual + Interes - ImpuestoRenta;
    total_acumulado += Total;

  printf("El total con interes acumulado hasta el mes %d es: %.2f\n", i + 1, total_acumulado);
    printf("El impuesto a renta es: %.2f\n", ImpuestoRenta);
    

  }
  return 0;
}