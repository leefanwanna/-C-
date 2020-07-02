#include<iostream>
#include<string>
#include<math.h>
#include<time.h>
#include<iomanip>
#include<fstream>
#include<Windows.h>
using std::cout;
using std::cin;
using std::wcin;
using std::wcout;
using std::endl;
using std::string;
using std::setw;
using std::ifstream;
using std::ofstream;
class StudentMsg_0132lf {
protected:
	string name_0132lf;
	string sex_0132lf;
	string num_0132lf;
	double score1_0132lf, score2_0132lf, score3_0132lf;
	double SumScore_0132lf;
};//ѧ�������̳���
class Student_0132lf:protected StudentMsg_0132lf {
public:
	//Student_0132lf* head_0132lf;
	Student_0132lf* next_0132lf;
	Student_0132lf();
	~Student_0132lf();
	void GetDate_0132lf();//������Ϣ��������
	void GetDate_0132lf(string num_0132lf, string name_0132lf, string sex_0132lf,
		double score1_0132lf, double score2_0132lf, double score3_0132lf, 
		double SumScore_0132lf);
	void GetSomeDate_0132lf();
	void SetFakeDate_0132lf();//�������������Ϣ��ɧ���Ĺ���
	void SetSomeFakeDate_0132lf();
	void FindDate_0132lf();//������Ϣ
	void FindDateByName_0132lf();
	void FindDateByNum_0132lf();
	void PrintDate_0132lf(Student_0132lf* p_0132lf);//����ڵ���Ϣ
	void PrintDate_0132lf();
	void PrintAllDate_0132lf();
	void SortDate_0132lf();//����
	void DelDate_0132lf();//ɾ����Ϣ
	void DelAllDate_0132lf();//���������Ϣ
	void DelFileDate_0132lf();//���Ӳ����Ϣ
	void LoadDate_0132lf();//��ȡ������Ϣ
	void SaveDate_0132lf();//�������ݵ�����
	void ChangeDate_0132lf();//��������
	void Menu_0132lf();
};

//���캯����ʼ���б�
Student_0132lf::Student_0132lf() {
	next_0132lf = NULL;
}


Student_0132lf::~Student_0132lf() {

}
void Student_0132lf::GetDate_0132lf(string num_0132lf, string name_0132lf, string sex_0132lf,
	double score1_0132lf, double score2_0132lf, double score3_0132lf, double SumScore_0132lf) {
	Student_0132lf* temp_0132lf = this;
	while (temp_0132lf->next_0132lf) {
		temp_0132lf = temp_0132lf->next_0132lf;
	}
	temp_0132lf->next_0132lf = new Student_0132lf;
	temp_0132lf = temp_0132lf->next_0132lf;
	temp_0132lf->num_0132lf = num_0132lf;
	temp_0132lf->name_0132lf = name_0132lf;
	temp_0132lf->sex_0132lf = sex_0132lf;
	temp_0132lf->score1_0132lf = score1_0132lf;
	temp_0132lf->score2_0132lf = score2_0132lf;
	temp_0132lf->score3_0132lf = score3_0132lf;
	temp_0132lf->SumScore_0132lf = SumScore_0132lf;
}

