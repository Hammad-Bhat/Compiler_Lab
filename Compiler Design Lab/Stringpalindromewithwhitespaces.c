// Program to check if a string is palindrome or not (checking spaces)
#include <stdio.h>
#include<string.h>


int checkPalindrome(char str[], int size){
    int lowerBound = 0;
    int upperBound = size -1;

    while(lowerBound <= upperBound){
        if(str[lowerBound] == ' '){
            lowerBound++;
            continue;
        }
        if(str[upperBound] == ' '){
            upperBound--;
            continue;
        }
        if(str[lowerBound] != str[upperBound]) return 0;
        lowerBound++;
        upperBound--;
    }

    return 1;
}

int main(){
    char input[100];
    int size;

    printf("Enter Sentence: ");
    scanf("s", input);

    size = strlen(input);

    if(checkPalindrome(input, size)){
        printf("The Sentence is a Palindrome!");
    }else{
        printf("The Sentence is NOT a Palindrome!");
    }
}