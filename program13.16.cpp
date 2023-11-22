/* Write a program that creates three objects of class Student. Each object of class must be assigned a unique roll number.(Hint: Use static data members for unique roll number)*/
#include<iostream>
using namespace std;
class Student
{
    private:
    static int rno;
    int rollno;
    string name;
    int marks;
    public:
    Student()
    {
        rno++;
        rollno=rno;
    }
    void input()
    {
        
        cout<<"Enter Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Marks: ";
        cin>>marks;
    }
    void show()
    {
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int Student::rno=0;
int main()
{
    Student s1,s2,s3;
    s1.input();
    s2.input();
    s3.input();
    cout<<"Data of 1st Student"<<endl;
    s1.show();
    cout<<"Data of 2nd Student"<<endl;
    s2.show();
    cout<<"Data of 3rd Student"<<endl;
    s3.show();
    return 0;
}