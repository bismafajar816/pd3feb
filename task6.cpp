#include <iostream>
using namespace std;
main()
{
    int array[3];
    int trans;
    int odd, even;
    cout << "enter a number of transformation : ";
    cin >> trans;
    for (int index = 0; index < 3; index++)
    {
        cout << "enter a number: ";
        cin >> array[index];
    }
    for (int i = 0; i < trans; i++)
    {
        for (int index = 0; index < 3; index++)
        {
            if (array[index] % 2 != 0)
            {

                array[index] = array[index] + 2;
            }
            if (array[index] % 2 == 0)
            {

                array[index] = array[index] - 2;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << array[i] << " ";
    }
}
