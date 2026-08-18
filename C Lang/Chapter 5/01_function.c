#include<stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y){        // read it as it was taught!
    // printf("The sum is %d\n", x + y);
    return x+y;
}
// ways to make life easier ie can perform task in just few lines

int main(){
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sum is %d\n", c);
     int c = sum(a,b);  // Function call
     printf("%d\n", c); // Similarly we can do with any other operations if we want indivisual output

    int a1 = 12;
    int b1 = 23;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    sum(a1,b1); // Function call
    

    int a2 = 2;
    int b2 = 27;
    
    // int c2 = a2 + b2;
    // printf("The sum is %d\n", c2);
    sum(a2,b2); // Function call


    return 0;
}