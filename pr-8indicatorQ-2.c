#include <stdio.h>

int main() {	
    char str[100];
	int i, c = 0;
	
	printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    
    if ((strlen(str) > 0) && (str[strlen(str) - 1] == '\n')) {
        str[strlen(str) - 1] = '\0';
    }

   for (i = 0; str[i] != '\0'; i++) {
        c++;
    }
    printf("The length of the string is: %d", c);
    
    return 0;
}
