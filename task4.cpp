#include <iostream>
using namespace std;
main()
{
    int size;
    bool istrue =false;
    cout << "enter size of your array : ";
    cin >> size;
    int array[size];
    for (int index = 0; index < size; index++)
    {
        cout << "enter number : ";
        cin >> array[index];
    }
    for (int index = 0; index < size; index++)
    {
        if (array[index] % 10 == 7)
        {
            istrue = true;
            break;
        }
    }
    if (istrue == true)
    {
        cout << "BOOM!!";
    }
     else if(istrue==false)
        {
            
            cout << "OH No there is no 7";
        }
}