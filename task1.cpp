#include <iostream>
using namespace std;
main()
{
string fruit[4] = {"peach","apple","guava","watermelon"};
int price[] = {60,70,40,30};
string name;
int kg;
int total;
cout <<"enter the name of fruit: ";
cin >> name;
cout <<"enter number of kgs: ";
cin >> kg;
// with if conditions
// if(name == "peach")
// {
//   total = kg*price[0];
//   cout << "total price : "<< total<<endl;
// }
// if(name == "apple")
// {
//   total = kg*price[1];
//   cout << "total price : "<< total<<endl;
// }
// if(name == "guava")
// {
//   total = kg*price[2];
//   cout << "total price : "<< total<<endl;
// }
// if(name == "watermelon")
// {
//   total = kg*price[3];
//   cout << "total price : "<< total<<endl;
// }
// else
// {
//  cout << "not available";
// }
for(int index = 0 ; index < 4 ; index++)
{
    if(name == fruit[index])
    {
        total = kg*price[index];
        cout << "total: "<<total;
    }
}






}