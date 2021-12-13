#include "std_lib_facilities.h"

void s(int s, int a){
    int* p = new int[s];
    if(a==0){
        throw std::exception();
    }
    delete[] p;
}

int main(){
    try{
        s(5,0);
        return 0;
    }catch(std::exception& e){
        std::cerr << "Error" << endl;
        return 0;
    }
}