#include <bits/stdc++.h>
#define mod 1000000007
#define pii pair<int,int>
#define vii vector<ii>
#define lli long long int
#define ll long long
#define INF 1000000000;
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
/*
vector<lli>arr;
for(int i=0;i<n;i++)
{
	lli it;
	cin>>it;
	arr.push_back(it);
}
*/
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif



    int t;
    cin>>t;
    while(t--)
    {
		int n;
        cin>>n;
        int x2021 = n%2020;
        int x2020 = (n-x2021)/2020 - x2021;
        if(x2020>=0 && (2020*x2020+2021*x2021)==n)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
}
