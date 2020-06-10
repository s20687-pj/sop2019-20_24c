#include <iostream>
#include <list>
#include <stdio.h>

using namespace std;

typedef int (*function) (int,int);

int max(int,int);
int min(int,int);
int sum(int,int);

int readFunctionIndex();
int readStreamElementCount();
list<int> readElements(int elementCount);
void processElements(list<int> &elements, function *function, int functionId);

int main(int argc, char** argv){
    function functions[] {max,min,sum};
    int functionID = readFunctionIndex();
    int elementsCount = readStreamElementCount();
    list<int> elements = readElements(elementsCount);

    processElements(elements, functions, functionID);
    return 0;

}

int max(int a, int b){
    return (a<b ? b : a);
}
int min(int a, int b){
    return (a>b ? b : a);
}
int sum(int a, int b){
    return a+b;
}
int readFunctionIndex(){
    int index =0;
    cin >> index;
    return index;
}
int readStreamElementCount(){
    int count =0;
    cin >> count;
    return count;
}

list<int> readElements(int elementCount){
    list<int>l;
    for(int i=0; i<elementCount; i++){
        int element = 0;
        cin >> element;
        l.push_back(element);
    }
    return l;
}

void processElements(list<int> &elements, function* functions, int functionId){
    list<int>::iterator it = elements.begin();
    int v = *it;
    it++;
    for(;it != elements.end(); it++){
        v = functions[functionId](v, *it);
    }
    cout << v << endl;
}

