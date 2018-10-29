//let's keep it simple and easy....
#include<bits/stdc++.h>
#define ll          long long int
#define pb          emplace_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define Max(a,b)    ((a)>(b)?(a):(b))
#define Min(a,b)    ((a)<(b)?(a):(b))
#define rep(i,a,b)  for (__typeof((b)) i=(a);i<(b);i+=1)
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define mod	        1000000007
#define endl        '\n'
#define si(x)		scanf("%d",&x);
using namespace std;
int binarysearch(int l,int h,int value,int a[],int n) //TTTTFFFF
{
	while(l<h)
	{
		int mid=l+(h-l+1)/2;
		int position=a[0],cows=1;
		rep(i,1,n)
		{
			if(a[i]-position>=mid)
			{
				cows++;
				position=a[i];
			}
		}
		if(cows<value)
			h=mid-1;
		else
			l=mid;
	}
	return l;
}
int main()
{
	//new code
	int t;
	cin >>t;
	while(t--)
	{
		int n,c;
		cin >>n>>c;
		int a[n];
		rep(i,0,n);
		int min=1e9,max=0;
		rep(i,0,n)
		{
			cin >>a[i];
			if(a[i]<min)
			{
				min=a[i];	
			}	
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		sort(a,a+n);
		cout<<binarysearch(min,max,c,a,n)<<endl;		
	}
}
