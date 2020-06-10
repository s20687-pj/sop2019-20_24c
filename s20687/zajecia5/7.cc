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
        if(child == 0) {
            break;
        }
    }

    if(getppid() == masterPid){
        cout << "Kolejne dziecko zaczyna czekac" <<endl;
        sleep(3);
        cout << "Dziecko sie konczy" <<endl;
    }
    if(getpid() == masterPid){
        cout << "Master zaczyna czekac" << endl;
        wait(NULL);
        cout << "Master sie konczy" <<endl;
    }
    
    return 0;

}