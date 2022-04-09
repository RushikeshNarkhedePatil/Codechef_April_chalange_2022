// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
// 	// your code goes here
// 	ll testcase;
// 	cin>>testcase;
// 	for(int we=0;we<testcase;we++)
// 	{
// 	    int a,b;
// 	    cin>>a>>b;
// 	    if(a%2==0)
// 	    {
// 	        if(b-a>=2)
// 	        {
// 	            cout<<a<<' '<<a + 2<<endl;
	            
// 	        }
// 	        else
// 	        {
// 	            cout<<-1<<endl;
	            
// 	        }
// 	    }
// 	    else
// 	    {
// 	        if(b-a>=3)
// 	        {
// 	            if(a%3==0)
// 	            {
// 	                cout<<a<<' ' <<a+3<<endl;
// 	            }
// 	        }
// 	        else
// 	        {
// 	            cout<<-1<<endl;
// 	        }
// 	    }
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll max=0;
        if(b-a>2)
        {
            if(a%2==0)
            {
                cout<<a<<" "<<a+2<<endl;
            }
            else if(a%3==0)
            {
                cout<<a<<" "<<a+3<<endl;
            }
            else
            {
                cout<<a+1<<" "<<a+3<<endl;
            }
        }
        else
        {
            if(__gcd(a,b)>1)
            {
                cout<<a<<" "<<a+2<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
          
    }
}
