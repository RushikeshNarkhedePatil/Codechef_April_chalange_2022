#include <bits/stdc++.h>
#include<iostream>
#define ll long long
using namespace std;

int main() {
    long long testcase;
    cin>>testcase;
    for(long long we=0;we<testcase;we++)
    {
        long long n=0,ans=0;
        cin>>n;
        if(n%2==0)
        {
           if(n%4==0)
           {
               ans=3^n;
           }
           else
           {
               ans=3;
           }
        }
        else
        {
            if((n-1)%4==0)
            {
                ans=(3^(n-1))&n;
            }
            else
            {
                ans=3;
            }
        }
        std::cout << ans << std::endl;
    }
	return 0;
}