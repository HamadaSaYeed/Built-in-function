
#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        for (int z = i; z >= 0; z--)
        {
            cout << " "; // ÇáÊÛíÑÑ Ýí ÇáãÓÇÝå íÊÛíÑ ÇáÔßá


            /*


            7
                    * * * * * * *
                     * * * * * *
                      * * * * *
                       * * * *
                        * * *
                         * *
                          *

            */


        }

        for (int g = size; g >= i; g--)
        {
            cout << " *";

        }

        cout << endl;

    }

    return 0;
}
