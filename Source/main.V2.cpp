#include<bits/stdc++.h>
using namespace std;
int main(){
	srand(time(NULL));
	cout<<"��л��ʹ���������ܿ�����OI��Ŀ�����ת����\n";
	begin:cout<<"��ѡ�����\n1\t����\n2\t���\n";
	int n;
	cin>>n;
	if(n==1){
		string ans = "http://bailian.openjudge.cn/practice/";
		stringstream ss;
		int pid = rand();
		pid%=3152;
		pid+=1000;
		ss<<pid;
		string oho;
		ss>>oho;
		ans += oho;
		cout<<"Link:"<<ans<<endl;
		cout<<"�Ƿ������?\n1:��\n2:ȡ��"<<endl;
		cin>>n;
		string cmdline = "start ";
		cmdline+=ans;
		if(n==1)system(cmdline.data());
		return 0;
	}
	else if(n==2){
		string ans = "https://www.luogu.com.cn/problem/P";
		stringstream ss;
		int pid = rand();
		pid%=7721;
		pid-=1000;
		ss<<pid;
		string oho;
		ss>>oho;
		ans += oho;
		cout<<"Link:"<<ans<<endl;
		cout<<"�Ƿ������?\n1:��\n2:ȡ��"<<endl;
		cin>>n;
		string cmdline = "start ";
		cmdline+=ans;
		if(n==1)system(cmdline.data());
		return 0;
	}
	else {cout<<"UKE"<<endl;
	goto begin;}
}