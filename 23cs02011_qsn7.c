# include <stdio.h>
int main(){
    int arr[10];
    printf("enter the 10 integers in array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int counter=1;
    while(counter<10){
        for(int i=0;i<10-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    printf("\nthe sorted array is-->\n");
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }

}