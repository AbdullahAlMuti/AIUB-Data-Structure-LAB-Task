#include <iostream>
using namespace std;
int main ()
{
    int intialArray = 10;
    int size = 13;
    int ara[size] = {1,2,3,4,5,6,7,8,9,10};

    cout << "Given Array        : ";
    for (int i=0; i<intialArray; i++)
    {
        cout << ara [i] << " ";
    }
    cout << endl;

    ara [intialArray++] = 100; // For adding 100 in the end.
    for (int i = intialArray; i>4; i--)
    {
        ara[i] = ara[i-1]; // For add 200 in index 4
    }
    ara[4] = 200;
    intialArray++;

    for (int i = intialArray; i>0; i--)
    {
        ara[i] = ara[i-1];
    }
    ara[0] = 300;
    intialArray++;

    cout << "The Final Array is : ";
    for (int i = 0; i<intialArray; i++)
    {
        cout << ara [i] <<" ";
    }
    return 0;
}
