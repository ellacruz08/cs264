/* Name: Ella Mae cruz
 * Student #: 14324961
 */

#include <iostream>
using namespace std;

int main()
{
  int x, i, flag=0;
  cout << "Enter a positive integer: ";
  cin >> x;

  for(i=2;i<=x/2;++i)
  {
      if(x%i==0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";
  return 0;
}
