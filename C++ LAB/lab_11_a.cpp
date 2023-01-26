// 11. a) Write a Program Containing a Possible Exception. Use a Try Block to Throw it and a Catch Block to Handle it Properly.
#include <iostream>
using namespace std;
int main()
{
   int x;
   cout << "ENTER AGE ";
   cin >> x;
   try
   {
      if (x >= 18)
      {

         cout << "YOU CAN APPLY FOR DL\n";
      }
      else
      {
         throw x;
      }
   }
   catch (int x)
   {
      cout << "You ARE not eligile";
   }

   return 0;
}
