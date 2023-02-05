#include <iostream>
using namespace std;

int main(){

    int odd;
    int min;
    int max;

    cout << "Starting Value : ";
    cin >> min;

   cout << "Ending Value   : ";
    cin >> max;

    cout << "Odd numbers in given range are: ";
    for(odd = min;odd <= max; odd++)

         if(odd % 2 !=0)
             cout << odd<< " ";
    return 0;
}

