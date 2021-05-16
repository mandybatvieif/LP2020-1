// #include <stdio.h>
// #include <string.h>

// int main(void) {

//   char str[101];
//   int i, fim;

//   for (i=0; i<100; i++) {
//     scanf("%c", &str[i]);
//     if (str[i] == 10) {
//       fim = i;
//       i = 101;
//       str[i] = '\n';
//     }
//     printf("%i\n", str[i]);
//   }
//   //printf("%c\n", str[fim]);

//   for (i=0; i<fim; i++) {
//     printf("%c", str[i]);
//   }

//   printf("\n");
//   int i1=0, i2=0;
//   char j1[100], j2[100];

//   for (i=0; i<fim; i++) {
//     if (str[i] != 32) {
//       if (i1 <= i2) {
//         if (j1[i1] != 'S') {
//           j1[i1] = str[i];
//           printf("j1[%i] = %c\n", i1, j1[i1]);
//           i1++;
//         }else{
//           if (j2[i2] != 'S') {
//             j2[i2] = str[i];
//             printf("j2[%i] = %c\n", i2, j2[i2]);
//             i2++;
//           }
//         }
//       }else{
//         if (j2[i2] != 'S') {
//           j2[i2] = str[i];
//           printf("j2[%i] = %c\n", i2, j2[i2]);
//           i2++;
//         }else{
//           if (j1[i1] != 'S') {
//             j1[i1] = str[i];
//             printf("j1[%i] = %c\n", i1, j1[i1]);
//             i1++;
//           }
//         }
//       }
        
//     }
//   }
//   printf("\n\n");
//   for (i=0; i<i1; i++) {
//     printf("j1[%i] = %c\n", i, j1[i]);
//   }
//   printf("\n");
//   for (i=0; i<i2; i++) {
//     printf("j2[%i] = %c\n", i, j2[i]);
//   }

// }