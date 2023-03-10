#include<stdio.h>
#include<stdlib.h>

void func(int n){
    if(n>0){
        func(n/2);
        printf("%d\n",n);
        func(n/2);
    }
}

int main(int argc, char **argv){
    if(argc!=2){
        printf("Wrong number of input\n");
        return EXIT_FAILURE;
    }
    int n = (int)strtol(argv[1],NULL,10);
    func(n);
    return EXIT_SUCCESS;
}
