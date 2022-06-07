#include <bits/stdc++.h>
#define mod 1000000007 
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
const double pi = acos(-1.0);
template <class T> using Ordered_Set = tree<T, null_type, less<T>,
    rb_tree_tag, tree_order_statistics_node_update>;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_multiset;




ll val[200005+1],b[200005+1],a[200005+1];
void solve()
{
   ll n,k,q;
   cin >> n >> q;
  
   

   while(q--)
   {
        ll x,y;
        cin >> x >> y;
        x--;
        y--;
        val[x]++;
        if(y <= n-2)
        {
            val[y+1]--;
        }
   }
   ll v = 0;
   for(int i = 0 ; i < n ; i++)
   {
        v += val[i];
        b[i] = v;
   }
}
3 
1 5
2 3
2 3
output = 1 3 3 1 1
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    solve();
    return 0;
}
     
