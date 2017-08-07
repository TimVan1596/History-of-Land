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
		unsigned long long ID; //ѧ��
		string name; //����
		string classData; //�༶��Ϣ
		string duty; //ְ��

		void show() {
			cout<<"ѧ�� ��"<<this->ID<<endl;
			cout<<"���� ��"<<this->name<<endl;
			cout<<"�༶��Ϣ ��"<<this->classData<<endl;
			cout<<"ְ�� ��"<<this->duty<<endl<<endl;;
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
	cout<<"�����������ַ������˵�"<<endl;
	cin>>nothing;
}


int main() {
	cout<<"���ǵ�С���"<<" �����ߺ������ "<<endl;
	student TimVan(316202061007,"������","���1610","�鳤");
	student Chen(316202061006,"�̽���","���1610","��Ա");
	student Huang(316202061010,"���ı�","���1610","��Ա");
	student Zhang(316202061053,"��Ⱥ","���1610","��Ա");
	team.push_back(TimVan);
	team.push_back(Chen);
	team.push_back(Huang);
	team.push_back(Zhang);



	show();
	while(1) {
		cout<<"�������ֽ��в���"<<endl;
		cout<<"1.����"<<endl;
		cout<<"2.ɾ��"<<endl;
		cout<<"3.�޸�"<<endl;
		cout<<"4.����"<<endl;
		cout<<"5.��ѧ�Ŵ�С��������"<<endl;
		cout<<"0.�鿴����ȺԱ��Ϣ"<<endl;

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
	unsigned long long ID; //ѧ��
	string name; //����
	string classData; //�༶��Ϣ
	string duty; //ְ��
	cout<<"������ѧ�� ��"<<endl;
	cin>>ID;
	cout<<"���� ��"<<endl;

	cin>>name;
	cout<<"�༶��Ϣ ��"<<endl;

	cin>>classData;
	cout<<"ְ�� ��"<<endl;;

	cin>>duty;

	student newStuednt(ID,name,classData,duty);
	team.push_back(newStuednt);

}

int find() {
	cout<<"��������Ҫ���ҵ�ͬѧ��ѧ�� ��"<<endl;;

	unsigned long long findID;
	cin>>findID;
	vector<student>::iterator it;
	for(it=team.begin(); it!=team.end(); it++) {
		student cache = *it;
		if(cache.ID == findID) {
			cout<<"�Ѿ��ҵ� "<<endl;
			cache.show();
			return 0;
		}
	}
	cout<<"���޴��� ��"<<endl;;

}

int del() {
	cout<<"��������Ҫɾ����ͬѧ��ѧ�� ��"<<endl;;

	unsigned long long findID;
	cin>>findID;
	vector<student>::iterator it;
	for(it=team.begin(); it!=team.end(); it++) {
		student cache = *it;
		if(cache.ID == findID) {
			cout<<"�ҵ� ���Ѿ�ɾ��"<<endl;
			team.erase(it);
			return 0;
		}
	}
	cout<<"���޴��� ��"<<endl;;

}

int sortData() {
	sort(team.begin(),team.end(),cmp);
	cout<<"������� "<<endl;;
}

int edit() {
	cout<<"��������Ҫ�޸ĵ�ͬѧ��ѧ�� ��"<<endl;;

	unsigned long long findID;
	cin>>findID;
	vector<student>::iterator it;
	for(it=team.begin(); it!=team.end(); it++) {
		student cache = *it;
		if(cache.ID == findID) {
			cout<<"�ҵ� ����ʼ�޸ģ�"<<endl;
			unsigned long long ID; //ѧ��
			string name; //����
			string classData; //�༶��Ϣ
			string duty; //ְ��
			cout<<"������ѧ�� ��"<<endl;
			cin>>ID;
			cout<<"���� ��"<<endl;

			cin>>name;
			cout<<"�༶��Ϣ ��"<<endl;

			cin>>classData;
			cout<<"ְ�� ��"<<endl;;

			cin>>duty;

			student newStuednt(ID,name,classData,duty);
			*it = newStuednt;
			break;
		}
	}
	cout<<"���޴��� ��"<<endl;;

}



