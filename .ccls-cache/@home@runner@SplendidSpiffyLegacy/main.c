#include <stdio.h>

int main(void) {
  char nome[12];
  int idade;
  
  
  printf("insira seu nome: "); 
  scanf("%s", &nome);
    
  printf("insira sua idade: ");
    scanf("%d", &idade);
    
  printf("%s\n", nome);
   printf("%d", idade);

  if(idade < 18){
    printf("s\n", nome);
    printf("menor! você possui %d anos", idade);
  }else{
    printf("%s\n", nome);
    printf("maior! você possui %d anos", idade);  
    
  
    }
  }
