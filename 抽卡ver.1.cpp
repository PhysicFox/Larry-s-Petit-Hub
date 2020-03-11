#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
string ss[20]={"阿","年","刻俄柏","煌","能天使","艾雅法拉","赫拉格","星熊","银灰","闪灵","夜莺","黑","麦哲伦","陈","推进之王","安洁莉娜","伊芙利特","塞雷娅","斯卡蒂","莫斯提马"};
string aa[34]={"苇草","槐琥","灰喉","布洛卡","送葬人","红","华法林","德克萨斯","赫默","梅尔","拉普兰德","白面鸮","陨星","星极","雷蛇","芙兰卡","可颂","空","守林人","白金","蓝毒","幽灵鲨","狮蝎","崖心","食铁兽","格劳克斯","凛冬","普罗旺斯","临光","天火","夜魔","初雪","真理","诗怀雅"};
string bb[25]={"安比尔","红云","角峰","杜宾","深海色","白雪","远山","流星","夜烟","末药","霜叶","猎蜂","慕斯","砾","暗锁","阿消","地灵","调香师","清道夫","蛇屠箱","古米","红豆","格雷伊","苏苏洛","桃金娘"};
string cc[18]={"克洛丝","米格鲁","芬","安德切尔","史都华德","卡缇","斑点","芙蓉","炎熔","香草","玫兰莎","月见夜","梓兰","空爆","安塞尔","翎羽","泡普卡","梅"};
int main () {

    srand(time(NULL));
	int six=98,least=0,draw,cnt=0;
	double cnt6=0, cnt5=0, cnt4=0, cnt3=0;
	while(1){
		cout << "请输入需要抽卡的次数,输入0返回上一界面" << endl;
		cout << "当前六星出货率:"<< 100-six <<"%"<< endl; 
		cout<<"抽取次数________"<<endl;
		cin >> draw;
		
		cnt+=draw;
		if(draw==0||draw<=0){
			break;
		} 
		for (int i=0; i<draw; i++){
			int a=rand()%100;
			if(a>=six) {
			least=0;
			six=98;
			int b=rand()%20;
			cout <<"★★★★★★"<< ss[b]<< endl;
			cnt6++;
			}else if(a>=90){
				cout<<"★★★★★";
				int b=rand()%34;
				cout<< aa[b] << endl;
				least++;
				cnt5++;
			}else if(a>=40){
				cout<<"★★★★";
				int b=rand()%25;
				cout<< bb[b] << endl;
				least++;
				cnt4++;
			}else {
				cout <<"★★★";
				int b=rand()%18;
				cout << cc[b] << endl;
				least++;
				cnt3++;
	     	}
	     	if(least>=50){
	     		six-=2;
	     		least=0;
	        }
	    } cout<< "你一共抽出了"<< cnt6 << "个★★★★★★！ 爆率为"<< cnt6/cnt*100<< "%"<< endl;
            cout<< "你一共抽出了"<< cnt5 << "个★★★★★！ 爆率为"<< cnt5/cnt*100<< "%"<< endl;
			cout<< "你一共抽出了"<< cnt4 << "个★★★★！ 爆率为"<< cnt4/cnt*100<< "%"<< endl;
			cout<< "你一共抽出了"<< cnt3 << "个★★★！ 爆率为"<< cnt3/cnt*100<< "%"<< endl; 
	}

	system("pause");
}
	
		
		
	
		
		
			
			

