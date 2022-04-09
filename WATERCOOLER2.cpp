#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;




typedef long long ll;

   
    

int main(){
  
   ll t,a,b;
  cin>>t;
  while(t--){
      //string s;
      ll x,y;
      cin>>x>>y;
      ll c,d;
      
      d=y/x;
      if(y%x==0){
          
              cout<<d-1<<endl;
          
      }else{
          cout<<d<<endl;
      }
  }
return 0;

}