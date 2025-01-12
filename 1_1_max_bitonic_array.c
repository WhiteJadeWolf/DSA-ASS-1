#include <stdio.h>

int maximum(int a[], int n){
    int head = 0, end = n-1;
    int max = (head+end)/2;
    while (!((a[max-1]<a[max])&&(a[max+1]<a[max]))){
        if ((a[max-1]<a[max])&&(a[max]<a[max+1])){ //in ascending part
            head=max+1;
        }
        else if ((a[max-1]>a[max])&&(a[max]>a[max+1])){ //in descending part
            end=max-1;
        }
        max=(head+end)/2;
    }
    return a[max];
}

int main(){
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter a Bitonic Array of %d elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nMAX = %d",maximum(a,n));
    return 0;
}      