void Student_0132lf::GetDate_0132lf() {
	Student_0132lf* temp_0132lf = this;
	while (temp_0132lf->next_0132lf) {
		temp_0132lf = temp_0132lf->next_0132lf;
	}
	cout <<"������ѧ����Ϣ ��" << endl;
	temp_0132lf->next_0132lf = new Student_0132lf;
	temp_0132lf = temp_0132lf->next_0132lf;
	cout <<endl<< "����:";
	cin >> temp_0132lf->name_0132lf;
	cout << endl << "�Ա�";
	while (cin >> temp_0132lf->sex_0132lf, temp_0132lf->sex_0132lf != "��" && temp_0132lf->sex_0132lf != "Ů") {
		cout << endl << "��ֻ��������|Ů" << endl << "�Ա�:";
	}
	cout << endl << "ѧ�ţ�";
	while (cin >> temp_0132lf->num_0132lf, temp_0132lf->num_0132lf.length() != 12) {
		cout << endl << "��������ȷ��ѧ�ţ�12λ��" << endl << "ѧ�ţ�";
	}
	cout << endl << "A�Ρ�B�Ρ�C�γɼ�(�ո����)��";
	while (cin >> temp_0132lf->score1_0132lf >> temp_0132lf->score2_0132lf >> temp_0132lf->score3_0132lf, 1) {
		if (temp_0132lf->score1_0132lf < 0 || temp_0132lf->score1_0132lf > 100) {
			cout << "����ȷ�������Ƴɼ�[0,100]" << endl;
		}
		else if (temp_0132lf->score2_0132lf < 0 || temp_0132lf->score2_0132lf > 100) {
			cout << "����ȷ�������Ƴɼ�[0,100]" << endl;
		}
		else if (temp_0132lf->score3_0132lf < 0 || temp_0132lf->score3_0132lf > 100) {
			cout << "����ȷ�������Ƴɼ�[0,100]" << endl;
		}
		else
			break;
	}
	temp_0132lf->SumScore_0132lf = temp_0132lf->score1_0132lf + temp_0132lf->score2_0132lf + temp_0132lf->score3_0132lf;
}
void Student_0132lf::GetSomeDate_0132lf() {
	int n_0132lf;
	cout << "����������¼���������";
	cin >> n_0132lf;
	while (n_0132lf--) {
		this->GetDate_0132lf();
	}
}
void Student_0132lf::PrintDate_0132lf(Student_0132lf* p_0132lf) {
	cout << "ѧ�ţ�" << p_0132lf->num_0132lf << "  " <<
		"������" << setw(6) << p_0132lf->name_0132lf << " " <<
		"�Ա�" << "  " << p_0132lf->sex_0132lf << "  " <<
		"A��B��C���γɼ���" << setw(4) << p_0132lf->score1_0132lf << setw(4) <<
		p_0132lf->score2_0132lf << setw(4) <<
		p_0132lf->score3_0132lf << " " <<
		"�ܳɼ���" << p_0132lf->SumScore_0132lf << endl;
}
void Student_0132lf::PrintDate_0132lf() {
	cout << "������" << setw(6) << name_0132lf << " " <<
		"�Ա�" << "  " << sex_0132lf << "  " <<
		"ѧ�ţ�" << num_0132lf << "  " <<
		"A��B��C���γɼ���" << setw(5) << score1_0132lf << setw(5) <<
		score2_0132lf << setw(5) <<
		score3_0132lf << " " <<
		"�ܳɼ���" << SumScore_0132lf << endl;
}

void Student_0132lf::PrintAllDate_0132lf() {
	Student_0132lf* temp_0132lf = this->next_0132lf;
	while (temp_0132lf) {
		temp_0132lf->PrintDate_0132lf();
		temp_0132lf = temp_0132lf->next_0132lf;
	}
}
void Student_0132lf::FindDate_0132lf() {
	int flag_0132lf;
	cout << endl << "					�밴��ѡ����ҷ�ʽ(1: �� �� 2��ѧ �� ):";
	cin >> flag_0132lf;
	switch (flag_0132lf) {
	case 1:
		this->FindDateByName_0132lf();
		break;
	case 2:
		this->FindDateByNum_0132lf();
		break;
	default:
		cout << "��ֻ������1��2" << endl;
		break;
	}
	return;
}

void Student_0132lf::FindDateByName_0132lf() {
	cout << "������������ҵ����֣�";
	string tname_0132lf;
	cin >> tname_0132lf;
	int flag_0132lf = 0;
	
	Student_0132lf* temp_0132lf = this;
	
	for (; temp_0132lf; temp_0132lf = temp_0132lf->next_0132lf) {
		if (temp_0132lf->name_0132lf == tname_0132lf)
			temp_0132lf->PrintDate_0132lf(), flag_0132lf = 1;
	}
	if (!flag_0132lf)
		cout << endl<< "û���ҵ�������������֣������Ƿ��������" << endl;
}

