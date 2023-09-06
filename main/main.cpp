#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
int n,a,w,b;
int cnt=1,ans,ans2;
struct lei{
	string name;
	int flag;
}s[9999];
int main(){
	string ming,str; 
	srand((unsigned int)time(NULL));
	cout<<"欢迎来到日程管理器"<<endl;
	sleep(1);
	cout<<"请输入你的名字:";
	cin>>ming;
	cout<<"欢迎"<<ming<<"！"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"请输入你要干什么"<<endl;
		cout<<"1.增加日程"<<endl;
		cout<<"2.管理日程"<<endl;
		cout<<"3.需要灵感?输入3"<<endl;
		cout<<"4.退出(所有数据全部丢失)"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入日程名称:";
			cin>>str;
			cout<<"完成!"<<endl; 
			s[cnt].name=str; 
			cnt++;
		}
		else if(n==2){
			system("cls");
			cout<<"请输入需要干什么"<<endl;
			cout<<"1.完成一件事"<<endl;
			cout<<"2.查看所有日程"<<endl;
			cin>>w;
			if(w==1){
				ans2=0;
				cout<<"请输入该日程的名字:";
				cin>>str;
				for(int i=1;i<=cnt;i++){
					if(s[i].name==str&&s[i].flag==0){
						cout<<"好的，该日程已经完成"<<endl;
						ans2=1;
						s[i].flag=1;
					}
				}
				if(ans2==0){
					cout<<"未找到该日程"<<endl;
				}
			}
			else if(w==2){
				cout<<"以下是所有未完成的任务"<<endl;
				for(int i=1;i<=cnt;i++){
					if(s[i].flag==0){
						cout<<s[i].name<<endl;
					}
				}
				system("pause");
				system("cls");
			}
			else{
				cout<<"错误"<<endl;
			}
		}
		else if(n==3){
			cout<<"如果您不是学生的话，"<<endl<<"请输入2，如果是的话"<<endl<<"输入1"<<endl;
			cin>>a;
			if(a==1){
				w=rand()%2;
				if(w==0){
					cout<<"做一些口算吧!"<<endl;
					sleep(1);
					cout<<"要不要我来帮你弄? 1.好的 2.不好"<<endl;
					cin>>b;
					if(b==1){
						system("start 口算.exe");
					}
					else if(b==2){
						cout<<"好吧"<<endl;
						system("pause");
						system("cls");
					}
					else{
						cout<<"错误"<<endl;
					}
				}
				else if(b==1){
					cout<<"玩一会游戏，好不好 1.好 2.不好"<<endl;
					cin>>b;
					if(b==1){
						cout<<"好滴"<<endl;
						sleep(1);
						system("start game.exe");
					}
					else if(b==2){
						cout<<"好吧"<<endl;
						sleep(1);
						system("cls");
					}
					else{
						cout<<"???"<<endl;
					}
				}
				else{
					cout<<"学习吧"<<endl; 
				}
			}
			else if(a==2){
				cout<<"由于作者小学生，所以。。。"<<endl;
				sleep(1);
				system("cls");
			}
			else{
				cout<<"错误"<<endl;
			}
		}
		else if(n==4){
			cout<<"感谢使用"<<endl;
			sleep(1);
			return 0;
		}
	}
}
