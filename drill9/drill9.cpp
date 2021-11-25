#include "std_lib_facilities.h"

struct Date
{
    int y;
    int m;
    int d;
};

void init_day(Date& dd, int y, int m, int d){
    if(d < 1 || d > 31) error("Invalid day");
    if(m < 1 || m > 12) error("Invalid mont");

    dd.y = y;
    dd.m = m;
    dd.d = d;
}

void add_day(Date& dd, int n){
    dd.d += n;

    if(dd.d > 31) {
        ++dd.m; 
        dd.d -=31;
    }
    if(dd.d < 1){
        --dd.m; 
        dd.d += 31;
    }
    if(dd.m > 12){
        ++dd.y; 
        dd.m -= 12;
    }
    if(dd.m < 1){
        --dd.y; 
        dd.m += 12;
    }
}

ostream& operator<<(ostream& os, const Date& d){
    return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
}

int main(){
    try{
        Date today;
        init_day(today, 1946, 5, 24);
        Date tomorrow{today};
        add_day(tomorrow, 2);
        cout << today << endl;
        cout << tomorrow << endl;
        return 0;
    }catch(exception& e){
        cerr << e.what() << endl;
        return 1;
    }catch(...){
        cerr << "Unknown exeption!" << endl;
        return 2;
    }
}