void Student_0132lf::FindDateByNum_0132lf() {
	cout << "������������ҵ�ѧ�ţ�";
	string tnum_0132lf;
	cin >> tnum_0132lf;
	int flag_0132lf = 0;

	Student_0132lf* temp_0132lf = this;

	for (; temp_0132lf; temp_0132lf = temp_0132lf->next_0132lf) {
		if (temp_0132lf->num_0132lf == tnum_0132lf)
			temp_0132lf->PrintDate_0132lf(), flag_0132lf = 1;
	}
	if (!flag_0132lf)
		cout << endl << "û���ҵ����������ѧ�ţ������Ƿ��������" << endl;
}

void Student_0132lf::LoadDate_0132lf() {
	ifstream in_0132lf;
	in_0132lf.open("student.txt");
	if (in_0132lf.fail()) {
		ofstream("student.txt");
		in_0132lf.open("student.txt");
	}
	//printf("%p ", in_0132lf);
	Student_0132lf* temp_0132lf = this;
	//printf("%p ", this);
	string c_0132lf;
	in_0132lf >> c_0132lf;
	if (in_0132lf.eof()) {
		cout << "����δ�������κ�ѧ����Ϣ" << endl;
		return;
	}
	in_0132lf.seekg(0);
	while (!in_0132lf.eof()) {
		string tnum_0132lf;
		string tname_0132lf;
		string tsex_0132lf;
		double tscore1_0132lf;
		double tscore2_0132lf;
		double tscore3_0132lf;
		double tSumScore_0132lf;
		in_0132lf >> tnum_0132lf >> tname_0132lf >> tsex_0132lf >>
			tscore1_0132lf >> tscore2_0132lf >> tscore3_0132lf >> tSumScore_0132lf;
		//cout << tnum_0132lf << tname_0132lf << tsex_0132lf <<
			//tscore1_0132lf << tscore2_0132lf << tscore3_0132lf << tSumScore_0132lf;
		this->GetDate_0132lf(tnum_0132lf,tname_0132lf,tsex_0132lf,
			tscore1_0132lf,tscore2_0132lf,tscore3_0132lf,tSumScore_0132lf);
		in_0132lf.get();
		if (in_0132lf.peek() == EOF)
			break;
	}
	in_0132lf.close();
	cout << "��Ϣ�������" << endl;
}

void Student_0132lf::SaveDate_0132lf() {
	ofstream file_0132lf;
	file_0132lf.open("student.txt");
	if (!file_0132lf) {
		cout << "save error" << endl;
		return;
	}
	Student_0132lf* temp_0132lf = this;
	temp_0132lf = temp_0132lf->next_0132lf;
	while (temp_0132lf) {
		file_0132lf<< temp_0132lf->num_0132lf << "  " <<
			"  " << setw(8) << temp_0132lf->name_0132lf << " " <<
			"  " << "  " << temp_0132lf->sex_0132lf << "  " <<
			"  " << setw(6) << temp_0132lf->score1_0132lf<<"  "
			<< setw(6) <<temp_0132lf->score2_0132lf << setw(6) <<
			temp_0132lf->score3_0132lf << " " <<
			"  " << temp_0132lf->SumScore_0132lf << endl;
		temp_0132lf = temp_0132lf->next_0132lf;
	}
	cout << "����ɹ���" << endl;
}

void Student_0132lf::DelFileDate_0132lf() {
	ofstream("student.txt");
}

