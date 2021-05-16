// #include <stdio.h>

// int main(void) {

//   int n, i, j;
//   char c;
//   int m[100][100];

//   scanf("%i %c", &n, &c);

//   for (i=0; i<n; i++) {
//     for (j=0; j<n; j++) {
//       if (c == 'T') {
//         if (i+j == 0 || (i+j) % 2 == 0) {
//           m[i][j] = 1;
//         }else{
//           m[i][j] = 0;
//         }
//       } else if (c == 'D') {
//         if (i==j) {
//           m[i][j] = 1;
//         }else{
//           m[i][j] = 0;
//         }
//       } else if (c == 'S') {
//         if (i<=j) {
//           m[i][j] = 1;
//         }else{
//           m[i][j] = 0;
//         }
//       } else if (c == 'I') {
//         if (i>=j) {
//           m[i][j] = 1;
//         }else{
//           m[i][j] = 0;
//         }
//       }
//     }
//   }

//   for (i=0; i<n; i++) {
//     for (j=0; j<n; j++) {
//       printf("%i", m[i][j]);
//     }
//     printf("\n");
//   }

//   return 0;

// }