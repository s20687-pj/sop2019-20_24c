#include <stdio.h>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


using namespace std;

main(){
    pid_t pid = getpid();
    pid_t masterPid = getppid();
    int a;
    cout << "Pid ID: " << pid << endl;
    cout << "Parent PID: "<<masterPid << endl;

    cout << "Wprowadz dowolna liczne" << endl;
    cin >> a; 

    return 0;

}