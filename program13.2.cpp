/*write a class Marks with three data memenbers to store three marks. Write three member function in() to input marks, sum()to calculate the sum , avg() to calculate and return the average marks.*/
#include<iostream>
using namespace std;
//Class Section
class Marks
{
    private:
    int s1,s2,s3;
    public:
    void in()
    {
        cout<<"Enter Marks of subject 1: ";
        cin>>s1;
        cout<<"Enter Marks of subject 2: ";
        cin>>s2;
        cout<<"Enter Marks of subject 3: ";
        cin>>s3;
        
    }
    int sum()
    {
        return (s1+s2+s3);
    }
    float avg()
    {
        return (sum()/3.0);
    }
};
// Main Function
int main()
{
    Marks a;
    a.in();
    cout<<"Sum = "<<a.sum()<<endl;
    cout<<"Average = "<<a.avg();
    return 0;
}