#include <iostream>
using namespace std;
string convert(string pin)
{
    string moves[] = {"shimmy", "shake", "pirouette", "slide", "boxStep", "headspin", "dosado", "pop", "lock", "arabesque"};
    string output = "";
    bool valid = true;
    for (int i = 0; i < 4; i++)
    {

        int assci = pin[i];
        int number = assci - 48;
        if (assci < 48 || assci > 57)
        {
            valid = false;
            break;
        }

       int index = number + i;
        if (index >= 10)
        {
            index = index - 10;
        }
        output = output + moves[index] + " ";
    }
    if (valid)

        return output;

    else

        return "invalid operation ";
}

main()
{
    string pin;
    cout << "enter your pin: ";
    cin >> pin;
    cout << convert(pin);
}