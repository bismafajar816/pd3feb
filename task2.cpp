#include<iostream>
using namespace std;
main()
{
    string movies[5] = {"gladiators", "starwars", "wonderwoman","maulajutt","warriors"};
    string name;
    cout << "you can watch gladiators, starwars, wonderwoman,maulajutt,warriors"<<endl;
    cout << "enter the name of movie : ";
    cin >> name;
    int price;
    int number;
    cout << "enter number of tickets: ";
    cin >> number;
    for(int index = 0 ; index < 5 ; index++)
    {
        if(name == movies[index])
        {
            if(index%2 == 0)
            {
              price = number*450;
              cout << price;
            }
               if(index %2 != 0)
            {
              price = number*475;
              cout << price;
            }
        }
    }
}