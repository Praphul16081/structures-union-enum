#include<stdio.h>

int main(){
    char ch;
printf("Enter a character\n");
scanf("%c", &ch);

    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);

/* %d is not only used for integer output but also to get ASCII value of a charc
   visit for the context https://www.ascii-code.com/   

AS we can see ASCII value from 97-122 is of lowercase charc
*/


if(ch >= 97 && ch<= 122){
    printf("This character is in lowercase\n");

}
else{
    printf("This is in Uppercase or maybe an special chracter\n");
}

    return 0;
}