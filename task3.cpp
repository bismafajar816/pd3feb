#include<iostream>
using namespace std;
main()
{
    string array;
    cout<< "enter word: ";
    getline(cin, array);
    int length;
    length = array.length();
    if(length % 2 == 0)
    {
        cout << "true";
    } 
    else
    {
      cout << "false";
    }
}