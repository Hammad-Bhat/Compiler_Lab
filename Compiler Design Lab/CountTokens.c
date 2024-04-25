// Programs that counts the number of tokens in a string
#include <stdio.h>
#include <string.h>



int countTokens(char str[], int size){
    int tokenCount = 0;
    int hasWord = 0; 
    for(int i = 0; i < size; i++){
        // checks if the string contains a word or not
        if(str[i] == ' ' && !hasWord){
            continue;
        }else{
            hasWord = 1; // string contains a word

            // EDGE CASE: Checks for the end word that doesnot end with a space
            if(str[i] != ' ' && str[i + 1] == '\0'){
                tokenCount++;
            }else if(str[i] == ' '){
                tokenCount++;
            }
        }
    }

    return tokenCount;
}

int main(){
    char str[100];
    int size, result;

    printf("Enter String: ");
    fgets(str,100,stdin);

    size = strlen(str);
    result = countTokens(str, size);

    printf("Number of Token in String: %d", result);

    return 0;

}