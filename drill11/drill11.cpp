#include "std_lib_facilities.h"

int main(){
    int birth_year=2002;
    cout << "Dec\t" << showbase << dec << birth_year << endl;
    cout << "Hexa\t" << showbase << hex << birth_year << endl;
    cout << "Octal\t" << showbase << oct << birth_year << endl;
    cout << "Age:" << dec << 18 << endl;

    for (int i = 0; i < 3; i++){
        cout << "Standard: " << 1234567.89 << endl;
        cout << "DefaultFloat: " << defaultfloat << 1234567.89 << endl;
        cout << "Fixed: " << fixed << 1234567.89 << endl;
        cout << "Scientific: " << scientific << 1234567.89 << endl;
        cout << endl;
    }

    int a, b, c, d;
    cin >> a >> oct >> b >> hex >> c >> d;
    cout << a << " " << b << " " << c << " " << d << endl;

    return 0;
    
}