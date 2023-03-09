#include<stdio.h>
#define value 3 // use of macros

typedef struct student   //use of typedef
{
	union data{
		struct{
			char student[30];
			int rollno ;
			float marks1 ;
		}dassd[value];
		struct{
			char student[30];
			int rollno;
			float marks2;
		}desd[value];
		struct{
			char student[30];
			 int rollno;
			  float marks3;
		}dac[value];
	}student_data;
}profile;

int i;

void main()
{  

	profile s;    //use of typedef
	printf("enter the detail of dassd course\n");
	for(i=0;i<value;i++)
         {       
	       printf("enter the student name");
		   scanf("%s",&s.student_data.dassd[i].student);
           printf("enter the roll number");
		   scanf("%d",&s.student_data.dassd[i].rollno);
		   printf("enter the marks of student");
		   scanf("%f",&s.student_data.dassd[i].marks1);
	    }
	 printf("enter the detail of desdd course");
             for(i=0;i<value;i++)
            {       
		       printf("enter the student name");
		      scanf("%s",&s.student_data.desd[i].student);
                       printf("enter the roll number");
                         scanf("%d",&s.student_data.desd[i].rollno);
                         printf("enter the marks of student");
                        scanf("%f",&s.student_data.desd[i].marks2);
            } 
              printf("enter the detail of dac course");
	       for(i=0;i<value;i++)
	       {
	          printf("enter the student name");
                   scanf("%s",&s.student_data.dac[i].student);
                   printf("enter the roll number");
                   scanf("%d",&s.student_data.dac[i].rollno);
		   printf("enter the marks of student");
                        scanf("%f",&s.student_data.dac[i].marks3);
                } 
	           printf("the detail of dassd course");

               for(i=0;i<=value;i++)
                  {
			  printf("%s",s.student_data.dassd[i].student);
		          printf("%d",s.student_data.dassd[i].rollno);		  
                          printf("%f",s.student_data.dassd[i].marks1);
                    } 
	          printf("the detail of desd course");
                    for(i=0;i<=value;i++)
                    { 
			     printf("%s",s.student_data.desd[i].student);
                                printf("%d",s.student_data.desd[i].rollno);    
				 printf("%f",s.student_data.desd[i].marks2);
                    }
                       printf("the detail of dac course");
                        for(i=0;i<=value;i++)
                        {
				  printf("%s",s.student_data.dac[i].student);
                                    printf("%d",s.student_data.dac[i].rollno); 
				      printf("%f",s.student_data.dac[i].marks3);
                          }
}






