#include <stdio.h>

float PI = 3.14 // example of a global variable but we should avoid this 

#define PI 3.14 // if this header line will find word like this further will compile ie rewrite PI literal to 3.14

int main() { //starting point of execution ...OS will run this kind of code

    // int a = 10;
    // char str[12] = "Hello World"

    print ("Hello world"); // is known as comments
    calc1-1(); calc-2()

    return 0; // any non zero value = malfunction

} 

float clac_area_of_circle(float radius) {
    
    float area = PI * radius * radius;

    //

    return 0;



}
/*

A bus is group of electrical pathways that carries signals between the CPU ,RAM,and input/out devices

1 Adress bus: the adress bus identifies the memory location or 1/0 device that CPU wants to access.
2 Data bus: the data bus carries the actual data between the CPU and memory or 1/0 device
3 control bus: the control bus carries signals that coordinate and manage operation 

the three together are commonly called system bus

*/
// moba extrum
// wsl

// gcc -E source.c -o source.1(file name)
// 2. Core compilation task: gcc -S source.1 -o source.s
//3. Assembly : gcc -c source.s -o source.0
//Converting/ Trranslating the code as per the architecture of the machine
// 4. Linking: gcc source.o -o executable 
// Linking to certain libraries for non native tasks

// the extension.h usually denotes header file in case of c
// #define- if defined    #ifndef - not defined

// gcc -Wall -Wextra -Wpendantic 1.c math_operations.c -o math program

// the calling function (main) must be aware of the called fun(calc_si) before calling it

