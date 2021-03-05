// #include <stdio.h>

// int main(void){
//   int n1, n2,n3, nfigual;
//   char nf;
//   printf("Informe 3 notas de 1 a 4 \n");
//   scanf("%i%i%i",&n1,&n2,&n3);
//   if((n1>=1 && n1 <=4) && (n2>=1 && n2 <=4) && (n3>=1 && n3 <=4)){
//     if((n1==4 && n2==4)||(n2==4 && n3==4)||(n1==4 && n3==4)){
//       printf("REPROVADO\n");
//     }else if((n1==n2) || (n2==n3) || (n1==n3)){
//       if(n1==n2){
//         nfigual = n1;
//       }else if(n2==n3){
//         nfigual = n2;
//       }else if(n1==n3){
//         nfigual = n1;
//       }
//       if(nfigual == 1){
//         nf = 'A';
//       }else if(nfigual == 2){
//         nf = 'B';      
//       }else if(nfigual == 3){
//         nf = 'C';
//       }
//       printf("APROVADO COM %c\n",nf);
//     }else{
//       printf("INCONCLUSIVO\n");
//     }
//   }else{
//     printf("Inserir apenas valores entre 1 e 4 (incluindo 1 e 4)\n");
//   }
//   return 0;
// }