#include<bits/stdc++.h>
using namespace std;
int func(int n){
	if(n==1){
		cout<<"来自百练的题目\n";
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
		cout<<"是否打开链接?\n1:打开\n2:取消"<<endl;
		cin>>n;
		string cmdline = "start ";
		cmdline+=ans;
		if(n==1)system(cmdline.data());
		else return 0;
		return 0;
	}
	else if(n==2){
		cout<<"来自洛谷的题目\n";
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
		cout<<"是否打开链接?\n1:打开\n2:取消"<<endl;
		cin>>n;
		string cmdline = "start ";
		cmdline+=ans;
		if(n==1)system(cmdline.data());else return 0;
		return 0;
	}
	else if(n==3){
		cout<<"来自Acwing的题目\n";
		string ans = "https://www.acwing.com/problem/content/";
		stringstream ss;
		int pid = rand();
		pid%=2254;
		// pid-=1000;
		ss<<pid;
		string oho;
		ss>>oho;
		ans += oho;
		cout<<"PS:Acwing的一部分链接有锅，这里不对这些链接进行正确性验证。\nLink:"<<ans<<endl;
		cout<<"是否打开链接?\n1:打开\n2:取消"<<endl;
		cin>>n;
		string cmdline = "start ";
		cmdline+=ans;
		if(n==1)system(cmdline.data());else return 0;
		return 0;
	}
	//1000~4054
	else if(n==4){
		cout<<"来自北京大学POJ的题目\n";
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
		cout<<"是否打开链接?\n1:打开\n2:取消"<<endl;
		cin>>n;
		string cmdline = "start ";
		cmdline+=ans;
		if(n==1)system(cmdline.data());else return 0;
		return 0;
	}
	else if(n==5){
		cout<<"来自杭州电子科技大学HDU的题目\n";
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
		cout<<"是否打开链接?\n1:打开\n2:取消"<<endl;
		cin>>n;
		string cmdline = "start ";
		cmdline+=ans;
		if(n==1)system(cmdline.data());else return 0;
		return 0;
	}
	else if(n==6){
		func(rand()%5+1);
	}
	else {cout<<"UKE"<<endl;
	func(n);}
}
int main(){
	cout<<"If there is random code, open the cpp source file of current version and choose to re-encode with ANSI standard. Recompiling will solve the error. Contact me via issues if the problem still appears.\n";
	srand(time(NULL));
	cout<<"感谢您使用由周立杰开发的OI题目随机跳转功能\n";
	begin:cout<<"请选择题库\n1\t百练\n2\t洛谷\n3\tAcWing\n4\tPOJ\n5\tHDU\n6\t随机\n";
	int n;
	cin>>n;
	func(n);
	return 0;	
}