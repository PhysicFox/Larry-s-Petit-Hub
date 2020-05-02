//2019.10 ver1.0 学生会办公室学习产物
//2020.2寻访模拟器 Ver2.0来力！ 不务正业的结果 
//更新至危机合约#0前 
//2020.4 ver3.0 一周年特别版 鹰角整了这么多活 我也是加把劲骑士
//2020.5 ver4.0 一周年后 加入 txt
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<cstring>
using namespace std;
int a, b, c, d, e;
char ss[100][10] = { "W","温蒂","傀影","风笛","刻俄柏","年","阿","煌","麦哲伦","塞雷娅","莫斯提马","能天使","推进之王","伊芙利特","艾雅法拉","闪灵","安洁莉娜","夜莺","星熊","银灰","斯卡蒂","陈","黑","赫拉格" };
char aa[100][10] = { "巫恋","惊蛰","慑砂","吽","雪雉","灰喉","布洛卡","苇草","拜松","槐琥","炎客","送葬人","白面鸮","凛冬","德克萨斯","芙兰卡","拉普兰德","幽灵鲨","蓝毒","白金","陨星","天火","梅尔","赫默","华法琳","临光","红","雷蛇","可颂","普罗旺斯","守林人","崖心","初雪","真理","空","狮蝎","食铁兽","夜魔","诗怀雅","格劳克斯","星极" };
char bb[100][10] = { "刻刀","安比尔","宴""清流","夜烟","远山","杰西卡","流星","白雪","清道夫","红豆","杜宾","缠丸","霜叶","慕斯","砾","暗索","末药","调香师","角峰","蛇屠箱","古米","深海色","地灵","阿消","猎蜂","格雷伊","苏苏洛","桃金娘","红云","梅" };
char cc[100][10] = { "芬","香草","翎羽","玫兰莎","卡缇","米格鲁","克洛丝","炎熔","芙蓉","安赛尔","史都华德","梓兰","空爆","月见夜","斑点","泡普卡" };
string up6[2];
string up5[3]; //行数控制最大值 赋给个数 列数解决上次每一个概率要手打的问题
int main() {
	system("color F0");
	int c6 = 0, c5 = 0, c4 = 0, c3 = 0, u6 = 2, u5 = 3;
	for (int i = 0; i < 100; i++) {
		if (ss[i][0]) c6++;
		if (aa[i][0]) c5++;
		if (bb[i][0]) c4++;
		if (cc[i][0]) c3++;//计数
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
	out.open("使用说明.txt");
	out << "\t\t\t欢迎使用明日方舟抽卡模拟器" << endl;
	out << "1.进入程序后，按照需求和指令提示操作，输入数字后按回车键执行" << endl;
	out << "2.如果需要使用概率提升系统，请在与程序同一目录下创建6a.txt,5a.txt(分别对应6星，5星)，编码要求为ANSI" << endl;
	out << "不会改编码格式，百度，请" << endl;
	out << "祝在游戏里出货！\t\t\t\t\t\t\t LarryLiu" << endl;
	out.close();
HEAD:
	cout << "现在是" << year << "年" << month << "月" << day << "日" << hour << "时" << minute << "分" << endl;
	cout << "-------------------------拉里秘制明日方舟抽卡模拟器--------------------------" << endl;
	cout << "请先阅读与本程序位于同一目录的使用说明" << endl;
	cout << "是否开启干员获得率Up？输入1开启 输入0关闭" << endl;

	int open;
	cin >> open;//用char写Y/N在第二个分支跳进for里确实很麻烦 解决办法有什么头猪吗？ 
LOOP:if (open == 1) {
	ifstream fin, infile;
	fin.open("6a.txt");//输入6星up 
	if (!fin)
	{
		cout << "Failed to open 6a.txt, Please retry" << endl;
		goto HEAD;
	}
	else
	{
		for (int i = 0; i < 2; i++)
		{
			fin >> up6[i];//数组 
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
	cout << "以下干员获得率提升！！" << endl;
	cout << "★★★★★★「" << up6[0] << "」" << " ";
	for (int j = 1; j < 2; j++)
		cout << "「" << up6[j] << "」" << " ";
	cout << endl;
	cout << "★★★★★「" << up5[0] << "」" << " ";
	for (int j = 1; j < 3; j++)
		cout << "「" << up5[j] << "」" << " ";
}
else if (open == 0) {
	goto restart;
}
else {
	cout << "Error发生" << endl;
	goto HEAD;
}
// six用于控制六星的爆率 四五同；cnt6用于记录抽出六星的次数 三四五同；cnt为抽卡总次数
restart:	double six = 9800, five = 9000, four = 4000, cnt6 = 0, cnt5 = 0, cnt4 = 0, cnt3 = 0, cnt = 0;//标记：无法解决关闭/开启up后既不把-2或者-1算到 cnt里且不将cnt数重置为零的办法… 
	// baodi用于触发保底  chou为抽卡次数以及一些其他功能
int baodi = 0, chou;
while (1) {
	cout << endl << "当前六星干员获得率:" << (10000 - six) / 100 << "%";
	cout << endl << "请输入寻访次数;输入0返回;输入-1清零计数器;输入-2开启(关闭)获得率Up" << endl;
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
		cout << "计数器已清零";
		goto restart;
	}
	else if (chou == -2) {
		if (open) {
			open = 0;
			cout << "干员获得率提升已关闭";//解决把chou输入的-2和-1算到cnt里的问题 
			goto restart;
		}
		else {
			open = 1;
			goto LOOP;//解决把chou输入的-2和-1算到cnt里的问题 
		}
	}
	srand(time(0));
	for (int i = 0; i < chou; i++) {
		// 获得随机数1~10000定稀有度
		// 无保底情况下 a>=9800(2%几率) 时是六星；a>=9000(8%几率)是五星；
		int a = rand() % 10000;
		if (a >= six) {
			// 抽出六星 清零保底
			baodi = 0;
			six = 9800;
			five = 9000;
			four = 4000;
			if (open) {
				// b用来决定50%的Up有没有歪  c决定抽到哪个Up干员  d决定歪出哪个干员
				// 这里的概率其实并不准确，因为歪的干员中也存在Up的干员，就会导致Up的概率比实际要高  这里还没想出解决的方法(不过准一点不好吗/滑稽   
				int b = rand() % 2, c = rand() % u6, d = rand() % c6;
				if (b) {
					cout << "★★★★★★" << ss[d] << endl;
				}
				else {
					cout << "★★★★★★" << up6[c] << endl;
				}
			}
			else cout << "★★★★★★" << ss[rand() % c6] << endl;
			// 计数 
			cnt6++;
		}
		else if (a >= five) {
			int b = rand() % 2, c = rand() % u5, d = rand() % c5;
			if (open) {
				if (b) {
					cout << "★★★★★" << aa[d] << endl;
				}
				else {
					cout << "★★★★★" << up5[c] << endl;
				}
			}
			else cout << "★★★★★" << aa[d] << endl;
			baodi++;
			cnt5++;
		}
		else if (a >= four) {
			cout << "★★★★";
			int b = rand() % c4;
			cout << bb[b] << endl;
			baodi++;
			cnt4++;
		}
		else {
			cout << "★★★";
			int b = rand() % c3;
			cout << cc[b] << endl;
			baodi++;
			cnt3++;
		}
		// 惨惨惨 保底开始   
		if (baodi >= 50) {
			// 不是很清楚如果六星爆率改变 其它星会怎么变化  这里默认以8:50:40即原比例的比例进行下调 
			six -= 200; // 六星-200即为-2% 
			five = six - six / 98 * 8;
			four = five - six / 98 * 50;
		}
	}

	cout << "共计寻访" << cnt << "次" << endl;
	cout << "寻访共获得" << cnt6 << "个★★★★★★干员！获得率为" << cnt6 / cnt * 100 << "%" << endl;
	cout << "寻访共获得" << cnt5 << "个★★★★★干员！获得率为" << cnt5 / cnt * 100 << "%" << endl;
	cout << "寻访共获得" << cnt4 << "个★★★★干员！获得率为" << cnt4 / cnt * 100 << "%" << endl;
	cout << "寻访共获得" << cnt3 << "个★★★干员！获得率为" << cnt3 / cnt * 100 << "%" << endl;
	cout << "-----------------------分割线------------------------";
}

system("pause");
return 0;
}


