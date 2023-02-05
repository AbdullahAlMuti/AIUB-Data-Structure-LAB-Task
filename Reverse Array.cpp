#include <iostream>
using namespace std;
int main (){
int xienox [10] = {12, 32, 43 ,1, 54, 53, 15, 64, 3, 13};

cout <<"The Normal Array is  :  " ;
for (int i = 0; i<10; i++){
   cout <<xienox[i] << " "; // Extra Quotation mark for Space
}

{
    cout<<endl;
    cout <<"The Reverse Array is : " ;
    for (int i = 10; i >= 0; i--)
    {
        cout << xienox [i] << " ";
    }
}
    return 0;
}
