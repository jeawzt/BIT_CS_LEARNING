#include<bits/stdc++.h>
using namespace std;
char r[200],ra[200];
int count_a=0,count_r=0;
void Record(char c);
void detectRepeat(char c);
bool isRepeat(char c);
int main(){
	
	char a[10000],b[10000];
	cin.getline(a,10000);
	cin.getline(b,10000);
	if(a[0]=='\0'&&b[0]=='\0'){
		cout<<"input error"<<endl;
		return 1;
	}
	
//	int alen=strlen(a);
//	int blen=strlen(b);
	for(int i=0;a[i]!='\0';i++)Record(a[i]);
	for(int i=0;b[i]!='\0';i++)detectRepeat(b[i]);
	
	for(int i=0;a[i]!='\0';i++)if(!isRepeat(a[i]))cout<<a[i];
	for(int i=0;b[i]!='\0';i++)if(!isRepeat(b[i]))cout<<b[i];
	cout<<endl;
	
	return 0;
} 
void Record(char c){
	for(int i=0;i<count_a;i++)if(c==ra[i])return;
	ra[count_a++]=c;
}
void detectRepeat(char c){
	for(int i=0;i<count_r;i++)if(c==r[i])return;
	for(int i=0;i<count_a;i++){
		if(c==ra[i]){
			r[count_r++]=c;
		}
	}
}
bool isRepeat(char c){
	for(int i=0;i<count_r;i++)if(c==r[i])return true;
	return false;
}
