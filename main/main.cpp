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
	cout<<"��ӭ�����ճ̹�����"<<endl;
	sleep(1);
	cout<<"�������������:";
	cin>>ming;
	cout<<"��ӭ"<<ming<<"��"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"��������Ҫ��ʲô"<<endl;
		cout<<"1.�����ճ�"<<endl;
		cout<<"2.�����ճ�"<<endl;
		cout<<"3.��Ҫ���?����3"<<endl;
		cout<<"4.�˳�(��������ȫ����ʧ)"<<endl;
		cin>>n;
		if(n==1){
			cout<<"�������ճ�����:";
			cin>>str;
			cout<<"���!"<<endl; 
			s[cnt].name=str; 
			cnt++;
		}
		else if(n==2){
			system("cls");
			cout<<"��������Ҫ��ʲô"<<endl;
			cout<<"1.���һ����"<<endl;
			cout<<"2.�鿴�����ճ�"<<endl;
			cin>>w;
			if(w==1){
				ans2=0;
				cout<<"��������ճ̵�����:";
				cin>>str;
				for(int i=1;i<=cnt;i++){
					if(s[i].name==str&&s[i].flag==0){
						cout<<"�õģ����ճ��Ѿ����"<<endl;
						ans2=1;
						s[i].flag=1;
					}
				}
				if(ans2==0){
					cout<<"δ�ҵ����ճ�"<<endl;
				}
			}
			else if(w==2){
				cout<<"����������δ��ɵ�����"<<endl;
				for(int i=1;i<=cnt;i++){
					if(s[i].flag==0){
						cout<<s[i].name<<endl;
					}
				}
				system("pause");
				system("cls");
			}
			else{
				cout<<"����"<<endl;
			}
		}
		else if(n==3){
			cout<<"���������ѧ���Ļ���"<<endl<<"������2������ǵĻ�"<<endl<<"����1"<<endl;
			cin>>a;
			if(a==1){
				w=rand()%2;
				if(w==0){
					cout<<"��һЩ�����!"<<endl;
					sleep(1);
					cout<<"Ҫ��Ҫ��������Ū? 1.�õ� 2.����"<<endl;
					cin>>b;
					if(b==1){
						system("start ����.exe");
					}
					else if(b==2){
						cout<<"�ð�"<<endl;
						system("pause");
						system("cls");
					}
					else{
						cout<<"����"<<endl;
					}
				}
				else if(b==1){
					cout<<"��һ����Ϸ���ò��� 1.�� 2.����"<<endl;
					cin>>b;
					if(b==1){
						cout<<"�õ�"<<endl;
						sleep(1);
						system("start game.exe");
					}
					else if(b==2){
						cout<<"�ð�"<<endl;
						sleep(1);
						system("cls");
					}
					else{
						cout<<"???"<<endl;
					}
				}
				else{
					cout<<"ѧϰ��"<<endl; 
				}
			}
			else if(a==2){
				cout<<"��������Сѧ�������ԡ�����"<<endl;
				sleep(1);
				system("cls");
			}
			else{
				cout<<"����"<<endl;
			}
		}
		else if(n==4){
			cout<<"��лʹ��"<<endl;
			sleep(1);
			return 0;
		}
	}
}
