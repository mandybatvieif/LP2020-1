// #include <stdio.h>
// #include <string.h>

// int main(void) {

//   char src[50] = "";
//   int x, ant=0, r=0;

//   do{

//     scanf("%i",&x);
//     if (x>=0) {
//       r=x-ant;
//       if (r==0) {
//         strcat(src, "-");
//       }else if (r<0) {
//         strcat(src, "B");
//       }else{
//         strcat(src, "C");
//       }
//     }
    
//     ant = x;
//   }while(x >= 0);

//   printf("%s", src);

//   return 0;
// }