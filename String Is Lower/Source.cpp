
#include <iostream>
using namespace std;


// function print a smoll leater
void All_smoll(char leater)
{
    if (leater >= 97 && leater <= 122)
    {
        cout << "the char is small : " << leater << "\n";
    }
    else
    {
        cout << "Not found char on small : " << leater << "\n";
    }

}



// function print a captil leater
void All_captil(char leater)
{
    if (leater >= 65 && leater <= 90)
    {
        cout << "the char is captil : " << leater << "\n";
    }
    else
    {
        cout << "Not found leater captil : " << leater << "\n";
    }

}





int main()
{

    All_smoll('a'); // the char is small : a

    All_captil('A'); // the char is captil : A



    All_captil('a');  // Not found leater captil : a

    All_smoll('A');  // Not found char on small : A



    return 0;

}