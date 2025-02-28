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
        cin>>students[i].name;
        cin>>students[i].gpa;
    }

    for(int i=0; i<N; i++){
        cout << students[i].name << " " << students[i].gpa << endl;
    }
}