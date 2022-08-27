//  (1) string repeat ---->  ﬂ—«— «·”·”·…

#include <iostream>
using namespace std;

/*
* 
*
function Accept 3 parameters
*
œ«·Â Â ﬂ—— ‰’ «‰« »œŒ·Â ·Â«
*
*
*/

void Hamada_string_repeat(string str, int repeat) // function
{
    for (int i = 0; i < repeat; i++)
    {
        cout << str << " ";
    }
}


int main() {

    Hamada_string_repeat("Hamada", 2); // calling function and Giving value

    return 0;
}