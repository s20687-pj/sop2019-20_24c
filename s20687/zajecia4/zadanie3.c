#include<stdio.h>

main(int argc, char *argv[]){
    char *height;
    height = argv[1];
    int lines = atoi(height);

    for(int i =0; i<= lines;i++){
        for(int j=0; j < lines -i; j++){
            printf(" ");
        }
        for(int k=0;k < (i*2) -1;k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}