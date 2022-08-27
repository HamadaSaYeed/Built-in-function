#include <iostream>
using namespace std;

/*

       function print space from string to int

*/


void print_space(string word, int length, int full_space)
{
    int space = length - word.size(); // 10 - 3 = 7

    cout << "spaces : " << space << endl;

}


int main()
{
    print_space("123", 10, 0);
    print_space("1234", 10, 0);
    print_space("12345", 10, 0);
    print_space("123456", 10, 0);
    print_space("1234567", 10, 0);
    print_space("12345678", 10, 0);
    print_space("123456789", 10, 0);
    print_space("1234567890", 10, 0);


    return 0;

}