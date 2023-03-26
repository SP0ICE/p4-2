#include <stdio.h>
#include <math.h>
int main() {
int N; int sum;
N=456;
sum=N/100+(N%100/10)+N%100%10;
if (sum%2==0){
printf("The sum of digits is even");}
else{
printf("The sum of digits is uneven");}
}
