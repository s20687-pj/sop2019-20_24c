#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <list>
#include "functions.cpp"

using namespace std;

bool getFileStream(const string&, ifstream&);

main(int argc, char** argv){

    verifyInputData(argc, argv);
    string pathToInputFile = parseInputData(argv[1]);
    cout<<"Loading file: "<<pathToInputFile<<endl;
    ifstream fileStream;

    if(getFileStream(pathToInputFile, fileStream)){
        string buffer;
        getline(fileStream, buffer);
        int lines = atoi(buffer.c_str());
        list<string> numbers;
        while(lines--> 0){
            getline(fileStream, buffer);
            numbers.push_front(buffer);
        }
        cout<< "closing file" <<endl;
        fileStream.close();

        for(list<string>::const_iterator it = numbers.begin(); it !=numbers.end(); ++it){
            cout << *it <<endl;
        }

    }
    else{
        cout << "Cannot open file"<< endl;
    }
    
    return 0;
}

bool getFileStream(const string& address, ifstream& fileStream){
    fileStream.open(address.c_str(), ios::in);
    return fileStream.is_open();
}