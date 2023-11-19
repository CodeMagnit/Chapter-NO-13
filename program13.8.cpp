/*Write a class that contains two integer data members which are initialize to 100 when an object is created. It has a member function avg that displays the average of data memebers*/
#include<iostream>
using namespace std;
class Average
{
    private:
    int a,b;
    public:
    Average()
    {
        a=100;
        b=100;
    }
    void avg()
    {
        cout<<"Average is = "<<((a+b)/2.0);
    }
};
int main()
{
    Average a;
    a.avg();
    return 0;
}