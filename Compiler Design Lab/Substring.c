// Program to check if the given substring is a part of the given string
#include <stdio.h>
#include <string.h>

int checking_Sub_String(char str[], char subStr[], int strSize, int subStrSize){

    int subStrIndex = 0;
    int flag = 0;
    int j = 0;
    for(int i = 0; i < strSize; i++){
        if(flag) break;
        if(str[i] == subStr[j]){
            for(j = 0; j < subStrSize; j++){
                if(str[i] != subStr[j]){
                    i--;
                    j = 0;
                    break;
                }else{
                    i++;
                    flag = 1;
                }

            }
        }
    }
    return flag;
}

int main(){
    char mainString[100], subString[100];
    int mainStringSize, subStringSize;

    printf("Enter Main String: ");
    scanf("%[^\n]%*c", mainString);
    printf("Enter Sub String: ");
    scanf("%[^\n]%*c", subString);

    mainStringSize = strlen(mainString);
    subStringSize = strlen(subString);

    int result = checking_Sub_String(mainString, subString, mainStringSize, subStringSize);
    result == 1 ? printf("\nIS Sub-String!") : printf("\nNOT Sub-String");

    return 0;
}