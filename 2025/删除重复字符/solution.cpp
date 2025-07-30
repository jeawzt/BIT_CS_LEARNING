#include<bits/stdc++.h>
using namespace std;
struct Table{
	char c;
	int x;
};
int isRepeat(char c);
Table t[200];
int count_c=0;
int main(){
	
	char a[10000];
	cin.getline(a,10000);
	
	if(a[0]=='\0'){
		cout<<"input error"<<endl;
		return 1;
	}
	
	for(int i=0;a[i]!='\0';i++){
		int temp=isRepeat(a[i]);
		if(temp!=-1){
			t[temp].x++;
		}else{
			t[count_c].c=a[i];
			t[count_c++].x=0;
		}
	}
	
	for(int i=0;i<count_c;i++){
		if(t[i].x!=0){
			cout<<t[i].c<<t[i].x;
		}else{
			cout<<t[i].c;
		}
	}
	cout<<endl;
	
	return 0;
}
int isRepeat(char c){
	for(int i=0;i<count_c;i++)if(c==t[i].c)return i;
	return -1;
}
