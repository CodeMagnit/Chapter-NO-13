/* Write a class Student that has marks and grade as data members. A constructor with two parameters initialize data memebers with the given values and member function show() displays the value of data memebers. Create two objects and display the values */
#include<iostream>
using namespace std;
class Student
{
    private:
    int marks;
    char grade;
    public:
    Student(int m, char g)
    {
        marks=m;
        grade=g;
    }
    void show()
    {
        cout<<"Makrs = "<<marks<<endl;
        cout<<"Grade ="<<grade<<endl;
    }
};
int main()
{
    
    Student s1(1050,'A'),s2(980,'B');
    cout<<"Data of First Student"<<endl;
    s1.show();
    cout<<"Data of Second Student"<<endl;
    s2.show();
}