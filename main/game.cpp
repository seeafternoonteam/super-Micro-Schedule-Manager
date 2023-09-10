#include <iostream>
#include <cstdlib>
using namespace std;
int a,b;
int main(){
	cout<<"欢迎来到猜数游戏"<<endl;
	cout<<"范围1~100"<<endl;
	b=rand()%99+1;
	while(1==1){
		cout<<"请输入猜的:";
		cin>>a;
		if(a>b){
			cout<<"大了"<<endl;
		}
		else if(a<b){
			cout<<"小了"<<endl;
		}
		else{
			cout<<"猜对了!"<<endl;
			break;
		}
	}
} 
