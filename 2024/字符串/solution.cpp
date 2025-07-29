#include<bits/stdc++.h>
using namespace std;
int init_char;

void output(char c, int i);
int main(){
	char c;
	cin>>c;
	if( !(c>='a'&&c<='z') && !(c>='A'&&c<='Z') ){
		cout<<"input error"<<endl;
		return 1; 
	}
	int len=0;
	if(c>='a'&&c<='z'){
		len=c-'a'+1;
		init_char=0;
	}
	if(c>='A'&&c<='Z'){
		len=c-'A'+1;
		init_char=1;
	}
	
	for(int i=0;i<len-1;i++)output(c,i);
	cout<<c;
	for(int i=len-2;i>=0;i--)output(c,i);
	cout<<endl;
	return 0;
} 
void output(char c, int i){
	char o;
	if(i%2==1){
		if(init_char){
			o='a'+i;
		}else{
			o='A'+i;
		}
	}else{
		if(init_char){
			o='A'+i;
		}else{
			o='a'+i;
		}
	}
	cout<<o;
	return;
}
