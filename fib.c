#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long int printRecursion(int n){
   unsigned long long int fibcur;
   if (n == 1) fibcur= 0;
   else if (n == 2) fibcur = 1;
   else fibcur = (printRecursion(n-1)+printRecursion(n-2));
   return fibcur;
}

unsigned long long int printIteration(int n){
   if (n<=1) return 0;
   else if(n==2) return 1;
   unsigned long long int term1=0, term2=1, curfib;
   for (int i = 3; i <= n; i++){
      curfib = term1 + term2;
      term1 = term2;
      term2 = curfib;
   }
   return curfib;
}

int main(int argc, char *argv[]) {
   unsigned long long int fibN;
   int numInputted = atoi(argv[1]);
   char ir = argv[2][0];
   if(ir =='i') fibN = printIteration(numInputted);
   else fibN = printRecursion(numInputted);
   printf("%d\n", fibN);
   return 0;
}