// #include <stdio.h>

// int main(void) {

//   int x, flag=0, m1=-1, m2=-1, m3=-1, m4=-1, m5=-1, media=0;

//   scanf("%i", &x);

//   while (x>=0) {

//     if (m1 == -1) {
//       m1 = x;
//     }else if (m2 == -1) {
//       m2 = m1;
//       m1 = x;
//     }else if (m3 == -1) {
//       m3 = m2;
//       m2 = m1;
//       m1 = x;
//     }else if (m4 == -1) {
//       m4 = m3;
//       m3 = m2;
//       m2 = m1;
//       m1 = x;
//     }else{
//       m5 = m4;
//       m4 = m3;
//       m3 = m2;
//       m2 = m1;
//       m1 = x;
//       media = (m1+m2+m3+m4+m5)/5;
//       if(media>1000){
//         flag=1;
//       }
//     }

//     scanf("%i", &x);
//   }

//   if (flag == 1) {
//     printf("DEU RUIM\n");
//   }else{
//     printf("TURNO TRANQUILO\n");
//   }

//   return 0;
// }