#include<bits/stdc++.h>
using namespace std;
bool accept(char c);
bool isLParenthese(char c);
bool isRParenthese(char c);
bool isCP(char c1,char c2);
int main(){
	char line[10000];
	fgets(line,10000,stdin);
	stack<char> s;
	char w[1000];
	int count=0;
	bool flag=false;
	for(int i=0;line[i]!='\0'&&line[i]!='\n';i++){
		char c=line[i];
		if(!accept(c)){
			cout<<"input error"<<endl;
			return 1;
		}
		if(isLParenthese(c)){
			s.push(c);
			//cout<<"push:done"<<endl;
		}else if(isRParenthese(c)){
			if(s.empty()){
				flag=true;
				w[count++]=c;
			}else{
				//cout<<c<<"  "<<s.top()<<endl;
				if(isCP(c,s.top())){
					s.pop();
				}else{
					w[count++]=s.top();
					w[count++]=c;
					flag=true;
					s.pop();
				}
			}
		}
	}
	if(!s.empty())flag=true;
	while(!s.empty()){
		w[count++]=s.top();
		s.pop();
	}
	if(flag){
		cout<<"no"<<endl;
		for(int i=0;i<count;i++)cout<<w[i];
		cout<<endl;
	}else{
		cout<<"yes"<<endl;
	}
	return 0;
} 
bool accept(char c){
	if(c>='0'&&c<='9')return true;
	if(c=='('||c==')'||c=='['||c==']'||c=='{'||c=='}'||c=='-'||c==' '||c=='+')return true;
	//int b=c-'0';
	//cout<<c<<' '<<b<<endl;
	return false;
}
bool isLParenthese(char c){
	if(c=='('||c=='['||c=='{')return true;
	return false;
}
bool isRParenthese(char c){
	if(c==')'||c==']'||c=='}')return true;
	return false;
}
bool isCP(char c1,char c2){
	if(c1==')'&&c2=='(')return true;
	if(c1=='}'&&c2=='{')return true;
	if(c1==']'&&c2=='[')return true;
	return false;
}
