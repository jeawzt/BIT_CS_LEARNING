#include <bits/stdc++.h>
using namespace std;
typedef  struct point{
    int x,y,t;
}Point;
int main(){
    //读入数据
    int m=0,n=0;
    cin>>m>>n;
    int map[m][n];
    Point ink[m*n];
    int count_paper=0;
    int count_ink=0;
    int temp=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>temp;
            //记录白纸和墨滴的坐标
            if(temp==1){
                count_paper++;
            }else if(temp==2){
                ink[count_ink].x=i;
                ink[count_ink].y=j;
                ink[count_ink].t=0; //墨滴的初始时间为0
                count_ink++;
            }
            map[i][j]=temp;
        }
    }
   
    if(count_ink==0){
        cout<<"FALSE"<<endl; //没有墨滴
        return 0;
    }
    //开始扩散
    int time=0;
    queue<Point> q;
    for(int i=0;i<count_ink;i++){
        q.push(ink[i]);
    }
    while(!q.empty()){
        Point p=q.front();
        q.pop();
        if(p.x-1>=0&&map[p.x-1][p.y]==1){
            q.push({p.x-1, p.y, p.t+1});
            map[p.x-1][p.y]=2; //染色
            count_paper--;
        }
        if(p.x+1<=m-1&&map[p.x+1][p.y]==1){
            q.push({p.x+1, p.y, p.t+1});
            map[p.x+1][p.y]=2; //染色
            count_paper--;
        }
        if(p.y-1>=0&&map[p.x][p.y-1]==1){
            q.push({p.x, p.y-1, p.t+1});
            map[p.x][p.y-1]=2; //染色
            count_paper--;
        }
        if(p.y+1<=n-1&&map[p.x][p.y+1]==1){
            q.push({p.x, p.y+1, p.t+1});
            map[p.x][p.y+1]=2; //染色
            count_paper--;
        }
        if(q.empty()){
            time=p.t;
        }
    }

    //判断是否全部扩散完毕
    if(count_paper!=0){
        cout<<"FALSE"<<endl;
        return 0;
    }else{
        cout<<time<<endl; //输出扩散时间
    }

    return 0;
}