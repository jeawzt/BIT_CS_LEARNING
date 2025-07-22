#include<bits/stdc++.h>
using namespace std;
typedef struct Point{
    int count_a;
    int count_b;
    int i;
}point;

int main(){
    //输入
    char a[1000],b[1000],c[10000];
    cin>>a >> b >> c;
    //cout<<"cin:complete"<<endl;
    int clen=strlen(c);
    int alen=strlen(a);
    int blen=strlen(b);
    queue <point> q;
    //如果ab长度大于c长度，直接输出0
    if(alen > clen || blen > clen){
        cout << "FALSE" << endl;
        return 0;
    }
    char temp_a[alen], temp_b[blen];
    temp_a[alen]='\0';
	temp_b[blen]='\0'; 
    strncpy(temp_a,c,alen);
    strncpy(temp_b,c,blen);
    //cout<<"temp_b:"<<temp_b<<" | b:"<<b<<" | strcmp(temp_b,b):"<<strcmp(temp_b,b)<<" | blen:"<<blen<<endl;
    //cout<<"strncpy:complete"<<endl;
    if(strcmp(temp_a,a)==0)q.push({1, 0, alen});
    if(strcmp(temp_b,b)==0){
    	q.push({0, 1, blen});
    	//cout<<"push:complete"<<endl;
	}else{
		//cout<<"temp_b:"<<temp_b<<" | b:"<<b<<" | strcmp(temp_b,b):"<<strcmp(temp_b,b)<<" | blen:"<<blen<<endl;
		//cout<<temp_a<<endl;
	}
    while(!q.empty()){
        point p = q.front();
        q.pop();
        if(p.i==clen){
            if(p.count_a>0 || p.count_b>0){
                cout<<p.count_a << " " << p.count_b << endl;
                return 0;
            } else {
                cout<<"FALSE" << endl;
                return 0;
            }
        }
        
        if(p.i+alen<=clen){
        	strncpy(temp_a,c+p.i,alen);
        	if(strcmp(temp_a,a)==0){
            	q.push({p.count_a+1, p.count_b, p.i + alen});
            	cout<<"a:push"<<endl;
        	}
		}
		
		if(p.i+blen<=clen){
			strncpy(temp_b,c+p.i,blen);
	        if(strcmp(temp_b,b)==0){
	            q.push({p.count_a, p.count_b+1, p.i + blen});
	            cout<<"b:push"<<endl;
	        }
		}
        
        
        if(q.empty()){
            if(p.i!=clen){
                cout<<"FALSE" << endl;
                return 0;
            }
        }
    }
	cout<<"FALSE"<<endl; 
    return 0;
}
