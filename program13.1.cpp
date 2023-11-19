/*write a program that declares a class with one integer data memeber and two member functions int()
out() to input and output data in the data member*/
#include<iostream>
using namespace std;
class program1
{
    private:
    int x;
    public:
    void in()
    {
        cout<<"Enter a Number: ";
        cin>>x;
    }
    void out()
    {
        cout<<"You have Entere: ";
        cout<<x;
    }
};
// Main
int main()
{
    program1 obj;
    obj.in();
    obj.out();
    return 0;
}