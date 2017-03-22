//
// Created by Miguel Rentes on 22/03/2017.
//

#include "classes.h"

class Student {
private :
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    void set_age(int a) {
        age = a;
    }
    void set_first_name(string firstname) {
        first_name = firstname;
    }
    void set_last_name(string lastname) {
        last_name = lastname;
    }
    void set_standard(int s) {
        standard = s;
    }
    int get_age(void) {
        return age;
    }
    string get_first_name(void) {
        return first_name;
    }
    string get_last_name(void) {
        return last_name;
    }
    int get_standard(void) {
        return standard;
    }
    string to_string(void) {
        return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
