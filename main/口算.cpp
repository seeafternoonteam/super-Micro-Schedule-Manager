#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
double t,f;
int a,b,c,d,r,n,cnt,flag,ans,w;
int main(){
	srand((unsigned int)time(NULL));
	cout<<"��ӭʹ��С�Ϳ���"<<endl;
	sleep(1);
	cout<<"�������������:";
	string name;
	cin>>name;
	cout<<"��ӭʹ�øó���,"<<name<<"!"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"��������Ҫ��ʲô"<<endl;
		cout<<"1.�������"<<endl<<"2.�˳�"<<endl;
		cin>>n;
		if(n==1){
				cout<<"��Χ1~";
				cin>>ans;
				cout<<"�õ�"<<endl;
				sleep(1);
				system("cls");
				cout<<"��ʼ"<<endl;
				cout<<"Ҫ��������:";
				cin>>cnt;
				if(cnt<=0){
					cout<<"gun"<<endl;
					cout<<"��һ��"<<endl;
					sleep(1);
					cnt=1;
					system("cls");
				}
				for(int i=1;i<=cnt;i++){
					a=rand()%(ans-1)+1;
					b=rand()%(ans-1)+1;
					c=rand()%3;
					cout<<"����"<<endl;
					if(c==0){
						cout<<a<<"+"<<b<<"=";
						cin>>d;
						if(d==a+b){
							cout<<"��ȷ"<<endl; 
							flag++;
						} 
						else{
							cout<<"����"<<endl;
						}
					}
					else if(c==1){
						cout<<a<<"-"<<b<<"=";
						cin>>d;
						if(d==a-b){
							cout<<"��ȷ"<<endl;
							flag++;
						}
						else{
							cout<<"����"<<endl;
						}
					}
					else{
						cout<<a<<"x"<<b<<"=";
						cin>>d;
						if(d==a*b){
							cout<<"��ȷ"<<endl;
							flag++;
						}
						else{
							cout<<"����"<<endl;
						}
					}
				}
				cout<<"����ͳ����"<<endl;
				sleep(1);
				cout<<"һ����"<<cnt<<"����,������"<<flag<<"��"<<endl;
				system("pause");
				system("cls");
		}
		else if(n==2){
			cout<<"ллʹ��"<<endl;
			sleep(1);
			return 0;
		} 
		else{
			cout<<"����"<<endl;
		}
	}
}
