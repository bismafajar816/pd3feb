#include <iostream>
using namespace std;
main()
{
    string name[4];
    for(int index = 0 ; index < 4 ; index++)
    {
        cout << "enter word: ";
        cin >> name[index];
        if(name[0] == name[1] || name[0] == name[2]|| name[0] == name[3])
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }

}