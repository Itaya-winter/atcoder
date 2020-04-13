#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if (a%b==0)
	{
		return(b);
    }
	else
	{
		return(gcd(b,a%b));
    }
}


int main(void){
    int n;
    cin >>n;
    ll  ans =0; 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            for (int k = 1; k <= i-1; k++)
            {
                if(i == k && i== j)ans += gcd(gcd(i,k),gcd(j,k))*6;
                else ans += gcd(gcd(i,k),gcd(j,k))*3;
            }
            
        }
        
    }
    ans += n*(n+1)/2;
    cout << ans << endl;
    return 0;
}