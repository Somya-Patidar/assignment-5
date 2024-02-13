#include <stdio.h>
int main(){
    int dt,div,q=0;
    printf("enter the divident:");
    scanf("%d",&dt);
    printf("enter the divisor:");
    scanf("%d",&div);
    int rem=dt;
    while(rem>=div){
        rem-=div;
        q++;
    }
    printf("Quotient is %d",q);
    printf("\nremainder is %d",rem);


}