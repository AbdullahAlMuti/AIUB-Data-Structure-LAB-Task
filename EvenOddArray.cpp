#include<iostream>

using namespace std;
int main()
{
   int arr[10];
   int even=0;
   int odd=0;
   int i;

   cout<<"Input 10 Int Elements: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   for(i=0; i<10; i++)
   {
      if(arr[i]%2==0)
         even++;
      else
         odd++;
   }
   cout<<even<<" : Even number"<<endl;
   cout<<odd<<"  : Odd number";

   cout<<endl;
   return 0;
}
