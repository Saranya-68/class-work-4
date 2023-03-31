#include<stdio.h>
struct person
{
	char name[20];
	int age;
	float height;
}s1;
int main()
{
	printf("enter name: \n");
	scanf("%s",&s1.name);
	printf("enter age: \n");
	scanf("%d",&s1.age);
	printf("enter height : \n");
	scanf("%f",&s1.height);
}
