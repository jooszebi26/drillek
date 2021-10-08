 #include "std_lib_facilities.h"
 
int main(){
    cout << "Please enter a number." << endl;
    double c = 0;
    double small = 0;
    double large = 0;
    while (cin >> c){
        cout << "The number: " << c << endl;
        if(c > large){
            large = c;
            small = large;
            cout<< "The largest so far: " << large << endl;
        }

        if(c < small){
            small = c;
            cout<< "The smallest so far: " << small << endl;
        }
        
    }
    return 0;
}
