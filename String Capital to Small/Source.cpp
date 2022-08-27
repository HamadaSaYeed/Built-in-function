#include <iostream>

using namespace std;

int main()
{


    string word;

    cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        if ('A' <= word[i] && word[i] <= 'Z')
        {
            word[i] += 32;

        }
        cout << word[i];
    }

    return 0;
}