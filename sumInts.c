#include <stdio.h>
int main () {
int sum =0;
int i;
for (i=0;i<1000;i++){
if (i%5==0 || i%3 ==0){
sum = sum+i;
}
}
printf("The sum is %i\n", sum);
return 0;
}
