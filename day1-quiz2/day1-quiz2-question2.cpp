#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkPassword(char password[]) {
    int length = strlen(password);
    int lower = 0, upper = 0, number = 0,Special = 0;

    for (int i = 0; i < length; i++) {
        if (islower(password[i]))
            lower = 1;
        else if (isupper(password[i]))
            upper = 1;
        else if (password[i]=='!' ||password[i]=='@' ||password[i]=='#' ||password[i]=='$' ||password[i]=='%' ||password[i]=='^' ||password[i]=='&' ||password[i]=='*' ||password[i]=='(' ||password[i]==')' ||password[i]=='-' ||password[i]=='+')
            Special = 1;
        else if (isdigit(password[i]))
            number = 1;	   
    }
        if(lower==1 && upper==1 && Special==1 && number==1 && length >= 8) 
		     printf("Strong Password\n");
		else
             printf("Weak Password\n");
             
    return 0;         
}

int main() {
    char password[50];
    printf("Enter the password: ");
    scanf("%s", password);
    checkPassword(password);
    return 0;
}

