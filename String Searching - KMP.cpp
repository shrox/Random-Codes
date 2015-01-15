#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<stack>
#include<queue>
#include<deque>
#include<vector>
#include<map>
#include<set>
#include<bitset>
#include<ctime>
#include<limits>
#include<iomanip>
#include<cstdlib>
#include<list>
#include<functional>
#include<numeric>
#include<utility>
#include<sstream>

#define MAXIMUM ( 1 << 31 ) - 1
#define MINIMUM ( 1 << 31 )
#define pb push_back
#define endl '\n'

typedef long long ll;
using namespace std;

bool match[100005]; //All indices where pattern is present are 1
string TEXT, PATTERN; //Text to search and pattern to search for
int F[1000]; //Stores automaton states. Every index represents the largest partial match a prefix of that size has.

void build() //builds automaton for the pattern
{
    int i, j;
    F[0] = F[1] = 0; //always true
    for ( i = 2; i <= PATTERN.length(); i++ )
    //we go an extra step because the failure function is 1-indexed 
    //PATTERN is still 0 indexed
    //The 0 index in the array F represents an empty string. Every consequent element represents prefix of that length
    {                                   
        j = F[i - 1];
        while ( true )
        {
            if ( PATTERN[j] == PATTERN[i-1] ) //If the char that extends partial match is same as last char of curr prefix
            {
                F[i] = j+1;
                break;
            }
            else if ( j == 0 ) //The best match is an empty string
            {
                F[i] = 0;
                break;
            }
            else j = F[j]; //Check for an even smaller partial match
        }
    }
}

int find()
{
    build();
    int i = 0, j = 0, ct = 0; //i loops over TEXT, j over PATTERN. ct is counts of patterns.
    while ( true )
    {
        if ( i == TEXT.length() ) break; //Full TEXT has been searched
        if ( TEXT[i] == PATTERN[j] ) //The state of the automata can be extended to the next one
        {
            i++;
            j++;
            if ( j == PATTERN.length() ) //Match found
            {
                match[i - PATTERN.length()] = true; //Mark indice
                ct++;
                j = F[j]; //Since a full match has been found, we can start at this index of TEXT and assume that another
                //smaller match has already been extended up till F[j]
            }
        }
        else if ( j ) j = F[j]; //If you can't extend this match, see if you can extend a smaller match
        else i++; //Can't extend shit on this TEXT index, try with the next one
    }
    return ct;
}


int main()
{
    int i, j, k;
    cin>>TEXT>>PATTERN;
    cout<<find()<<endl;

    return 0;
}
