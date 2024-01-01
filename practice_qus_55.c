#include<stdio.h>  
#include<string.h>  
  

  struct  Student
  {
    char name[100];  
    int roll;  
    float cgpa;
  };
  

int main(){   

    struct Student s1;  
    strcpy(s1.name,"Aanchal");   
    s1.cgpa = 80.3;  
    s1.roll = 1;  

    printf("1 student name = %s\n",s1.name);  
    printf("1 student roll = %d\n",s1.roll);  
    printf("1 student cgpa =%.2f\n",s1.cgpa);  
  
   struct Student s2;  
   strcpy(s2.name,"Goldi");  
   s2.roll= 2;   
   s2.cgpa = 80.4;  

   printf("2 student name = %s\n",s2.name);  
   printf("2 student roll = %d\n",s2.roll);  
   printf("2 student cgpa = %.2f\n",s2.cgpa);   

   struct Student s3;  
   strcpy(s3.name,"Aayushi");  
   s3.roll=3;  
   s3.cgpa = 80.98;  

   printf("3 student name = %s\n",s3.name);  
   printf("3 student roll = %d\n",s3.roll);  
   printf("3 student cgpa = %.2f\n",s3.cgpa);


    return 0;
}