void Student_0132lf::DelAllDate_0132lf() {
	DelFileDate_0132lf();
	Student_0132lf* temp_0132lf = this->next_0132lf;
	while (temp_0132lf) {
		Student_0132lf* p_0132lf = temp_0132lf;
		temp_0132lf = temp_0132lf->next_0132lf;
		delete p_0132lf;
		p_0132lf = NULL;
	}
	this->DelFileDate_0132lf();
	this->next_0132lf = NULL;
	cout << "����ɹ�" << endl;
}
void Student_0132lf::DelDate_0132lf() {
	cout << "����������ɾ����ѧ�ţ�";
	string tnum_0132lf;
	cin >> tnum_0132lf;
	int flag_0132lf = 0;

	Student_0132lf* temp_0132lf = this;

	for (; temp_0132lf->next_0132lf; temp_0132lf = temp_0132lf->next_0132lf) {
		if (temp_0132lf->next_0132lf->num_0132lf == tnum_0132lf) {
			Student_0132lf* p_0132lf = temp_0132lf->next_0132lf;
			temp_0132lf->next_0132lf = temp_0132lf->next_0132lf->next_0132lf;
			cout << "ɾ����" << endl;
			p_0132lf->PrintDate_0132lf();
			delete p_0132lf;
			p_0132lf = NULL;
			flag_0132lf = 1;
		}
	}
	if (!flag_0132lf)
		cout << endl << "û���ҵ����������ѧ�ţ������Ƿ��������" << endl;
}
void Student_0132lf::ChangeDate_0132lf() {
	cout << "��������������˵�ѧ�ţ�";
	string tnum_0132lf;
	cin >> tnum_0132lf;
	int flag_0132lf = 0;

	Student_0132lf* temp_0132lf = this;
	//���Ż�
	for (; temp_0132lf; temp_0132lf = temp_0132lf->next_0132lf) {
		if (temp_0132lf->num_0132lf == tnum_0132lf) {
			cout << "�����޸ĵ������ǣ�" << endl;
			temp_0132lf->PrintDate_0132lf();
			cout << "������ѧ����Ϣ ��" << endl;
			cout << endl << "����:";
			cin >> temp_0132lf->name_0132lf;
			cout << endl << "�Ա�";
			while (cin >> temp_0132lf->sex_0132lf, temp_0132lf->sex_0132lf != "��" && temp_0132lf->sex_0132lf != "Ů") {
				cout << endl << "��ֻ��������|Ů" << endl << "�Ա�:";
			}
			cout << endl << "ѧ�ţ�";
			while (cin >> temp_0132lf->num_0132lf, temp_0132lf->num_0132lf.length() != 12) {
				cout << endl << "��������ȷ��ѧ�ţ�12λ��" << endl << "ѧ�ţ�";
			}
			cout << endl << "A�Ρ�B�Ρ�C�γɼ�(�ո����)��";
			while (cin >> temp_0132lf->score1_0132lf >> temp_0132lf->score2_0132lf >> temp_0132lf->score3_0132lf, 1) {
				if (temp_0132lf->score1_0132lf < 0 || temp_0132lf->score1_0132lf > 100) {
					cout << "����ȷ�������Ƴɼ�[0,100]" << endl;
				}
				else if (temp_0132lf->score2_0132lf < 0 || temp_0132lf->score2_0132lf > 100) {
					cout << "����ȷ�������Ƴɼ�[0,100]" << endl;
				}
				else if (temp_0132lf->score3_0132lf < 0 || temp_0132lf->score3_0132lf > 100) {
					cout << "����ȷ�������Ƴɼ�[0,100]" << endl;
				}
				else
					break;
			}
			temp_0132lf->SumScore_0132lf = temp_0132lf->score1_0132lf + temp_0132lf->score2_0132lf + temp_0132lf->score3_0132lf;
			flag_0132lf = 1;
			break;
		}
	}
	if (!flag_0132lf)
		cout << endl << "û���ҵ����������ѧ�ţ������Ƿ��������" << endl;
}

