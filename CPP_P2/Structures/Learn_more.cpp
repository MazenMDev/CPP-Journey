#include <iostream>
using namespace std;

struct Student
{
    string name;
    float gpa;
};


int main(){
    int N;
    cin>>N;
    Student*students = new Student[N];
    for(int i=0; i<N; i++){
        cout << "Enter name of student " << i+1 << ":" ;
        cin>>students[i].name;
        cout << "Enter GPA of student " << i+1 << ":" ;
        cin>>students[i].gpa;
    }

    for(int i=0; i<N; i++){
        cout << "Student " << i+1 << ": ";
        cout << students[i].name << " |GPA: " << students[i].gpa << endl;
    }

    delete[]students;
}