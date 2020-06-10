#include <stdio.h>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


using namespace std;

main(){
    pid_t pid = getpid();
    pid_t masterPid = getppid();
    
    
    cout << "PPid ID: " << masterPid << endl;
    cout << "Pid ID: " << pid << endl;

    pid_t p = fork();

    if(p>0){
        // kod rodzica
        cout << "R PPID: " << getppid() << endl;
        cout << "R PID: " << getpid() << endl;

    } else {
        // kod dziecka
        cout << "D PPID: " << getppid() << endl;
        cout << "D PID: " << getpid() << endl;
    }
    if (pid == getpid()){
        int status =0;
        wait(0);
    }
    return 0;

}