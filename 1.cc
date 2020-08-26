#include<iostream>
using namespace std;
class A
{
private:
        int m_value;

public:
        A(int value)
        {
                m_value = value;
        }
        void Print1()
        {
                printf("hello world");
        }
        void Print2()
        {
                printf("%d", m_value);
        }
    virtual void Print3()
        {
                printf("hello world");
        }
};
int main(int argc, char* argv[])
{
A* pA;
pA->Print1();
pA->Print2();
pA->Print3();
return 0;
}