void Student_0132lf::SortDate_0132lf() {
	cout << "�����ź��أ���ֻ��ѡ��ѧ������ʽ(ps:�Ҳ��������ˣ�����)��"<<endl;
	if (!this->next_0132lf || !this->next_0132lf->next_0132lf) {
		cout << "����һ��������û���ʸ������أ�" << endl;
		return;
	}
	Student_0132lf* slow_0132lf = this->next_0132lf;
	Student_0132lf* temp_0132lf = slow_0132lf->next_0132lf;//�Ͳ������fast����������
	for (; slow_0132lf->next_0132lf; slow_0132lf = slow_0132lf->next_0132lf) {//���Ż������붯������
		for (temp_0132lf = slow_0132lf->next_0132lf;temp_0132lf ; temp_0132lf = temp_0132lf->next_0132lf) {
			if (slow_0132lf->SumScore_0132lf < temp_0132lf->SumScore_0132lf) {
				string tnum_0132lf = temp_0132lf->num_0132lf;
				string tname_0132lf = temp_0132lf->name_0132lf;
				string tsex_0132lf = temp_0132lf->sex_0132lf;
				double tscore1_0132lf = temp_0132lf->score1_0132lf;
				double tscore2_0132lf = temp_0132lf->score2_0132lf;
				double tscore3_0132lf = temp_0132lf->score3_0132lf;
				double tSumScore_0132lf = temp_0132lf->SumScore_0132lf;
				temp_0132lf->num_0132lf = slow_0132lf->num_0132lf, temp_0132lf->name_0132lf = slow_0132lf->name_0132lf;
				temp_0132lf->sex_0132lf = slow_0132lf->sex_0132lf, temp_0132lf->score1_0132lf = slow_0132lf->score1_0132lf;
				temp_0132lf->score2_0132lf = slow_0132lf->score2_0132lf, temp_0132lf->score3_0132lf = slow_0132lf->score3_0132lf;
				temp_0132lf->SumScore_0132lf = slow_0132lf->SumScore_0132lf;
				slow_0132lf->num_0132lf = tnum_0132lf, slow_0132lf->name_0132lf = tname_0132lf;
				slow_0132lf->sex_0132lf = tsex_0132lf, slow_0132lf->score1_0132lf = tscore1_0132lf;
				slow_0132lf->score2_0132lf = tscore2_0132lf, slow_0132lf->score3_0132lf = tscore3_0132lf;
				slow_0132lf->SumScore_0132lf = tSumScore_0132lf;
			}
		}
	}
	cout << "������ɣ�" << endl;
}
void Student_0132lf::SetFakeDate_0132lf() {
	Sleep(400);
	srand(time(0));
	int flag_0132lf;
	string a_0132lf("�������»�����");
	string b_0132lf("���緲С�Ķ�󺣸�����");
	string c_0132lf = "�����������㱿׳����";
	string tnum_0132lf,tname_0132lf,tsex_0132lf;
	double tscore1_0132lf ,tscore2_0132lf, tscore3_0132lf,tSumScore_0132lf;
	flag_0132lf = rand() % 7*2;
	tname_0132lf += a_0132lf[flag_0132lf];
	tname_0132lf += a_0132lf[flag_0132lf+1];
	if (rand() % 2) {
		flag_0132lf = rand() % 11 * 2;
		tname_0132lf += b_0132lf[flag_0132lf];
		tname_0132lf += b_0132lf[flag_0132lf + 1];
	}
	Sleep(600);
	srand(time(NULL));
	flag_0132lf = rand() % 10 * 2;
	tname_0132lf += c_0132lf[flag_0132lf];
	tname_0132lf += c_0132lf[flag_0132lf + 1];
	if (rand() % 2)
		tsex_0132lf = "��";
	else {
		tsex_0132lf = "Ů";
	}
	cout << tname_0132lf << endl;
	tnum_0132lf = "20193407";
	tnum_0132lf += std::to_string(rand() % 8999 + 1000);
	tscore1_0132lf = double(rand() % 1000) / 10;
	tscore2_0132lf = double(rand() % 1000) / 10;
	tscore3_0132lf = double(rand() % 1000) / 10;
	tSumScore_0132lf = tscore1_0132lf + tscore2_0132lf + tscore3_0132lf;
	this->GetDate_0132lf(tnum_0132lf, tname_0132lf, tsex_0132lf,
		tscore1_0132lf, tscore2_0132lf, tscore3_0132lf, tSumScore_0132lf);
}
void Student_0132lf::SetSomeFakeDate_0132lf() {
	cout << "ȡ�������ĳ������ȡ����" << endl;
	cout << "�������������ɵ�������Ϣ������";
	int flag_0132lf;
	cin >> flag_0132lf;
	while (flag_0132lf--) {
		this->SetFakeDate_0132lf();
	}
}

