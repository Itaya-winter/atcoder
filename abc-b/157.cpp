#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a[3][3];
    int c[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2] ;
    }
    
    cin >> n;
    if (n < 3){cout << "NO" <<endl;}
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < 3; j++)
       {
           for (int k = 0; k <3; k++)
           {
               if(a[j][k] == b[i]){
                   c[j][k] =  1;
               }
           }
           
       }
    
   }
   if(c[1][1]  &&(c[0][0]*c[2][2] || c[1][0] * c[1][2] || c[2][0] * c[0][2] || c[0][1] * c[2][0])){
       cout << "Yes" << endl;
   }
    else if(c[0][0] * (c[1][0] * c[2][0] || c[0][1]* c[0][2]))cout << "Yes" << endl;
    else if(c[2][2] * (c[0][2] * c[1][2] || c[2][0] * c[2][1]))cout << "Yes" << endl;

    else{cout << "No" << endl;}

    
    return 0;
}