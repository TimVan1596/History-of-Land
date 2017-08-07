#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include <stdlib.h>
using namespace std;

class student {
	public:
		student(unsigned long long IIDD,string NAME,string CLASSDATA,string DUTY) :ID(IIDD),name(NAME),classData(CLASSDATA),duty(DUTY) {
		}
		unsigned long long ID; //学号
		string name; //姓名
		string classData; //班级信息
		string duty; //职务

		void show() {
			cout<<"学号 ："<<this->ID<<endl;
			cout<<"姓名 ："<<this->name<<endl;
			cout<<"班级信息 ："<<this->classData<<endl;
			cout<<"职务 ："<<this->duty<<endl<<endl;;
		}

};

vector<student> team;
int show();
int add();
int del();
int find();
int edit();
int sortData();

bool cmp(const student &a,const student &b) {
	return a.ID<b.ID;
}

int pause() {
	int nothing;
	cout<<"输入任意数字返回主菜单"<<endl;
	cin>>nothing;
}


int main() {
	cout<<"我们的小组叫"<<" 我在芜湖玩泥巴 "<<endl;
	student TimVan(316202061007,"范天明","软件1610","组长");
	student Chen(316202061006,"程建军","软件1610","组员");
	student Huang(316202061010,"黄文彬","软件1610","组员");
	student Zhang(316202061053,"张群","软件1610","组员");
	team.push_back(TimVan);
	team.push_back(Chen);
	team.push_back(Huang);
	team.push_back(Zhang);



	show();
	while(1) {
		cout<<"键入数字进行操作"<<endl;
		cout<<"1.增加"<<endl;
		cout<<"2.删除"<<endl;
		cout<<"3.修改"<<endl;
		cout<<"4.查找"<<endl;
		cout<<"5.按学号从小到大排序"<<endl;
		cout<<"0.查看所有群员信息"<<endl;

		int operation = 0;
		cin>>operation;

		if(operation == 0) {
			show();

		} else if(operation == 1) {
			add();
		} else if(operation == 2) {
			del();
		} else if(operation == 3) {
			del();
		} else if(operation == 4) {
			find();
		} else {
			sortData();
		}

		pause();
		system("cls");
	}


}

int show() {
	vector<student>::iterator it;
	for(it=team.begin(); it!=team.end(); it++) {
		student cache = *it;
		cache.show();
	}


}

int add() {
	unsigned long long ID; //学号
	string name; //姓名
	string classData; //班级信息
	string duty; //职务
	cout<<"请输入学号 ："<<endl;
	cin>>ID;
	cout<<"姓名 ："<<endl;

	cin>>name;
	cout<<"班级信息 ："<<endl;

	cin>>classData;
	cout<<"职务 ："<<endl;;

	cin>>duty;

	student newStuednt(ID,name,classData,duty);
	team.push_back(newStuednt);

}

int find() {
	cout<<"请输入你要查找的同学的学号 ："<<endl;;

	unsigned long long findID;
	cin>>findID;
	vector<student>::iterator it;
	for(it=team.begin(); it!=team.end(); it++) {
		student cache = *it;
		if(cache.ID == findID) {
			cout<<"已经找到 "<<endl;
			cache.show();
			return 0;
		}
	}
	cout<<"查无此人 ："<<endl;;

}

int del() {
	cout<<"请输入你要删除的同学的学号 ："<<endl;;

	unsigned long long findID;
	cin>>findID;
	vector<student>::iterator it;
	for(it=team.begin(); it!=team.end(); it++) {
		student cache = *it;
		if(cache.ID == findID) {
			cout<<"找到 ，已经删除"<<endl;
			team.erase(it);
			return 0;
		}
	}
	cout<<"查无此人 ："<<endl;;

}

int sortData() {
	sort(team.begin(),team.end(),cmp);
	cout<<"排序完毕 "<<endl;;
}

int edit() {
	cout<<"请输入你要修改的同学的学号 ："<<endl;;

	unsigned long long findID;
	cin>>findID;
	vector<student>::iterator it;
	for(it=team.begin(); it!=team.end(); it++) {
		student cache = *it;
		if(cache.ID == findID) {
			cout<<"找到 ，开始修改！"<<endl;
			unsigned long long ID; //学号
			string name; //姓名
			string classData; //班级信息
			string duty; //职务
			cout<<"请输入学号 ："<<endl;
			cin>>ID;
			cout<<"姓名 ："<<endl;

			cin>>name;
			cout<<"班级信息 ："<<endl;

			cin>>classData;
			cout<<"职务 ："<<endl;;

			cin>>duty;

			student newStuednt(ID,name,classData,duty);
			*it = newStuednt;
			break;
		}
	}
	cout<<"查无此人 ："<<endl;;

}



