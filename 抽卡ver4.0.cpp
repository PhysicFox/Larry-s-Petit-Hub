//2019.10 ver1.0 ѧ����칫��ѧϰ����
//2020.2Ѱ��ģ���� Ver2.0������ ������ҵ�Ľ�� 
//������Σ����Լ#0ǰ 
//2020.4 ver3.0 һ�����ر�� ӥ��������ô��� ��Ҳ�ǼӰѾ���ʿ
//2020.5 ver4.0 һ����� ���� txt
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<cstring>
using namespace std;
int a, b, c, d, e;
char ss[100][10] = { "W","�µ�","��Ӱ","���","�̶��","��","��","��","������","�����","Ī˹����","����ʹ","�ƽ�֮��","��ܽ����","���ŷ���","����","��������","ҹݺ","����","����","˹����","��","��","������" };
char aa[100][10] = { "����","����","��ɰ","��","ѩ��","�Һ�","���忨","έ��","����","����","�׿�","������","�����^","�ݶ�","�¿���˹","ܽ����","��������","������","����","�׽�","����","���","÷��","��Ĭ","������","�ٹ�","��","����","����","������˹","������","����","��ѩ","����","��","ʨЫ","ʳ����","ҹħ","ʫ����","���Ϳ�˹","�Ǽ�" };
char bb[100][10] = { "�̵�","���ȶ�","��""����","ҹ��","Զɽ","������","����","��ѩ","�����","�춹","�ű�","����","˪Ҷ","Ľ˹","��","����","ĩҩ","����ʦ","�Ƿ�","������","����","�ɫ","����","����","�Է�","������","������","�ҽ���","����","÷" };
char cc[100][10] = { "��","���","����","õ��ɯ","���","�׸�³","����˿","����","ܽ��","������","ʷ������","����","�ձ�","�¼�ҹ","�ߵ�","���տ�" };
string up6[2];
string up5[3]; //�����������ֵ �������� ��������ϴ�ÿһ������Ҫ�ִ������
int main() {
	system("color F0");
	int c6 = 0, c5 = 0, c4 = 0, c3 = 0, u6 = 2, u5 = 3;
	for (int i = 0; i < 100; i++) {
		if (ss[i][0]) c6++;
		if (aa[i][0]) c5++;
		if (bb[i][0]) c4++;
		if (cc[i][0]) c3++;//����
	}
	time_t timer;
	time(&timer);
	tm* t_tm = localtime(&timer);

	int year = t_tm->tm_year + 1900;
	int month = t_tm->tm_mon + 1;
	int day = t_tm->tm_mday;
	int hour = t_tm->tm_hour;
	int minute = t_tm->tm_min;
	ofstream out;
	out.open("ʹ��˵��.txt");
	out << "\t\t\t��ӭʹ�����շ��۳鿨ģ����" << endl;
	out << "1.�������󣬰��������ָ����ʾ�������������ֺ󰴻س���ִ��" << endl;
	out << "2.�����Ҫʹ�ø�������ϵͳ�����������ͬһĿ¼�´���6a.txt,5a.txt(�ֱ��Ӧ6�ǣ�5��)������Ҫ��ΪANSI" << endl;
	out << "����ı����ʽ���ٶȣ���" << endl;
	out << "ף����Ϸ�������\t\t\t\t\t\t\t LarryLiu" << endl;
	out.close();
HEAD:
	cout << "������" << year << "��" << month << "��" << day << "��" << hour << "ʱ" << minute << "��" << endl;
	cout << "-------------------------�����������շ��۳鿨ģ����--------------------------" << endl;
	cout << "�����Ķ��뱾����λ��ͬһĿ¼��ʹ��˵��" << endl;
	cout << "�Ƿ�����Ա�����Up������1���� ����0�ر�" << endl;

	int open;
	cin >> open;//��charдY/N�ڵڶ�����֧����for��ȷʵ���鷳 ����취��ʲôͷ���� 
LOOP:if (open == 1) {
	ifstream fin, infile;
	fin.open("6a.txt");//����6��up 
	if (!fin)
	{
		cout << "Failed to open 6a.txt, Please retry" << endl;
		goto HEAD;
	}
	else
	{
		for (int i = 0; i < 2; i++)
		{
			fin >> up6[i];//���� 
		}
	}
	infile.open("5a.txt");
	if (!infile)
	{
		cout << "Failed to open 5a.txt,Please retry" << endl;
		goto HEAD;
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			infile >> up5[i];
		}
	}
	fin.close();
	infile.close();
	cout << "���¸�Ա�������������" << endl;
	cout << "������" << up6[0] << "��" << " ";
	for (int j = 1; j < 2; j++)
		cout << "��" << up6[j] << "��" << " ";
	cout << endl;
	cout << "�����" << up5[0] << "��" << " ";
	for (int j = 1; j < 3; j++)
		cout << "��" << up5[j] << "��" << " ";
}
else if (open == 0) {
	goto restart;
}
else {
	cout << "Error����" << endl;
	goto HEAD;
}
// six���ڿ������ǵı��� ����ͬ��cnt6���ڼ�¼������ǵĴ��� ������ͬ��cntΪ�鿨�ܴ���
restart:	double six = 9800, five = 9000, four = 4000, cnt6 = 0, cnt5 = 0, cnt4 = 0, cnt3 = 0, cnt = 0;//��ǣ��޷�����ر�/����up��Ȳ���-2����-1�㵽 cnt���Ҳ���cnt������Ϊ��İ취�� 
	// baodi���ڴ�������  chouΪ�鿨�����Լ�һЩ��������
