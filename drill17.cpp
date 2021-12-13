#include "../std_lib_facilities.h"

void pA10(ostream& os, int* a){
    for (int i = 0; i < 10; ++i)
        os << a[i] << " ";
    os << '\n';
}


void pA(ostream& os, int* a, int sz){
    for (int i = 0; i < sz; ++i)
        os << a[i] << " ";
    os << '\n';
}

void init (int* a, int val){
     for( int i = 0; i < 10; ++i)
        a[i] = val+i;
}

void init2(int* a, int val, int sz){
    for( int i = 0; i < sz; ++i)
        a[i] = val+i;
}

void initV( vector<int>& a, int val, int sz){

    for(int i = 0; i < sz; ++i)
        a.push_back(val+i);

}
void pV(ostream& os, vector<int>& a){
    for (const auto& elem : a)
    {
        os << elem << '\n';
    }
    os << '\n';
}

int main(){

    int* ptr = new int [10] ;

    for( int i = 0; i < 10; ++i)
        cout << ptr[i] << " ";
    cout << '\n';

    delete[] ptr;


    pA10(cout, ptr);


    int* a = new int [10];
    init(a,100);
    pA10(cout, a);



    int* b = new int [11];
    init2(b,100,11);
    pA(cout, b, 11);

    int* c = new int [20];
    init2(c, 100, 20);
    pA(cout, c, 20);


    delete[] a;
    delete[] b;
    delete[] c;
    vector<int> vec1;
    initV(vec1, 100, 10);
    pV(cout, vec1);
    vector<int> vec2;
    initV(vec2, 100, 11);
    pV(cout, vec2);
    vector<int> vec3;
    initV(vec3,100, 20);
    pV(cout, vec3);


    return 0;
}