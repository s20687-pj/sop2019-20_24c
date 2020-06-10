#include <stdio.h>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


using namespace std;

main(int argc, char* argv[]){
    
    pid_t masterPid = getpid();


    for(int i=0; i<10; i++){
        pid_t child =fork();
        if(i==9 && child==0){
            sleep(20);
        }
        if(child > 0){
            wait(NULL);
            break;
        }
    }
    
    return 0;

}