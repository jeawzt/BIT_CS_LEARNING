#include<bits/stdc++.h>
using namespace std;


int main(){
    //输入
    char s[10000];
    cin>>s;

    int len = strlen(s);
    int max_len=0;
    int count=0;
    int out_count=1;
    char out[100];
    char a=s[0];
    out[0] = a;
    for(int i=0;i<len;i++){
        if(s[i] != a){
            if(count == max_len){ 
                int flag = 1;
                for(int j=0;j<out_count;j++){
                    if(out[j] == a){
                        flag = 0;
                        break;
                    }
                }
                if(flag)out[out_count++] = a;
            }else if(count >max_len){
                max_len = count;
                out_count = 1;
                out[0] = a;
            }
            count = 1;
            a = s[i];
        }else{
            count++;
        }
    }
    if(count == max_len){ 
        int fLag = 1;
        for(int j=0;j<out_count;j++){
            if(out[j] == a){
                fLag = 0;
                break;
            }
        }
        if(fLag)out[out_count++] = a;
    }else if(count >max_len){
        max_len = count;
        out_count = 1;
        out[0] = a;
    }
    cout<<max_len<<' ';
    for(int i=0;i<out_count;i++){
        cout<<out[i]<<' ';
    }
    cout<<endl;

    return 0;
}