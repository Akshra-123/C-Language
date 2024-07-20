# include <stdio.h>

int main() {
    char character;
    printf("Enter a character:");
    scanf("%c",&character);
    if (character>='A' && character<='Z') {
        printf("It is a upper case");
    } else if (character>='a' && character<='z') {
        printf("It is a lower case");
    } else {
        printf("Enter a english alphabet");
    }
}