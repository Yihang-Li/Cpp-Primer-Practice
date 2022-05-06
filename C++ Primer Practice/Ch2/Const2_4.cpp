#include<iostream>
using namespace std;

int main()
{
    int i = 42;
    int &r1 = i;
    const int &r2 = i;
    cout << "i, r1, r2 are: " << i << ' ' << r1 << ' ' << r2 << " respectively"<<endl;
    r1 = 0;
    cout << "After change r1 to 0, their values become: " << i << ' ' << r1 << ' ' << r2 << endl;

    return 0;
}
