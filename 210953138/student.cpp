#include<iostream>
using namespace std;
class Student{
    public: 
    string name;
    int roll_no;
    char grade;

void read();
void display();
};

void Student::read(){
    cout << "name: ";
    cin >> name;
    cout << "roll number: ";
    cin >> grade;
}
void Student::display(){
cout << "information: ";
cout << "name" << name << "roll number" << roll_no << "grade" << grade ;
}

int main() {
    Student std[1000];
    int n, m;
    cout << "Total students: ";
    cin >> n;
    for(m=0;m<n; m++) {
        cout << "enter" << m+1;
        std[m].read();
        for(m=0;m<n;m++) {
            cout << "information: " << (m+1);
            std[m].display();
            return 0;

        }
    }
}