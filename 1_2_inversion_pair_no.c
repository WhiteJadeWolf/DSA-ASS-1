#include <stdio.h>

int inversion(int a[], int n){
    int c=0;
    for(int j=1;j<n;j++){
        for(int i=0;i<j;i++){
            if(a[i]>a[j]){
                c++;
            }
        }        
    }
    return c;
}

int main(){
    int n;
    printf("Enter no. of integers in array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d nos. : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("No. of inversion pairs = %d",inversion(a,n));    
    return 0;
}    