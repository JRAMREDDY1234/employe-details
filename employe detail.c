#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int age;
    int phonenumber;
    int salary;
}
    Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        
        printf("Name: ");
        scanf("%s",employees[i].name);
        
        printf("Age: ");
        scanf("%d",&employees[i].age);
        
        printf("phone number:");
        scanf("%d",&employees[i].phonenumber);
        
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
        
        printf("phone number\t:");
        printf("%d\n",employees[i].phonenumber);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
