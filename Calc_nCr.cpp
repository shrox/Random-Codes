#include<iostream>
#include<vector>

using namespace std;

const long long int MOD=1e9+7;
long long int n,t,m,ans;

long long in(long long int a)
{
        long long b=MOD-2;
        long long x=1,y=a;
        while(b > 0)
        {
            if(b%2 == 1)
            {
                x=(x*y);
                if(x>MOD) x%=MOD;
            }
                y = (y*y);
                if(y>MOD) y%=MOD;
                b /= 2;
        }
                return x;
}

long long int C(int n, int r)
{
    vector<long long> f(n+1,1);
    for(int i=2;i<n+1;i++)
    {
        f[i]=(f[i-1]*i)%MOD;
    }
    return((f[n]*((in(f[r])*in(f[n-r]))%MOD))%MOD);

}

int main()
{
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        ans=0;
        int a=1;
        for(int j=0;j<n;j++)
        {
            cin>>m;
            cout<<C(n-1,j)<<endl;
            ans=(ans+(a*C(n-1,j)*m)%MOD)%MOD;
            a=a*-1;
        }
        cout<<ans<<endl;
    }
}
