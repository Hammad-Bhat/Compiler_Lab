// Program to check if a number is palindrom of not
#include <stdio.h>

int checkPalindrome(int number){
    int temp = number;
    int reverse = 0;
    while(temp != 0){
        int remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
    }

    if(number == reverse) return 1;

    return 0;
}

int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    if(checkPalindrome(num)){
        printf("Number is Palindrome!");
    }else{
        printf("Number is NOT Palindrome!");
    }

    return 0;
}