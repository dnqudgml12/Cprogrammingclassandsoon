#include <stdio.h>


int main(){
    char name[100];




    printf("what's your name?: \n");
    scanf("%s",name);

    printf("Hello, %s, Good to see you!", name);

    return 0;
}

/*

#include <stdio.h>

int main()
{
    char name[64] = "";

    // display a message to guide the user to input name
    printf("What's your name?\n");

    // read the name of the user as a string
    scanf("%s", name);

    // display a greeting message with the name
    printf("Nice to meet you, %s!\n", name);

    return 0;
}
*/