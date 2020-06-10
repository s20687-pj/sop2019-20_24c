#include <stdio.h>
#include <string.h>



main(int argc, char** argv){

    if(argc != 2) {
        printf("Bledne argumenty\n");
        return 0;
    }
    int num=0;
    char *address;
    address = argv[1];
    printf("Loading file:  %s \n", address);
    FILE *data;
    data = fopen(address, "r");

    scanf(data,"%d\r\n",&num);
    printf(" Value of n=%d", num);

    fclose(data);

    
    return 0;
}