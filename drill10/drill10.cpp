#include "std_lib_facilities.h"

struct Pont{
    Pont(double xkord, double ykord): x(xkord), y(ykord) {}
    double x, y;
};

vector<Pont>eredeti;
vector<Pont>feldolgozott;
ofstream ost{"adatok.txt"};
ifstream ist{"adatok.txt"};

ostream& operator <<(ostream& os, const vector<Pont>& p){
    for (int i = 0; i < p.size(); ++i)
    os << i+1 << ": (" << p[i].x << "," << p[i].y << ") \n";
    return os;  
}

ifstream& operator >> (ifstream& is, vector<Pont>& p){
    double x, y;
    for (int i = 0; i < eredeti.size(); ++i){
        is >> x >> y;
        p.push_back(Pont(x,y));
    }
    return is;    
}

int main(){
    double x, y;
    cout << "7 points";
    for (int i = 0; i < 7; ++i){
        cout << "X: "; cin >> x;
        cout << "Y: "; cin >> y;
        eredeti.push_back(Pont(x,y));
    }

    cout << eredeti;
    ost << eredeti;

    ist >> feldolgozott;
    cout << feldolgozott;

    if(eredeti.size() != feldolgozott.size()){
        cout << "Error!"<<endl;

    }

    for (int i = 0; i < eredeti.size(); ++i){
        if((eredeti[i].x != feldolgozott[i].x) || (eredeti[i].y != feldolgozott[i].y));
    }
    
    return 0;
}