void Student_0132lf::Menu_0132lf() {
	system("color 2");
	cout << "\t\t\t\t" << "******************************************************" << endl;
	cout << "\t\t\t\t" << "******	    ѧ  ��  ��  Ϣ  ϵ  ͳ		******" << endl;
	cout << "\t\t\t\t" << "******		0.���沢�˳�ϵͳ		******" << endl;
	cout << "\t\t\t\t" << "******		1.��Ӳ�̶�ȡѧ����Ϣ		******" << endl;
	cout << "\t\t\t\t" << "******		2.����µ�ѧ����Ϣ		******" << endl;
	cout << "\t\t\t\t" << "******		3.�������ѧ����Ϣ		******" << endl;
	cout << "\t\t\t\t" << "******		4.ɾ������ѧ����Ϣ		******" << endl;
	cout << "\t\t\t\t" << "******		5.��������ѧ����Ϣ		******" << endl;
	cout << "\t\t\t\t" << "******		6.�޸�����ѧ����Ϣ		******" << endl;
	cout << "\t\t\t\t" << "******		7.�������ѧ����Ϣ		******" << endl;
	cout << "\t\t\t\t" << "******		8.�������ѧ����Ϣ		******" << endl;
	cout << "\t\t\t\t" << "******		9.�������ѧ����Ϣ		******" << endl;
	cout << "\t\t\t\t" << "******		10.��������ѧ����Ϣ		******" << endl;
}

int main() {
	
	Student_0132lf* head_0132lf = new Student_0132lf;//ͷ�ڵ�
	int flag_0132lf = 20;
	while (flag_0132lf--) {
		cout << ">>";
		Sleep(50);
	}
	head_0132lf->LoadDate_0132lf();
	cout << endl <<"�������" << endl;
	Sleep(1000);
	system("pause");
	while (1) {
		system("cls");
		head_0132lf->Menu_0132lf();
		cout << "\t\t\t�밴��ѡ��:";
		cin >> flag_0132lf;
		switch (flag_0132lf) {
			case 0:
				head_0132lf->SaveDate_0132lf();
				exit(0);
			case 1:
				head_0132lf->LoadDate_0132lf();
				break;
			case 2:
				head_0132lf->GetDate_0132lf();
				system("pause");
				break;
			case 3:head_0132lf->GetSomeDate_0132lf();
				system("pause");
				break;
			case 4:
				head_0132lf->DelDate_0132lf();
				system("pause");
				break;
			case 5:
				head_0132lf->FindDate_0132lf();
				system("pause");
				break;
			case 6:
				head_0132lf->ChangeDate_0132lf();
				system("pause");
				break;
			case 7:
				head_0132lf->PrintAllDate_0132lf();
				system("pause");
				break;
			case 8:
				head_0132lf->DelAllDate_0132lf();
				system("pause");
				break;
			case 9:
				head_0132lf->SetSomeFakeDate_0132lf();
				system("pause");
				break;
			case 10:
				head_0132lf->SortDate_0132lf();
				break;
			default:
				break;
		}
	}
	return 0;
}


