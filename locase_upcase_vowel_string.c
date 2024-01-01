/*#include<stdio.h>  

void  upperVowel(char str[100]);
int main(){   
    char str[100];    
    printf("Enter the string :");
    scanf("%s",str);    
    printf("your string is %s:\n",str);  
   upperVowel(str);

}  

void upperVowel(char str[100]){  
    int i = 0;  
    while(str[i]!='\0'){ 
        if(str[i]=='a'|| str[i]=='e' ||str[i]=='i'||str[i]=='o' ||str[i]=='u') 
           str[i] = str[i]-32;  
           i++; 
    
    }
            printf("The upper case of string vowels are: %s\n",str);   
          
      

} */     

#include<stdio.h>  
 
 void upperVowel(char str[100]);

int main(){ 
      
      char str[100];  
      printf("Enter the string:");  
       fgets(str,100,stdin);  
       printf("The string is: %s\n",str);  
       upperVowel(str);
}  
 
 void upperVowel(char str[100]){ 
 for(int i = 0;str[i]!='\0';i++){ 
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') 
    str[i]= str[i]-32;
 }  
   printf("The uppercase of vowel are: %s\n",str);


 }