int baodi = 0, chou;
while (1) {
	cout << endl << "��ǰ���Ǹ�Ա�����:" << (10000 - six) / 100 << "%";
	cout << endl << "������Ѱ�ô���;����0����;����-1���������;����-2����(�ر�)�����Up" << endl;
	cin >> chou;
	cnt += chou;
	if (chou == 0) {
		break;
	}
	else if (chou == -1) {
		baodi = 0;
		cnt = 0;
		cnt6 = 0;
		cnt5 = 0;
		cnt4 = 0;
		cnt3 = 0;
		cout << "������������";
		goto restart;
	}
	else if (chou == -2) {
		if (open) {
			open = 0;
			cout << "��Ա����������ѹر�";//�����chou�����-2��-1�㵽cnt������� 
			goto restart;
		}
		else {
			open = 1;
			goto LOOP;//�����chou�����-2��-1�㵽cnt������� 
		}
	}
	srand(time(0));
	for (int i = 0; i < chou; i++) {
		// ��������1~10000��ϡ�ж�
		// �ޱ�������� a>=9800(2%����) ʱ�����ǣ�a>=9000(8%����)�����ǣ�
		int a = rand() % 10000;
		if (a >= six) {
			// ������� ���㱣��
			baodi = 0;
			six = 9800;
			five = 9000;
			four = 4000;
			if (open) {
				// b��������50%��Up��û����  c�����鵽�ĸ�Up��Ա  d��������ĸ���Ա
				// ����ĸ�����ʵ����׼ȷ����Ϊ��ĸ�Ա��Ҳ����Up�ĸ�Ա���ͻᵼ��Up�ĸ��ʱ�ʵ��Ҫ��  ���ﻹû�������ķ���(����׼һ�㲻����/����   
				int b = rand() % 2, c = rand() % u6, d = rand() % c6;
				if (b) {
					cout << "�������" << ss[d] << endl;
				}
				else {
					cout << "�������" << up6[c] << endl;
				}
			}
			else cout << "�������" << ss[rand() % c6] << endl;
			// ���� 
			cnt6++;
		}
		else if (a >= five) {
			int b = rand() % 2, c = rand() % u5, d = rand() % c5;
			if (open) {
				if (b) {
					cout << "������" << aa[d] << endl;
				}
				else {
					cout << "������" << up5[c] << endl;
				}
			}
			else cout << "������" << aa[d] << endl;
			baodi++;
			cnt5++;
		}
		else if (a >= four) {
			cout << "�����";
			int b = rand() % c4;
			cout << bb[b] << endl;
			baodi++;
			cnt4++;
		}
		else {
			cout << "����";
			int b = rand() % c3;
			cout << cc[b] << endl;
			baodi++;
			cnt3++;
		}
		// �ҲҲ� ���׿�ʼ   
		if (baodi >= 50) {
			// ���Ǻ����������Ǳ��ʸı� �����ǻ���ô�仯  ����Ĭ����8:50:40��ԭ�����ı��������µ� 
			six -= 200; // ����-200��Ϊ-2% 
			five = six - six / 98 * 8;
			four = five - six / 98 * 50;
		}
	}

	cout << "����Ѱ��" << cnt << "��" << endl;
	cout << "Ѱ�ù����" << cnt6 << "����������Ա�������Ϊ" << cnt6 / cnt * 100 << "%" << endl;
	cout << "Ѱ�ù����" << cnt5 << "���������Ա�������Ϊ" << cnt5 / cnt * 100 << "%" << endl;
	cout << "Ѱ�ù����" << cnt4 << "��������Ա�������Ϊ" << cnt4 / cnt * 100 << "%" << endl;
	cout << "Ѱ�ù����" << cnt3 << "�������Ա�������Ϊ" << cnt3 / cnt * 100 << "%" << endl;
	cout << "-----------------------�ָ���------------------------";
}

system("pause");
return 0;
}


