/* #include<stdio.h>

int main(){
    for(int i = 0;i<15;i++){
        if(i==5){
            break; // exit the loop now!
        }
        printf("i is %d\n", i);
    }
    printf("Forloop is done!\n");


    
    return 0;
}  */



#include<stdio.h>

int main(){
    for(int i = 0;i<15;i++){
        if(i==5){
            continue; // skip this iteration now
        }
        printf("i is %d\n", i);
    }
    printf("Forloop is done!\n");


    
    return 0;
}