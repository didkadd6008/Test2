#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

#define CNT 10

typedef struct {
    char model[20];
    uint8_t maxspeed;
    double price;
} car;


int checkModel(char* str){
  char name[100];
    strcpy(name,str);
    int j = 0;
     while (name[j] != '\0')
     {
       int s = name[j];
        if ((s < 97 || s > 122) && (s < 65 || s > 90))
        {

            return 1;
            break;
        }

         j++;
     }

     if(j < 10 || j > 20){
     return 1;
     }
     return 0;
}

int checkSpeed(uint8_t num){

    if(num < 100 || num > 300){

    return 1;

    }
    return 0;
}

int price (double price){
 double min = 1000;
 double max = 100000;
 if(price < min || price > max){
 return 1;
 }else{
 return 0;
 }
}

int getComparator(){
    
}

int main(int argc, char *argv[]){
    car cars[CNT];
    int option;
    for (int i = 0; i < CNT; i++)
{
    printf("Ener model: \n");
    scanf("%s",cars[i].model);
    scanf("%s",cars[i].model);
     if(checkModel(cars[i].model) != 0){
    printf("Invalid input!");
    return 1;
    break;
    }

       printf("Ener maxspeed: \n");
    scanf("%u",&cars[i].maxspeed);
      if(checkSpeed(cars[i].maxspeed) != 0){
         printf("Invalid input");
         break;
       }

       printf("Ener price: \n");
    scanf("%lf",&cars[i].price);
      if(price(cars[i].price) != 0){
    printf("Invalid input!");
    return 1;
    break;
    }
    
    }

}
    
