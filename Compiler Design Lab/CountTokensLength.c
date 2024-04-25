// Programs that counts the number of tokens in a string and the length of each token
#include <stdio.h>
#include <string.h>

void countTokens(char arr[], int size){
    int tokenCount = 0; // holds the total token count
    int tokenLenght = 0;    // holds token length
    int hasWord = 0; 
    for(int i = 0; i < size; i++){
        // checks if the string contains a word or not
        if(arr[i] == ' ' && !hasWord){
            continue;
        }else{
            hasWord = 1; // string contains a word
            tokenLenght++;  // is incremented when a character is present

            // EDGE CASE: Checks for the end word that doesnot end with a space
            if(arr[i] != ' ' && arr[i + 1] == '\0'){
                tokenCount++;
                printf("\nToken Number: %d, Token Length: %d", tokenCount, tokenLenght);
                tokenLenght = 0;    // resets token lenght for new token
            }else if(arr[i] == ' '){
                tokenCount++;
                printf("\nToken Number: %d, Token Length: %d", tokenCount, tokenLenght-1);
                tokenLenght = 0;    // resets token lenght for new token
            }
        }
    }
}

int main(){
    char stringinput[100];
    int size;

    printf("Enter String: ");
    fgets(stringinput,100,stdin);

    size = strlen(stringinput);
    countTokens(stringinput, size);

    return 0;

}