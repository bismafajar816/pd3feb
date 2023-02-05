#include <iostream>
using namespace std;
main()
{
    string array, array1;
    cout << "enter first string: ";
    getline(cin, array);
    cout << "enter second string: ";
    getline(cin, array1);
    int index, count = 0;
    index = array.length();
    int index1;
    index1 = array1.length();
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < index1; j++)
        {
            if (array[i] == array1[j])
            {
                count++;
                array[i] = ' ';
                array1[j] = ' ';
                break;
            }
        }
    }
    cout << count << " ";
}