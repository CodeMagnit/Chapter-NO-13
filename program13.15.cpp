/*Write a program that counts the number of objects created of a particular class*/
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
         cout<<n<<" objects created"<<endl;
    }
};
int count::n=0;
int main()
{
    count a,b;

    return 0;
}