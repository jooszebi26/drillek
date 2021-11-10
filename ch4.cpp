#include "std_lib_facilities.h"

int main(){
    cout << "Please enter 2 numbers." << endl;
    double a = 0;
    double b = 0;

    while (cin >> a >> b){
        if (a != '|' || b != '|'){
            if (a < b){
                cout << "The smaller value is: " << a << endl;
                cout << "The larger value is: " << b << endl;
                if (b - a < 0.01){
                    cout << "The numbers are almost equal." << endl;
                }
            }else if (a > b){
                cout << "The smaller value is: " << b << endl;
                cout << "The larger value is: " << a << endl;
                if (a - b < 0.01){
                    cout << "The numbers are almost equal." << endl;
                }
            }else{
                cout << "The numbers are equal." << endl;
            }
            cout << "Please enter 2 numbers." << endl;
        }else{
            exit(0);
        }
    }
    return 0;
}
