#include<bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define ll long long
#define pll pair<long long,long long>
#define INF 1000000000;
#define el '\n' 
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

// for loops shortcut
#define garr(i, n)       for(ll i = 0; i < (n); i++)
#define parr(i, n, arr)       for(ll i = 0; i < (n); i++) cout<<arr[i]<<" ";
/*
vector<ll>arr;
for(int i=0;i<n;i++)
{
	ll it;
	cin>>it;
	arr.push_back(it);
}
*/
using namespace std;
void solve()
{
	
	// 0 0 0 0 0
	// 0 0 0 0 0
	// 0 0 1 0 0
	// 0 0 0 0 0
	// 0 0 0 0 0
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int res[n];
	for(int i=0;i<n;i++)
	{
		if(arr[i]==i+1)
		{
			res[i]=1;
		}
		else{
			int c = 0;
			int temp  =arr[i];
			int ii = i+1;
			while(temp!=ii)
			{
				temp = arr[temp-1];
				c++;
			}
			res[i] = c+1;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<res[i]<<" ";
	}

	
}

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
	// t = 1;
	while(t--)
	{
		solve();
		cout<<el;
	}


}


    
