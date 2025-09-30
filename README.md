# Lab04

# Functionality Requirement:

Required function: `int sieve(int n); `

Return value: the n'th prime, such that `sieve(1)=2` , `sieve(2)=3`, `sieve(25)=97`, etc.

`sieve(n)` must work for all n in the range: `1 <= n <= 2000000`

# Makefile:

I will not run your makefile, but you should use one to validate your function.

# Optimizations:


1. No Optimizations, just malloc/calloc the array and get large primes. (Just make it work with an array that is the size of the 2,000,000th prime 32452844)
2. Use char array instead of int
3. Only cross out multiples of primes IF the prime is less than the sqrt of the SIZE. This makes the entire process stop when you reach a high enough prime.
4. Estimate the size of your array using math (see prime approximation below) This will lower your speed.
5. Start crossing out multiples of hte current_prime at current_prime*current_prime, since all prior multiples of prime are already crossed out. This is helpful for larger values.
6. Store only odd values in your array, this cuts down array traversal and memory allocation quite a bit. e.g. index 0 is 1, index 1 is 3, index 2 is 5 etc. hint: make the 1st prime a special case, since it is the only even one and won't be in the array.
7. optional: Try to cut down on your extra variables and extra function calls
8. optional: Try using bitwise operations and store bits (exploration of this topic is optional and complex.)


# Suggested Workflow:

```
int sieve(int n){
   return sieveV2(n);//call your fastest working one here
}

//basic version
int sieveV1(int n){
  //code that is tested and working
}

//stopped early when checking primes
int sieveV2(int n){
  //code that is tested and working
}

//added extra something...
int sieveV2(int n){
  //code that is NOT tested yet
}
```
