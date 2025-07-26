#include<bits/stdc++.h>
using namespace std;
char convert_char(char a,int i);
int main(){
    //输入
    char a;
    int count =0;
    cin>>a>>count;

    if(!(a>='a' && a<='z') && !(a>='A' && a<='Z')){
        cout<<"error"<<endl;
        return 0;
    }

    for(int i=0;i<count-1;i++){
        char temp;
        temp = convert_char(a, count-1-i);
        for(int j=0;j<i;j++)cout<<' ';
        cout<<temp;
        for(int k=0;k<2*(count-1-i)-1;k++)cout<<' ';
        cout<<temp<<endl;

    }
    for(int i=0;i<count-1;i++)cout<<' ';
    cout<<a<<endl;
    for(int i=0;i<count-1;i++){
        char temp;
        temp = convert_char(a, i + 1);     
        for(int j=0;j<count-2-i;j++)cout<<' ';
        cout<<temp; 
        for(int k=0;k<2*i+1;k++)cout<<' ';
        cout<<temp<<endl;  
    }


    return 0;
}
char convert_char(char a,int i){
    char temp;
    if((a+i)>='a' && (a+i)<='z'){
            temp=a + i;
    }else if((a+i)>'z' && a>='a' && a<='z'){
            temp=a + i - 26;
    }else if((a+i)>='A' && (a+i)<='Z'){
            temp=a + i;
    }else if((a+i)>'Z' && a>='A' && a<='Z'){
            temp=a + i - 26;    
    }
    return temp;
}
