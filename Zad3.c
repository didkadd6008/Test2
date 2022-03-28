#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

int OddEven(int index){
   
       if (index % 2 == 0)
       {
           return 0;
       }else{
           return 1;
       }
   
   
    
}

void letter(char* num){
  
  *num += 17;

}

void symbol(char* num){
    int number = atoi(num);
    if (number == 0)
    {
        *num = '!';
    }else if (number == 1)
    {
        *num = '#';
    }else if (number == 2)
    {
        *num = '/';
    }else if (number = 3)
    {
        *num = '~';
    }else if (number == 4)
    {
        *num = '=';
    }else if (number == 5)
    {
        *num = 39;
    }else if (number == 6)
    {
        *num = 92;
    }else if (number == 7)
    {
        *num = '>';
    }else if (number == 8)
    {
        *num = '.';
    }else if (number == 9)
    {
        *num = ',';
    }
    
    
    
    
    
    
    
    
    
    
}

int main(){
    char str[500];
   char number[500];
    scanf("%c",str);
     strcpy(number,str);
    
    int i = 0;
     strcpy(number,str);

    while (number[i] != '\0')
   {
       int index = i;
       if (OddEven(i) == 0)
       {
           letter(&number[i]);
       }else{
        symbol(&number[i]);
       }
       
       i++;
   }

   
   while (number[i] != '\0'){
       printf("%c",number[i]);
       i++;
   }
   
    
    return 0;
    
}