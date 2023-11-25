/*Write a program that counts the number of objects created of a particular class. The program must be able to display the result even if no object is created so far.*/
#include<iostream>
using namespace std;
class count
{
    private:
    static int n;
    public:
    count()
    {
        n++;
    }
    static void show()
    {
        cout<<n<<" Object created"<<endl;
    }
};
int count::n=0;
int main()
{
    count::show();
    count a,b;
    count::show();
    return 0;
}