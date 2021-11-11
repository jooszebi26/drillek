#include "std_lib_facilities.h"

int main(){
    cout << "Please enter a value with unit (cm, m,in, ft)." << endl;
    double c = 0;
    double small = 0;
    double large = 0;
    string unit = "";
    double sum = 0;
    vector<double> result;

    while (cin >> c >> unit){
        if (c != '|' || unit != "|"){
            if (unit == "" || unit != "cm" && unit != "m" && unit != "in" && unit != "ft"){
                cout << "Not valid unit" << endl;
                cout << "Please enter a value with unit (cm, m,in, ft)." << endl;
                cin >> c >> unit;
            }else{
                if (unit == "cm"){
                 c /= 100;
                }

                if (unit == "in"){
                    c = (c * 2.54) / 100;
                }

                if (unit == "ft"){
                    c = ((c * 12) * 2.54) / 100;
                }

                if (c > large){
                    large = c;
                    small = large;
                    cout << "The largest so far: " << large << " m" << endl;
                }

                if (c < small){
                    small = c;
                    cout << "The smallest so far: " << small << " m" << endl;
                }

            sum += c;
            result.push_back(c);
            }
            cout << "Please enter a value with unit (cm, m,in, ft)." << endl;
        }else{
            exit(0);
        }
    }
    
    cout << "Sum of the values: " << sum << " m" << endl;
    sort(result);
    cout << "Sorted vector: " << endl;
    for (int i = 0; i < result.size(); ++i){
        cout << i + 1 << ". element:  " << result[i] << " m" << endl;
    }

    return 0;
}
