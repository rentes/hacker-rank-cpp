//
// Created by Miguel Rentes on 16/01/2017.
//

#include "introduction.h"

class Person {
public:
    char name[100];
    unsigned int age;
    virtual void putdata(void);
    virtual void getdata(void);
};

void Person::putdata() {}
void Person::getdata() {}

class Professor : public Person {
    int publications;
    int cur_id;
    static int cur_id_start;
public:
    void getdata(void);
    void putdata(void);
    Professor();
};

Professor::Professor() {
    cur_id = cur_id_start++;
}

/**
 * The function getdata should get the input from the user: the name, age and publications of the professor.
 */
void Professor::getdata() {
    cin >> this->name >> this->age >> this->publications;
}

/**
 * The function putdata should print the name, age, publications and the cur_id of the professor
 */
void Professor::putdata() {
    cout << this->name << " " << this->age << " " << this->publications << " " << this->cur_id << endl;
}

class Student : public Person {
    int marks[6];
    int cur_id;
    static int cur_id_start;
public:
    void getdata(void);
    void putdata(void);
    Student();
};

Student::Student() {
    cur_id = cur_id_start++;
}

/**
 * The function getdata should get the input from the user: the name, age, and the marks of the student in  subjects
 */
void Student::getdata() {
    cin >> this->name >> this->age;
    for (int i = 0; i < 6; i++) {
        cin >> this->marks[i];
    }
}

/**
 * The function putdata should print the name, age, sum of the marks and the cur_id of the student
 */
void Student::putdata() {
    int sum = 0;
    for (int i = 0; i < 6; i++)
        sum += this->marks[i];
    cout << this->name << " " << this->age << " " << sum << " " << this->cur_id << endl;
}

int Professor::cur_id_start = 1;
int Student::cur_id_start = 1;

int main(void) {
    int n, val;
    cin >> n; // The number of objects that is going to be created.
    Person* per[n];

    for(int i = 0; i < n; i++){

        cin >> val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for(int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}