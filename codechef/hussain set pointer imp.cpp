#include<bits/stdc++.h>
using namespace std;

long long v[1111111] ;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long  long n , m , ele , ans;
  cin >> n >> m;
  for(int i = 0 ; i<n ;i++) cin>>v[i] ;

  sort(v , v+n) ;
  queue<long long> q1 , q2 , *pri , *sec ;
  //pri = &q1 ;
  //sec = &q2 ;
  for(int i = n-1 ; i>=0 ;i--)q1.push(v[i]) ;
  int i = 1;
   while(m--)
    {
     cin >> ele;
      for( ; i<= ele ; i++)
	{
	  //  if(pri->empty())
	   //   swap(pri , sec);
	    if(pri->front() >= sec->front())
		{  ans = pri->front();pri->pop();}
	  else
	   { ans = sec->front();sec->pop();}

	  sec->push(ans>>1);
	}
       cout << ans<<endl ;
    }
  return 0;
}
