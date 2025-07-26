#include<bits/stdc++.h>
using namespace std;
void func(long long x);
int main(){
	
	//ÊäÈë
	long long num=0;
	cin>>num;
	
	func(num); 
	
	return 0;
} 
void func(long long x){
	if(x==1){
		cout<<1<<endl;
		return;
	}else if(x%2==1){
		cout<<x<<' ';
		func(3*x+1);
	}else{
		cout<<x<<' ';
		func(x/2);
	}
}
