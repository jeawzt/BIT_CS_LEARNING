#include<bits/stdc++.h>
using namespace std;
struct Student{
	char cno[3];		// �γ̱��
	char sno[3];		// ѧ�����
	double avg;			// ƽ���ɼ�
};
typedef struct Student stu;
bool cmp(const stu &s1,const stu &s2);
int main(){
	//����
	stu s[1000];
	int count_stu=0;
	double g=0;
	char temp[10000];
	while(cin>>s[count_stu].cno){
		if(s[count_stu].cno[0]=='\\'){
			break;
		}else{
			cout<<s[count_stu].cno<<endl;
			cin>>s[count_stu].sno;
			cin>>s[count_stu].avg;
			count_stu++;
		}
	} 
	
	sort(s,s+count_stu,cmp);
	
	cout<<"cno sno avg"<<endl;
	for(int i=0;i<count_stu;i++){
		cout<<s[i].cno[0]<<s[i].cno[1]<<s[i].cno[2]<<" "<<s[i].sno<<" "<<s[i].avg<<endl;
	}
	
	return 0;
}
bool cmp(const stu &s1,const stu &s2){
	cout<<s1.cno[0]<<s1.cno[1]<<s1.cno[2]<<" "<<s1.sno<<" "<<s1.avg<<endl;
	cout<<s2.cno[0]<<s2.cno[1]<<s2.cno[2]<<" "<<s2.sno<<" "<<s2.avg<<endl;
	if(s1.cno[2]!=s2.cno[2]) return s1.cno[2]<s2.cno[2];
	//if(s1.cno!=s2.cno) return s1.cno<s2.cno;
	else return s1.avg>s2.avg;
}
