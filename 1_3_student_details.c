#include <stdio.h>

struct student{
    int roll;
    char name[20];
    float marks;
};

int main(){
    int n;
    printf("Enter no. of students : ");
    scanf("%d",&n);
    struct student a[n];
    printf("\nEnter Student Details :--\n\n");
    for(int i=0;i<n;i++){
        printf("Enter Roll number : ");
        scanf("%d",&a[i].roll);
        getchar();
        printf("Enter Name : ");
        scanf("%s",&a[i].name);
        printf("Enter Marks : ");
        scanf("%f",&a[i].marks);
        printf("\n");
    }
    printf("\nStudent Details :--\n");
    printf("ROLL NO.\tNAME\tMARKS\n");
    for(int i=0;i<n;i++){
        printf("%d\t\t",a[i].roll);
        printf("%s\t",a[i].name);
        printf("%f\t",a[i].marks);
        printf("\n");
    }
    return 0;
}    