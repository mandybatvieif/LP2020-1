// #include <stdio.h>
// #include <string.h>

// int main(void) {

//   char str[51];
//   int i, fim;

//   for (i=0; i<50; i++) {
//     scanf("%c", &str[i]);
//     if (str[i] == 10) {
//       fim = i;
//       i = 51;
//       str[i] = '\n';
//     } else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//       str[i] = 'i';
//     } else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
//       str[i] = 'I';
//     }
//   }
//   //printf("%c\n", str[fim]);

//   for (i=0; i<fim; i++) {
//     printf("%c", str[i]);
//   }

// }