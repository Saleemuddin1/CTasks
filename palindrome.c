#include <stdio.h>
static int palindromeTester(unsigned int e );
int main (void)
{
unsigned int j, k, maximum =0;
for (j=100; j<=999; j++){
for (k=100; k<=999; k++){
unsigned int r = j*k;
if (palindromeTester(r) && r > maximum){
maximum =r;
}
}
}
printf("The largest palindrome is: %u!\n", maximum);
return 0;
}
int palindromeTester(unsigned int q){
unsigned int numRev = 0, m = q;
while (m){
numRev = 10*numRev +(m%10);
m /= 10;
}
return numRev == q;
}
