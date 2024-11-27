#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

int FibFunc(int n, int pr2, int pr1) {
    if (n == 0) {
        return pr2;
    }
    if (n == 1) {
        return pr1;
    }
    return FibFunc(n - 1, pr1, pr2 + pr1);
}

void Fibbonachi(int num)
{
    if (num == 0) cout << "Fibbonachi of 0 is 0" << endl;
    else if (num == 1) cout << "Fibbonachi of 1 is 1" << endl;
    else
    {
        cout << "Fibbonachi of " << num << " is " << FibFunc(num, 0, 1) << endl;
    }
}

void Integral(int num)
{
    int integral = 1;
    for (int i = 1; i <= num; i++)
    {
        integral *= i;
    }
    cout << num << "! = " << integral << endl;
}

int main(int argc, char* argv[])
{
    thread t1(Integral, 10);
    thread t2(Fibbonachi, 4);
    t2.detach();
    t1.detach();
    system("pause");
    return 0;
}