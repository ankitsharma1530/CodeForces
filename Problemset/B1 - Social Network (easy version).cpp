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
// int vis[100001];
void solve()
{
	
	// 0 0 0 0 0
	// 0 0 0 0 0
	// 0 0 1 0 0
	// 0 0 0 0 0
	// 0 0 0 0 0
	/*
	istringstream ss(str);
    string word; 
	vector<string>ans;
    while(ss >> word) 
        ans.push_back(word);
    }

	*/
	lli n,k;
	cin>>n>>k;
	deque<lli>q;
	unordered_set<lli>st;

	for(int i=0;i<n;i++)
	{
		lli x;
		cin>>x;
		if(q.size()<k)
		{
			if(q.front()!=x && st.find(x)==st.end()){
				q.push_front(x);
				st.insert(x);
			}
		}
		else{
			if(q.front()!=x && st.find(x)==st.end())
			{
				st.erase(q.back());
				q.pop_back();
				q.push_front(x);
				st.insert(x);
			}
		}
	}

	cout<<q.size()<<endl;
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop_front();
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
	// cin>>t;
	 t = 1;
	while(t--)
	{
		// memset(vis,0,sizeof(vis));
		solve();
		cout<<el;
	}


}


    
