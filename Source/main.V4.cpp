#include<bits/stdc++.h>
using namespace std;
int main(){
	srand(time(NULL));
	cout<<"��л��ʹ���������ܿ�����OI��Ŀ�����ת����\n";
	begin:cout<<"��ѡ�����\n1\t����\n2\t���\n3\tAcWing\n4\tPOJ\n5\tHDU\n";
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
	else if(n==3){
		string ans = "https://www.acwing.com/problem/content/";
		stringstream ss;
		int pid = rand();
		pid%=2254;
		// pid-=1000;
		ss<<pid;
		string oho;
		ss>>oho;
		ans += oho;
		cout<<"PS:Acwing��һ���������й������ﲻ����Щ���ӽ�����ȷ����֤��\nLink:"<<ans<<endl;
		cout<<"�Ƿ������?\n1:��\n2:ȡ��"<<endl;
		cin>>n;
		string cmdline = "start ";
		cmdline+=ans;
		if(n==1)system(cmdline.data());
		return 0;
	}
	//1000~4054
	else if(n==4){
		string ans = "http://poj.org/problem?id=";
		stringstream ss;
		int pid = rand();
		pid%=3054;
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
	else if(n==4){
		string ans = "http://acm.hdu.edu.cn/showproblem.php?pid=";
		stringstream ss;
		int pid = rand();
		pid%=5813;
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
	else {cout<<"UKE"<<endl;
	goto begin;}
}