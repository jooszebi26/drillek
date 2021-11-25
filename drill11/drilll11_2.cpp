#include "std_lib_facilities.h"

struct information{
    information(double tel, string k, string v, string e)
        : telNum(tel), kn(k), vn(v), email(e)
        {}
        double telNum;
        string kn, vn, email;
};

void p(const vector<information>& v){
    cout << "Kereszt " << "\t" << "Vezetek " << "\t" << "Email " << "\t" << "Telefon " << "\t" << endl;
    cout << endl;

    for(information i : v){
        cout << i.kn << "\t" << "\t" << i.vn << "\t" << i.email << "\t" << fixed << setprecision(0) << i.telNum << "\t" << endl;
    }
    cout << endl;
}

int main(){
    vector<information> v_info = {
        { 0130303030303030303, "Szebi", "Joo","gaga@gmail.com" }
        };

        p(v_info);
    return 0;
}