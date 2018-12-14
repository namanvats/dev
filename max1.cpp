#include<bits/stdc++.h>
using namespace std;
#define MAX5 100010
#define pb push_back
#define mp make_pair
typedef long long int ll;
int main()
{
    ll n,c;
    cin>>n>>c;
    ll st=1,end=n;
    //cout<<1<<" "<<mid<<'\n';
    while(end-st>1)
    {
        ll mid=st+(end-st)/2;
        cout<<1<<" "<<mid<<'\n';
        ll ch;
        cin>>ch;
        if(ch==1)
        {
            end=mid;
            cout<<2<<'\n';
        }
        if(ch==0)
        {
            st=mid;
        }
    }
    cout<<3<<end<<'\n';
}
