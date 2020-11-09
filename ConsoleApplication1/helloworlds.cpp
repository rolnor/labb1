#include <iostream>
using namespace std;


int t_main()
{
    int n;
    cin >> n;

    /*
    for (n; n--; n > 0)
    {
        cout << "Hello World!" << endl;
    }*/
   
    /*
    while (n > 0)
    {
        cout << "Hello World!" << endl;
        n--;
    }*/

    do
    {
        cout << "Hello World!" << endl;
        n--;
    } while (n > 0);

    return 0;
}

