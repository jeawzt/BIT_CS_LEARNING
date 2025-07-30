#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int num=0;
	cin>>num;
	if(num<1){
		cout<<"input error"<<endl;
		return 1;
	}
	
	if(num%2==0)num++;
	int half=num/2;
	
	for(int i=0;i<half;i++){
		for(int j=0;j<i;j++)cout<<' ';
		cout<<'*';
		for(int j=0;j<2*(half-i)-1;j++)cout<<' ';
		cout<<'*'<<endl;
	}
	for(int i=0;i<half;i++)cout<<' ';
	cout<<'X'<<endl;
	for(int i=half-1;i>=0;i--){
		for(int j=0;j<i;j++)cout<<' ';
		cout<<'*';
		for(int j=0;j<2*(half-i)-1;j++)cout<<' ';
		cout<<'*'<<endl;
	}
	
	return 0;
} 
