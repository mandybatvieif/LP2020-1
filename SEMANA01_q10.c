// #include <stdio.h>

// int main(void) {
//   int x, n1, n2, n3, n4, r1, r2;
//   scanf("%i", &x);

//   if (x > 9999) {
//     printf("Número inválido!\n");
//   } else if (x == 100) {
//     printf("cem\n");
//   } else if (x == 0) {
//     printf("zero\n");
//   }else {
//     n1 = x / 1000;
//     r1 = x % 1000;
//     n2 = r1 / 100;
//     r2 = r1 % 100;
//     n3 = r2 / 10;
//     n4 = r2 % 10;
        
//     switch(n1) {
//       case 1: 
//         printf("mil ");
//       break;
//       case 2: 
//         printf("dois mil ");
//       break;
//       case 3: 
//         printf("tres mil ");
//       break;
//       case 4: 
//         printf("quatro mil ");
//       break;
//       case 5: 
//         printf("cinco mil ");
//       break;
//       case 6: 
//         printf("seis mil ");
//       break;
//       case 7: 
//         printf("sete mil ");
//       break;
//       case 8: 
//         printf("oito mil ");
//       break;
//       case 9: 
//         printf("nove mil ");
//       break;
//     }
//     switch(n2) {
//       case 1: 
//         printf("cento ");
//       break;
//       case 2: 
//         printf("duzentos ");
//       break;
//       case 3: 
//         printf("trezentos ");
//       break;
//       case 4: 
//         printf("quatrocentos ");
//       break;
//       case 5: 
//         printf("quinhentos ");
//       break;
//       case 6: 
//         printf("seiscentos ");
//       break;
//       case 7: 
//         printf("setecentos ");
//       break;
//       case 8: 
//         printf("oitocentos ");
//       break;
//       case 9: 
//         printf("novecentos ");
//       break;
//     }
//     if ((n1 != 0 || n2 != 0) && n3 != 0) {
//       printf("e ");
//     }
//     switch(n3) {
//       case 2: 
//         printf("vinte ");
//       break;
//       case 3: 
//         printf("trinta ");
//       break;
//       case 4: 
//         printf("quarenta ");
//       break;
//       case 5: 
//         printf("cinquenta ");
//       break;
//       case 6: 
//         printf("sessenta ");
//       break;
//       case 7: 
//         printf("setenta ");
//       break;
//       case 8: 
//         printf("oitenta ");
//       break;
//       case 9: 
//         printf("noventa ");
//       break;
//     }
//     if (n3 == 1) {
//       switch (r2) {
//         case 10: 
//           printf("dez\n");
//         break;
//         case 11: 
//           printf("onze\n");
//         break;
//         case 12: 
//           printf("doze\n");
//         break;
//         case 13: 
//           printf("treze\n");
//         break;
//         case 14: 
//           printf("quatorze\n");
//         break;
//         case 15: 
//           printf("quinze\n");
//         break;
//         case 16: 
//           printf("dezesseis\n");
//         break;
//         case 17: 
//           printf("dezesete\n");
//         break;
//         case 18: 
//           printf("dezoito\n");
//         break;
//         case 19: 
//           printf("dezenove\n");
//         break;
//       }
//     } else {
//       if ((n1 != 0 || n2 != 0 || n3 != 0) && n4 != 0 ) {
//           printf("e ");
//       }
//       switch (n4) {
//         case 0: 
//           printf("\n");
//         break;
//         case 1: 
//           printf("um\n");
//         break;
//         case 2: 
//           printf("dois\n");
//         break;
//         case 3: 
//           printf("tres\n");
//         break;
//         case 4: 
//           printf("quatro\n");
//         break;
//         case 5: 
//           printf("cinco\n");
//         break;
//         case 6: 
//           printf("seis\n");
//         break;
//         case 7: 
//           printf("sete\n");
//         break;
//         case 8: 
//           printf("oito\n");
//         break;
//         case 9: 
//           printf("nove\n");
//         break;
//       }
//     } 
//   }
//   return 0;
// }