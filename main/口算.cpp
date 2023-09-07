#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
double t,f;
int a,b,c,d,r,n,cnt,flag,ans,w;
int main(){
	srand((unsigned int)time(NULL));
	cout<<"欢迎使用小型口算"<<endl;
	sleep(1);
	cout<<"请输入你的名字:";
	string name;
	cin>>name;
	cout<<"欢迎使用该程序,"<<name<<"!"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"请输入你要干什么"<<endl;
		cout<<"1.经典口算"<<endl<<"2.退出"<<endl;
		cin>>n;
		if(n==1){
				cout<<"范围1~";
				cin>>ans;
				cout<<"好的"<<endl;
				sleep(1);
				system("cls");
				cout<<"开始"<<endl;
				cout<<"要做几道题:";
				cin>>cnt;
				if(cnt<=0){
					cout<<"gun"<<endl;
					cout<<"做一道"<<endl;
					sleep(1);
					cnt=1;
					system("cls");
				}
				for(int i=1;i<=cnt;i++){
					a=rand()%(ans-1)+1;
					b=rand()%(ans-1)+1;
					c=rand()%3;
					cout<<"请问"<<endl;
					if(c==0){
						cout<<a<<"+"<<b<<"=";
						cin>>d;
						if(d==a+b){
							cout<<"正确"<<endl; 
							flag++;
						} 
						else{
							cout<<"错误"<<endl;
						}
					}
					else if(c==1){
						cout<<a<<"-"<<b<<"=";
						cin>>d;
						if(d==a-b){
							cout<<"正确"<<endl;
							flag++;
						}
						else{
							cout<<"错误"<<endl;
						}
					}
					else{
						cout<<a<<"x"<<b<<"=";
						cin>>d;
						if(d==a*b){
							cout<<"正确"<<endl;
							flag++;
						}
						else{
							cout<<"错误"<<endl;
						}
					}
				}
				cout<<"正在统计中"<<endl;
				sleep(1);
				cout<<"一共有"<<cnt<<"道题,做对了"<<flag<<"道"<<endl;
				system("pause");
				system("cls");
		}
		else if(n==2){
			cout<<"谢谢使用"<<endl;
			sleep(1);
			return 0;
		} 
		else{
			cout<<"错误"<<endl;
		}
	}
}
