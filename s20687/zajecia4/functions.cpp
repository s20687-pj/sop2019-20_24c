#include "functions.hpp"

using namespace std;

string ParseInputData(char* path){
    return string(path);
}

void verifyInputData(int argc, char** argv){
    if (argc != 2){
        throw InputDataException();
    }
}