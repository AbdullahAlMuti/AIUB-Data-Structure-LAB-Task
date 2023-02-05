
#include <iostream>
using namespace std;
int main ()
{
    int size = 10;
    int ara[size] = {1,2,3,4,5,6,7,8,9,10};
    cout <<"Given Array : ";
    for (int i = 0; i<size; i++)
    {
        cout << ara[i]<<" ";
    }
    cout <<endl;
    size--; // For deleting last value
    size--; // For delete 5
    for (int i = 4; i<size; i++) // Delete 5
    {
        ara[i]=ara[i+1];
    }
    size--;       //For Deleting First Value
    for (int i = 0;  i<size; i++)
    {
        ara[i] = ara[i+1];
    }
    cout <<"Final Array : ";
    for (int i = 0; i<size; i++)
    {
        cout<< ara[i]<<" ";
    }
    return 0;
}
