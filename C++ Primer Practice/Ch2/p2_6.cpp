// struct Foo { /* 此处为空*/}; //注意：没有分号
// int main()
// {
//     return 0;
// }
#include<iostream>
using namespace std;

struct Sales_data {
    string ISBN;
    unsigned num_of_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data book_store;
    cout << book_store.ISBN << " " << book_store.num_of_sold << " " << book_store.revenue << endl;
    return 0;
}

