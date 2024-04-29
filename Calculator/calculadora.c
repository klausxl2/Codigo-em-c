#include <stdio.h>
int main(){
 char operador;
 float num1,num2,resultado;

 printf(" Selecione o operador: + ,- ,*, /  \n");
 scanf("%c",&operador);

 printf("Digite o primeiro valor:\n");
 scanf("%f",&num1);

 printf("Digite o segundo valor:\n");
 scanf("%f",&num2);

 switch(operador){
    case '+':
    resultado=num1+num2;
    printf(" O resultado e : %.2f \n",resultado);
    break;
    case '-':
    resultado=num1-num2;
    printf("O resultado e : %.2f \n",resultado);
    break;
    case '*':
    resultado=num1*num2;
    printf("O resultado e : %.2f \n",resultado);
    break;
    case'/':
    if(num2 !=0){
    resultado=num1/num2;
    printf("O resultado e : %.2f \n",resultado);}
    else {
        printf("ERRO: NAO SE PODE DIVIDIR POR ZERO.\n");
    }
    break;
    default:
    printf("Operacao invalida.\n");
 }
}





