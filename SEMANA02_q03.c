// #include <stdio.h>

// int main(void){
//   float a, b,c, maior, soma;
//   printf("Informe os 3 lados de um triângulo\n");
//   scanf("%f%f%f",&a,&b,&c);
//   if(a<c && b<c){
//       maior = c;
//       soma = a+b;
//   }else if(b < a && c < a){
//     maior = a;
//     soma = c+b;
//   }else if(a<b && c<b){
//     maior = b;
//     soma = a+c;
//   }
//   if(soma > maior){
//     if(a == b && b==c){
//       printf("EQUILÁTERO\n");
//     }else if(a == b || b==c || a==c){
//       printf("ISÓSCELES\n");
//     }else{
//       printf("ESCALENO\n");
//     }
//   }else{
//     printf("NÃO FORMA\n");
//   }
//   return 0;
// }