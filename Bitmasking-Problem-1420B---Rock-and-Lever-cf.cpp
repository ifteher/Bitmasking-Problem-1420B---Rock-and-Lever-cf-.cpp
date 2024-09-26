///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define tc int t; cin>>t; while(t--)

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
 bool cmp(const pair<int, pair<int,char>> &a,
         const pair<int,pair<int,char>> &b)
{

   if (a.second.first != b.second.first) {
        if(a.second.first>b.second.first)

        return true;

         return   false;
    }

    else {
            if(a.first<b.first)
            return true;
        return false;
    }
}

int main()
{
    optimize();
 tc
 {

    int n,cnt=0,ans=0;
    cin >> n;
    map<int,int>mp;
   /*
   kono num er last set bit er pos janar jonno builtin func:__lg(a[i]);jar complexity:0(1);
   bitmask e 2^n...2^(n-1)...2^4,2^3,2^2,2^1 tee 2^n er val er ageer sobgolo(2^(n-1)porjonto) value er sum er ceye boro hobe,eta important logic;
   */

   for(int i=0;i<n;i++)
   {
     int x;
     cin>>x;
     mp[__lg(x)]++;
   }
   for(auto [x,y]:mp)
   {
       cnt+=((y*(y-1))/2);//n sonkok number er jogfol er law: (n*(n-1))/2;
   }
   cout<<cnt<<endl;

 }
return 0;
}
