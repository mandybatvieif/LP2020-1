// #include <stdio.h>

// int main(void) {
//   int i, x, aux, cres[10], decres[10];
//   for (i = 0; i < 10; i++) {
//     scanf("%i",&x);
//     cres[i] = x;
//     decres[i] = x;
//   }
  
//   int troca = 1;
//   while (troca) {
//     troca = 0;
//     for (i = 0; i < 9; i++) {
//       if (cres[i] > cres[i+1]) {
//         aux = cres[i];
//         cres[i] = cres[i+1];
//         cres[i+1] = aux;
//         troca = 1;
//       }
//     }
//   }

//   troca = 1;
//   while (troca) {
//     troca = 0;
//     for (i = 0; i < 9; i++) {
//       if (decres[i] < decres[i+1]) {
//         aux = decres[i];
//         decres[i] = decres[i+1];
//         decres[i+1] = aux;
//         troca = 1;
//       }
//     }
//   }

//   for (i = 0; i < 10; i++) {
//     printf("%i ",cres[i]);
//   }
//   printf("\n");
//   for (i = 0; i < 10; i++) {
//     printf("%i ",decres[i]);
//   }
//   return 0;
// }