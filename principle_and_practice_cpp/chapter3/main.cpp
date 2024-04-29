#include "../../std_lib_facilities.h"

void drill() {
    cout << "Enter the name of the person you want to write to" << endl;
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << "," << endl;
    cout << "How are you? I am fine. I miss you." << endl;
    cout << "Enter the name of another friend" << endl;
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?" << endl;
    cout << "Enter an m if the friend is male and f if the friend is female" << endl;
    char friend_sex = 0;
    cin >> friend_sex;
    if (friend_sex == 'm') {
        cout << "If you see " << friend_name << " please ask him to call me." << endl;
    } else {
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    }
    cout << "Enter the age of the recipient" << endl;
    int age = 0;
    cin >> age;
    if (age <= 0 || age >= 110) {
        simple_error("you're kidding!");
    } else if (age <= 12) {
        cout << "Next year you will be " << age + 1 << endl;
    } else if (age == 17) {
        cout << "Next year you will be able to vote." << endl;
    } else if (age >= 70) {
        cout << "I hope you are enjoying retirement." << endl;
    }
    cout << "Yours sincerely," << endl;
    cout << "Minh Dang" << endl;
}

void e4() {
    cout << "Enter three integer values" << endl;
    int val1 = 0, val2 = 0, val3 = 0;
    cin >> val1 >> val2 >> val3;
    cout << val3 << " " << val2 << " " << val1 << endl;
}

int main() {
//    drill();
//    e4();
}
