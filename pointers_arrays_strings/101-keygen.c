#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a password with ascii character
 * up to the value of 2772
 * Return: Always 0 (Success)
 */ 
 

int main() {
    
     int password[1000];
     int asciiSum = 0;
     int i = 0;
     int lastChar = 0;
     
     srand(time(NULL));
     
     while(asciiSum <= 2772 - 126){
        password[i] = (rand() % 94) + 33;
        asciiSum += password[i];
        printf("%c", password[i]);
        i++;
     }
     
     lastChar = 2772 - asciiSum;
     printf("%c", lastChar);
     

	return (0);
}
