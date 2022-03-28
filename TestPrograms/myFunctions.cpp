#include "myFunctions.h"

int my_max(int a, int b){

    if(a < b){
        a = b;
    }
    return a;
}

double my_max(double a, double b){

    if(a < b){
        a = b;
    }
    return a;
}





int my_min(int a, int b){
    if(a > b){
        a = b;
    }
    return a;
}

double my_min(double a, double b){
    if(a > b){
        a = b;
    }
    return a;
}


void printToTheScreen(){
   cout << "Hello World!" << endl;
   return;
}
