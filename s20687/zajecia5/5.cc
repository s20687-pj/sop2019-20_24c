#include <stdio.h>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


using namespace std;

main(int argc, char* argv[]){
    if (argc != 2){
        return 1;
    }
    pid_t p = fork();
    int argument = atoi(argv[1]);

    if(p>0){
        // kod rodzica
        cout << "Proces rodzica" << endl;
        int suma =0;
        for(int i =0;i <argument; i++){
            suma += i;
        }
        cout << "Suma: " << suma << endl;
        wait(0);
        

    } else {
        // kod dziecka
        cout << "Proces dziecka" << endl;
        for(int i =1;i <argument; i+=2){
            cout << "Dziecko podaje " << i <<endl;
        }

        
    }
    
    return 0;

}