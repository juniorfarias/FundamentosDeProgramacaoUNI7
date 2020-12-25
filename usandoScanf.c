/*
** Autor: juniorfarias
** Data: 25/12/2020
** Objetivo: Trabalhando com a função scanf e if else
*/
#include <stdio.h>
int main(void) {
  
  float nota1, nota2, media;
  printf("Informe a primeira nota: \n");
  scanf("%f", &nota1);
  printf("Informe a segunda nota: \n");
  scanf("%f", &nota2);
  media = (nota1 + nota2)/2;
  printf("A média aritimética ficou %.2f \n", media);

  if(media >= 7 && nota2 >=4){
    printf("Você foi aprovado!!!");
  } else {
    printf("Você foi reprovado!!!");
  }

  return 0;
}