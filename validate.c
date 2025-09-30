#include <stdio.h>
#include "sieve.h"
int main(){
  //This quickly checks a variety of sizes and values
  //Do not try to exploit the fact that these function calls are in the same main. I run multiple tests.
  int input[] = {1, 2, 3, 4,  5,  6,  7,  8,  9, 10, 25,
      100, 1000, 2350, 2945, 9822,  10000,  50000, 73234,  100000,
      500000, 1000003,1510041,1932457, 2000000};
  int ans[] =   {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 97,
      541, 7919, 20897, 26849, 102563, 104729, 611953, 926623,1299709,
      7368787, 15485927, 24049567, 31285333 ,32452843};

  for(int i = 0; i < sizeof(input)/sizeof(int); i++){
      int guess = sieve(input[i]);
      //printf("Test sieve(%7d)\t%s, your guess : %8d \n",input[i],(guess==ans[i])?"PASS":"FAIL",guess);
      if(guess!=ans[i]){
          //exit at first failed case.
          printf("ERROR: sieve(%7d) your guess : %8d \n", input[i], guess);
          return 1;
      }

  }
  printf("Pass all cases.");
  return 0;
}
