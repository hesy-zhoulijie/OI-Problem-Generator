#include<bits/stdc++.h>
using namespace std;
int func(int n){
	if(n==1){
		cout<<"���԰�������Ŀ\n";
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
		else return 0;
		return 0;
	}
	else if(n==2){
		cout<<"������ȵ���Ŀ\n";
		string ans = "https://www.luogu.com.cn/problem/P";
		stringstream ss;
		int pid = rand();
		pid%=5721;
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
		if(n==1)system(cmdline.data());else return 0;
		return 0;
	}
	else if(n==3){
		cout<<"����Acwing����Ŀ\n";
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
		if(n==1)system(cmdline.data());else return 0;
		return 0;
	}
	//1000~4054
	else if(n==4){
		cout<<"���Ա�����ѧPOJ����Ŀ\n";
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
		if(n==1)system(cmdline.data());else return 0;
		return 0;
	}
	else if(n==5){
		cout<<"���Ժ��ݵ��ӿƼ���ѧHDU����Ŀ\n";
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
		if(n==1)system(cmdline.data());else return 0;
		return 0;
	}
	else if(n==6){
		cout<<"����CodeForces(�й�����)����Ŀ\n��ΪCodeforces����Ŀ������һ,��û�а취���в���,���һ������ը��,������һ��\n";
		string ans = "https://codeforces.ml/problemset/problem/";
		stringstream ss;
		int pid = rand();
		pid%=1388;
		pid+=1;
		ss<<pid;
		string oho;
		ss>>oho;
		ans += oho;
		int n = rand()%6;
		switch(n){
			case 0:ans+="/A";break;
			case 1:ans+="/B";break;
			case 2:ans+="/C";break;
			case 3:ans+="/D";break;
			case 4:ans+="/E";break;
			case 5:ans+="/F";break;
		}
		cout<<"Link:"<<ans<<endl;
		cout<<"�Ƿ������?\n1:��\n2:ȡ��"<<endl;
		cin>>n;
		string cmdline = "start ";
		cmdline+=ans;
		if(n==1)system(cmdline.data());else return 0;
		return 0;
	}
	else if(n==10){
		func(rand()%5+1);
	}
	else {cout<<"UKE"<<endl;
	func(n);}
}
int main(){
	cout<<"If there is random code, open the cpp source file of current version and choose to re-encode with ANSI standard. Recompiling will solve the error. Contact me via issues if the problem still appears.\n";
	srand(time(NULL));
	cout<<"��л��ʹ���������ܿ�����OI��Ŀ�����ת����\n";
	begin:cout<<"��ѡ�����\n1\t����\n2\t���\n3\tAcWing\n4\tPOJ\n5\tHDU\n6\tCodeForces\n10\tRandom\n";
	int n;
	cin>>n;
	func(n);
	return 0;	
}
//https://codeforces.ml/problemset/problem/1/A