#include<stdio.h>
main()
{
int marks;
print("Enter marks");
scanf("%d",&marks);
if(marks>=85 && marks<=100)
print("Grade A");
else if(marks>=70 && marks<=84)
print("Grade B");
else if(marks>=55 && marks<=69)
printf("Grade C");
else if(marks>=40 && marks<=54)
print("Grade D");
else
printf("Grade F");
}
