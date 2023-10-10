#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num < 1)
    {
        return false;
    }
    for( int i = 2; i <= num / 2; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}
main()
{
    cout<<"Prime numbers from 1 to 100: \n";
    for(int i = 0; i<= 100; i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}