#include<stdio.h>
#include<stdlib.h>

int func(int n){
    if(n>1){
        return func(n-1) + func(n-2);
    }
    else{
        return n;
    }
}

int main(int argc, char **argv){
    int n = (int)strtol(argv[1],NULL, 10);
    if(n<0){
        return EXIT_FAILURE;
    }
    printf("func(%d) = %d\n",n, func(n));
    return EXIT_SUCCESS;
}
