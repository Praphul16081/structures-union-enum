/* #include <stdio.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    switch (a){ // switch function : if case matches then it will execute all other program below that case
    
    case 1:
        printf("You entered 1\n");
    case 2:
        printf("You entered 2\n");
    case 3:
        printf("You entered 3\n");
    case 4:
        printf("You entered 4\n");
    default:
        printf("Nothing matched"); //if case match/no case match then default function will run as always
    }

    return 0;
}               //But if you want to run a command till a specific code only 
                 // then add break tool
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    switch (a){
case 1:
        printf("You entered 1\n"); // break tool is used to get out of the switch program
        break;
    case 2:
        printf("You entered 2\n");
        break;
    case 3:
        printf("You entered 3\n");
        break;
    case 4:
        printf("You entered 4\n");
        break;
    default:
        printf("Nothing matched");
    }
    return 0;
}
// Switch is a control statement that defines the flow/order in which code executes — i.e., which instructions run, and when.
