#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, word;
    char c;

    printf("Enter text: \n");

        for (i = 0; i < (c = getchar()); i++)
        {
            if (c == ' ') { i = -1; }
            if(i == 0) { word++; }
            if(i == 0 && (word % 2) == 0) printf("%%");
            printf("%c", c);

            if(c == '\n')
            {
                printf("\n");
                exit(0); 
            }
        }
        
   return 0;
}
