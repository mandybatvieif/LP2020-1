// #include <stdio.h>

// int main(void) {
//   int valor1, valor2, a1, a2, s1, s2, vmaior, vmenor;
//   printf("Insira dois inteiros\n");
//   scanf("%i %i",&valor1,&valor2);
//   if(valor2 < valor1){
//     a1 = valor2 -1;
//     s1 = valor2 +1;
//     a2 = valor1 -1;
//     s2 = valor1 +1;
//     vmaior = valor1;
//     vmenor = valor2;
//   }else{
//     a1 = valor1 -1;
//     s1 = valor1 +1;
//     a2 = valor2 -1;
//     s2 = valor2 +1;
//     vmaior = valor2;
//     vmenor = valor1;
//   }
//   if((valor1 - valor2 == 1)||(valor2 - valor1 == 1)){
//     printf("%i %i %i %i\n",a1,vmenor,s1,s2);
//   }else if((valor1 - valor2 == 0)||(valor2 - valor1 == 0)){
//     printf("%i %i %i\n",a1,vmenor,s1);
//   }else if((valor1 - valor2 == 2)||(valor2 - valor1 == 2)){
//     printf("%i %i %i %i %i\n",a1,vmenor,s1,vmaior,s2);
//   }else{
//   printf("%i %i %i %i %i %i\n",a1,vmenor,s1,a2,vmaior,s2);
//   }
//   return 0;
// }