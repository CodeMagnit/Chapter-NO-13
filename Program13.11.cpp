/* Write a class Over with num and ch data members. A constructor with no parameter initialize num to 0 and ch to 'x'. A constructor with two paramerters initializes data members with the given value and member function show() displays the values of data members.*/
#include<iostream>
using namespace std;
class Over
{
    private:
    int num;
    char ch;
    public:
    Over()
    {
        num=0;
        ch='x';
    }
    Over(int n, char c)
    {
        num=n;
        ch=c;
    }
    void show()
    {
        cout<<num<<endl;
        cout<<ch<<endl;
    }
};
int main()
{
    Over obj1, obj2(100,'Z');
    obj1.show();
    obj2.show();
    return 0;   
}