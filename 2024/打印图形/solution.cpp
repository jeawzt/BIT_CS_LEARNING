#include<bits/stdc++.h>
using namespace std;
int main(){
	//����
	int num=0;
	cin>>num;
	if(num<2||num>20){
		cout<<"input error"<<endl;
		return 1;
	} 
	//�ϵ� 
	for(int i=0;i<num-1;i++)cout<<' ';
	for(int i=0;i<num;i++)cout<<'.';
	cout<<endl;
	//��
	for(int i=0;i<num-2;i++){
		for(int j=0;j<num-i-2;j++)cout<<' ';
		cout<<'.';
		for(int j=0;j<num+2*i;j++)cout<<' ';
		cout<<'.'<<endl;
	} 
	//�µ�
	for(int i=0;i<3*num-2;i++)cout<<'.';
	cout<<endl; 
	return 0;
} 

