#include "std_lib_facilities.h"

int main(){
    //1. Cout << "Success!\n";
    cout << "1.\n";
    cout << "Success!\n";

    //2. cout << "Success!\n;
    cout << "2.\n";           
    cout << "Success!\n";

    //3. cout << "Success" << !\n"
    cout << "3.\n";           
    cout << "Success"<<"!\n";

    //4. cout << success << '\n';
    cout << "4.\n";
    cout << "Success!" << "\n";

    //5. string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    cout << "5.\n";
    int res = 7;
    vector<int> v(10);
    v[5] = res;
    cout << "Success!\n";

    //6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
    cout << "6.\n";
    vector<int> v2(10);
    v2[5] = 7;
    if (v2[5]==7){
        cout << "Success!\n";
    }

    // 7. if (cond) cout << "Success!\n"; else cout << "Fail!\n";
    cout << "7.\n";
    if(true){
        cout << "Success!\n";
    }else{
        cout << "Fail!\n";
    }

    //8.bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
    cout << "8.\n";
    bool c = false;
    if(!c){
        cout << "Success!\n";
    }else{
        cout << "Fail!\n";
    }

    // 9. string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
    cout << "9.\n";
    string s9 = "ape";
    bool c9 = "fool" > s9;
    if (c9) cout << "Success!\n";

    // 10. string s = "ape"; if (s=="fool") cout << "Success!\n";
    cout << "10.\n";
    string s10 = "ape";
    if (s10!="fool") cout << "Success!\n";

    // 11. string s = "ape"; if (s=="fool") cout < "Success!\n";
    cout << "11.\n";
    string s11 = "ape";
    if (s11!="fool") cout << "Success!\n";

    // 12. string s = "ape"; if (s+"fool") cout < "Success!\n";
    cout << "12.\n";
    string s12 = "ape";
    if (s12!="fool") cout << "Success!\n";

    // 13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
    cout << "13.\n";
    vector<char> v13(5); 
    for (int i=0; i<v13.size(); ++i); cout << "Success!\n";

    // 14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
    cout << "14.\n";
    vector<char> v14(5);
    for (int i=0; i< v14.size(); ++i); cout << "Success!\n"; 

    // 15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
    cout << "15.\n";
    string s15 = "Success!\n";
    for (int i=0; i<s15.length(); ++i){
         cout << s15.at(i);
    }

    // 16. if (true) then cout << "Success!\n"; else cout << "Fail!\n";
    cout << "16.\n";
    if (true) {
         cout << "Success!\n";
    }else {
        cout << "Fail!\n";
    }

    // 17. int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
    cout << "17.\n";
    int x17 = 2000;
    char c17 = 'x';
    if (x17==2000) cout << "Success!\n";

    // 18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
    cout << "18.\n";
    string s18 = "Success!\n";
    for (int i=0; i<s18.length(); ++i){
        cout << s18.at(i);
    } 

    //19.vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
    cout << "19.\n";
    vector <int> v19(5);
    for (int i=0; i<=v19.size(); ++i); cout << "Success!\n";

    // 20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
    cout << "20.\n";
    int i20=0;
    int j20 = 9;
    while (j20<10){
        ++j20;
    } 
    if (j20>i20){
       cout << "Success!\n"; 
    }

    // 21. int x = 2; double d = 5/(x???2); if (d==2*x+0.5) cout << "Success!\n";
    cout << "21.\n";
    double x21 = 2;
    double oszt??21 = x21 - 1;
    double d21 = 5/oszt??21;
    if (d21==2*(x21+0.5)){
        cout << "Success!\n";
    }
    // 22. string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
    cout << "22.\n";
    string s22 = "Success!\n";
    for (int i=0; i<=s22.length(); ++i){
        cout << s22[i];
    }
    // 23. int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
    cout << "23.\n";
    int i23=0;
    int j23 = 11;
    while (i23<10){
        ++i23;
    } 
    if (j23>i23){
        cout << "Success!\n";
    }

    //24. int x = 4; double d = 5/(x???2); if (d=2*x+0.5) cout << "Success!\n";
    cout << "24.\n";
    double x24 = 4;
    double oszt??24 = x24-2;
    double d24 = 5/oszt??24; 
    if (d24!=2*x24+0.5){
        cout << "Success!\n";
    } 
    //25. cin << "Success!\n";
    cout << "25.\n";
    cout << "Success!\n";
    return 0;
}    
