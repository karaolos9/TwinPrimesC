#include <stdio.h>
#include <stdbool.h>
#include "math.h"


void emptyInputBuffer()
{
    int input;
    while((input =getchar() != '\n' && input!= EOF));
}

long inputNumber(const char *prompt) //pointer to a constant character string (char*) that represents the prompt or message you want to display to the user before they enter the number
{
    long testnumber=0; //initializes a variable named testnumber of type long, used to store the user's input
    while(true)
    {
        printf("%s", prompt);
        if(scanf("%ld", &testnumber))
        {break;}
        puts("Unable to recognise number, please try again");
        emptyInputBuffer();
    }
    return testnumber;
}
 
 bool primeTest(long number)
 {
     if(number == 2){
         return true;
         }
     else if (number < 2 || number % 2 == 0)
     {
        return false;
     }
     long x = number;
     long y;
     int limit = sqrt(number);
     
    
     for(y=3; (y <= limit); y+= 2){
         
            if((x % y) == 0){
             return false;
            }
            
         }
         return true; 
     }
 
int twin_primes(long lower, long upper){
    long testnumber = lower;
    testnumber= inputNumber("Enter your number: ");
    long max = upper;
    max = inputNumber("Enter your number: ");
    for(testnumber; testnumber<= max; testnumber++){
    if( (primeTest(testnumber) && primeTest(testnumber + 1)) )
    {
        printf("%ld and %ld are twin primes \n",testnumber, (testnumber+1));
    }
    else if((primeTest(testnumber) && primeTest(testnumber + 2)) ){
        printf("%ld and %ld are twin primes \n",testnumber, (testnumber+2));
    }
    }
}

int main(void) 
{
    long x = 0;
    long y = 0;
    
    twin_primes(x,y);
    return 0;
 
}

 
