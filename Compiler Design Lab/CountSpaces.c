
// Program to count the number of spaces in a sentence
#include <stdio.h>
#include <string.h>
#define MAX 100


int main(){
    char array[MAX];
    int count = 0;
    int i = 0;

    printf("Enter the String: ");
    fgets(array,sizeof(array),stdin);

    while(array[i] != '\0'){
        if(array[i] == ' '){
            count++;
        } 
        i++;
    }

    printf("Number of Spaces: %d", count);
    return 0;
}