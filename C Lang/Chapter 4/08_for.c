/*
for (initialize; test; increment or decrement)
{
// block code;
}            // After second step forloop runs block code then after loop counter is considered




*/



#include<stdio.h>

int main(){
    int n = 6;

    for(int i = 0;i<n;i++){
        printf("The value of i is %d\n", i);
    }

    return 0;
}