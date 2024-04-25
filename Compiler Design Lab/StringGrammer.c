// Program that replaces the contents of string based on a grammer
/**
 * @brief
 * Given Grammer
 * ( or {   ->  4
 * ) or }   ->  5
 * Digit    ->  6
 * +        ->  2
 * *        ->  3
 * 
 */

#include <stdio.h>
#include<string.h>
#include <ctype.h>

void replaceString(char str[], int size){
    char result[100];
    int i;
    for (i = 0; i < size; i++){
        if (str[i] == '(' || str[i] == '{'){
            result[i] = '4';
        }else if (str[i] == ')' || str[i] == '}'){
            result[i] = '5';
        }else if (isdigit(str[i])){
            result[i] = '6';
        }else if (str[i] == '+'){
            result[i] = '2';
        }else if (str[i] == '*'){
            result[i] = '3';
        }else{
            result[i] = str[i];
        }
    }
    result[i] = '\0';
    printf("Replaced String is: %s", result);
}
int main(){
    char input[100];
    int size;

    printf("Enter String: ");
    fgets(input,100,stdin);

    size = strlen(input);
    replaceString(input, size);
    return 0;
}