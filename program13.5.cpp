/*Write a Class Result that contains roll no, name and marks of three subjects. The marks are stored in an array of integers. The class also conatains the follwoing member functions.

The input() Function is used to input the value in data members
The show() Function is used to displays the value of data memebers
The total() Function returns the total marks of a student
The avg() Functon returns the average marks of a student

The program should create an object of the class and call the members function.
*/
#include<iostream>
using namespace std;
//Class Section
class Result
{
    private:
    int rollno, marks[3],i,sum=0;
    string name;
    public:
    void input()
    {
        cout<<"Enter Roll Number: ";
        cin>>rollno;
        cin.ignore();
        cout<<"Enter Name: ";
        getline(cin,name);
        for(i=0; i<3; i++)
        {
            cout<<"Enter Marks of "<<i+1<<" Subject: ";
            cin>>marks[i];
        }
    }
    void show()
    {
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        for(i=0; i<3; i++)
        {
            cout<<"Marks of "<<i+1<<" Subject: ";
            cout<<marks[i]<<endl;
        }
        cout<<"Total Marks = "<<sum<<endl;
        cout<<"Average = "<<avg();
    }
    int total()
    {
        
        for(i=0; i<3; i++)
         sum=sum+marks[i];
        return sum;
    }
    float avg()
    {
        return sum/3.0;
    }

};
//Main Section
int main()
{
    Result s;
    s.input();
    s.total();
    s.avg();
    s.show();
    return 0;
}