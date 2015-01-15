#include<iostream>
#include<bitset>
using namespace std;

int primes[3000100]; //list of primes
bitset <30000000> P; //instant prime check with boolean table

void generate( int N ) //sieve
{
    P[2] = 1;
    primes[0] = 2; //set 2 as prime
    bool prime;
    int ct = 1, i, j;
    for ( i = 3; i <= N; i++ ) //range to sieve
    {
        prime = true;
        for ( j = 0; primes[j]*primes[j] <= i; j++ ) //loop through previous primes until root of current number to check
        {
            if ( i % primes[j] == 0 )
            {
                prime = false; //not prime
                break;
            }
        }
        if ( prime )
        {
            primes[ct] = i; //add to list of primes
            ct++;
            P[i] = true; //add to boolean table
        }
    }
}

int main()
{
    int N;
    cin>>N; //specify range
    generate(N);

    while ( 1 )
    {
        cout<<"Enter 0 to end loop or N to check if N is prime:\n";
        cin>>N;
        if ( !N ) break;
        P[N] ? cout<<"Yes\n" : cout<<"No\n";
    }

    return 0;
}

