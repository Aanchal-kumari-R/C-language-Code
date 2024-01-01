#include<stdio.h>   
void frequency(char arr[100]);

int main(){   
    char arr[100]= {'A','D','D','B','A','D','C','A','B','\0'};

    frequency(arr);

    return 0;
}  

void frequency(char arr[100]){ 
  int fc[256]={0};  

  int i,min,max;  

  for(i = 0;arr[i]!='\0';i++){  
    fc(arr[i])++;

  }   
  for(i = 0;i<=256;i++){ 
    if(fc[i]==0) 
    break;
  }   
  min=max=i;   
  for(i++;i<=256;i++){ 
    if(fc[i]==0) 
    continue;
 if(fc[i]<fc[min])  
  min = i;  
  if(fc[i]>fc(max))
  max = i;   
  printf("min %c %d",min,fc([min]));  
  printf("max %c %d",max,fc([max]));
}  
}