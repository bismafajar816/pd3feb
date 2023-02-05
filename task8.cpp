#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter no of colors: ";
    cin >> size;
    string array[20];
    int time = 0;
    int count = 0;
    for (int index = 0; index < size; index++)
    {
        cout << "enter a color: ";
        cin >> array[index];

       
        if (size == 1)
        {
            time = 2;
        }
        if (array[index] != array[index + 1])
        {

            time = (size * 2) + count;
            count++;
        }
        else 
        {
            time = size * 2;
        }
        
    }

    cout << time;
}