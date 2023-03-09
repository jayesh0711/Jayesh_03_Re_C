#include<stdio.h>

 struct student 
{
	char student[30];
	int rollno ;
	float marks1 ;
		
};
union data{
    char student[30];
    int rollno;
    float marks1
};
int array[20]={10,20,30,40};

void main()
{
    struct student s;
    struct data d;
    int *ptr1 ,*ptr2,*ptr3;
    ptr1=&s;
    ptr2=&d;
    ptr3=&array 
    void function1();
    void function2();
}
 void function1()