#include<bits/stdc++.h>
using namespace std;
int func(int x,int y);
int main(){
	
	int x=0,y=0,ans=0;
	cin>>x>>y;
	if(x<1||y<1||x<y){
		cout<<"input error"<<endl;
		return 1;
	}
	
	ans=func(x,y);
	cout<<"fun("<<x<<','<<y<<")="<<ans<<endl;
	
	return 0;
} 
int func(int x,int y){
	cout<<"fun("<<x<<','<<y<<"),";
	if(x==y||y==1)return 1;
	return func(x-1,y-1)+func(x-1,y);
}
