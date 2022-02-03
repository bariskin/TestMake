#include <stdlib.h>
#include <stdio.h>


void printHelp(void)
   {
    printf("git command:\n"); 

    printf(" git status\n");

    printf(" echo build > .gitignore\n");

    printf(" git add .   \n");

    printf (" git commit -m   commitText\n");

    printf(" git push\n");
   }

int main(int argc, char* argv[])
   {
    printf("Test Cmake");

    printHelp();
   }