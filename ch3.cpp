#include "std_lib_facilities.h"
int main(){

    string f_name = ""; 
    cout << "Please enter your first name (followed by 'enter'):\n";
    cin >> f_name;
    cout << "Dear " << f_name << "," << endl;
    cout << "How are you? \n I am fine. \n I miss you" << endl;

    string friend_name = "";
    cout << "Please enter one of your frinds name (followed by 'enter'):\n";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?" << endl;

    char friend_sex = 0;
    cout << "Please enter an m if your friend is male and an f if the friend is female" << endl;
    cin >> friend_sex;
    if(friend_sex == 'm'){
        cout << "If you see " << friend_name << " please ask him to call me." << endl; 
    }

    if(friend_sex == 'f'){
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    }
    
    int age = 0;
    cout << "Please enter your age of the recipient." << endl;
    cin >> age;
    if(age <= 0 || age >= 110){
        simple_error("you're kidding!");
    }else if(age < 12){
        cout << "Next year you will be " << age+1 << endl;
    }else if(age == 17){
        cout << "Next year you will be able to vote." << endl;
    }else if(age > 70){
        cout << "I hope you are enjoying retirement." << endl;
    }else{
        cout << "I hear you just had a birthday and you are " << age << " years old." <<endl;
    }

    cout << "Yours sincerely," << endl;
    cout << "\n";
    cout << "Szebi";

    return 0;
    
    
}
