#include "std_lib_facilities.h"

int elems [10] = {1,2,4,8,32};

int f(int f){
    int s = 1;
    while (f > 0){
        s *= f;
        f--;
    }

    return s;
    
}

void pA(int a[], int s){
    for (int i = 0; i < 10; i++)
    {
        cout << a[i]<< " ";
    }

    cout << endl;
    
}

void f2 (int a[], int s){
    int b[10];
    for (int i = 0; i < 10; i++)
    {
        b[i] = elems[i];
    }

    int* p = new int[s];
    for (int i = 0; i < s; i++)
    {
        p[i] = a[i];
    }
    

    pA(p, s);
    
    delete[] p;
}


int main(){
    
    pA(elems,10);

    f2(elems, 10);

    int d[10];
    for (int i = 0; i < 10; i++)
    {
        d[i] = f(1+i);
    }

    f2(d,10);
    
    return 0;
}