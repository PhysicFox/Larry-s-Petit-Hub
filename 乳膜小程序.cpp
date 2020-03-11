#include<iostream>
#include<ctime> 
#include<cstdlib>
using namespace std;

int main()
{
	time_t timer;
	time(&timer);
	tm *t_tm = localtime(&timer);
	int year = t_tm->tm_year + 1900;//年
	int month = t_tm->tm_mon + 1;//月
	int day = t_tm->tm_mday;//日
	int hour = t_tm->tm_hour;//时
	int minute = t_tm->tm_min;//分
	int second = t_tm->tm_sec;//秒
	int yday = t_tm->tm_yday;//一年中的第几天
    char judge;
    int key;
    
    cout<<"您好！欢迎使用2020版拉里秘制小程序！"<<"Welcome!"<<" Bienvenue a la salle de bain!"<<endl;
    	cout<<"                                        "<<endl;
	cout <<"现在是"<< year << "年" << month << "月" << day <<"日"<< hour << "时" << minute << "分" << second<<"秒" << std::endl;
	cout<<"距离2021年的到来还有"<<365-yday<<"天"<<endl; 
	cout<<"                                        "<<endl;
	cout<<"距离实现全面小康还有"<<638-yday<<"天"<<endl;
	cout<<"                                        "<<endl;
	cout<<"距离实现社会主义现代化还有"<<2035-year<<"年"<<endl;
	cout<<"                                        "<<endl; 
	cout<<"距离实现中华民族伟大复兴的中国梦还有"<<2049-year<<"年"<<endl;
	cout<<"                                        "<<endl;
	cout<<"距离党的二十大的召开还有"<<2022-year<<"年"<<endl; 
	cout<<"                                        "<<endl;
	cout<<"今天我们也要做加 把 劲 骑 士"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	cout<<"是否退出？(y=是,n=否)"<<endl;
	cin>> judge;
	if(judge=='y'){
		cout<<"再见"<<endl;
		system("pause");
		return 0; 
	}
	else if(judge=='n')
	{
		cout<<"请输入神必代码"<<endl;
		cout<<"无密码请输入1退出"<<endl;
		cin>>key;
		LOOP:if(key==19260817)
		{
			cout<<"魔法师兄弟，你好！"<<endl; 
			cout<<"MENU"<<endl;
			cout<<"1.他的年龄"<<endl;
			cout<<"2.语 录 收 集"<<endl;
			cout<<"3.随机耗生命小游戏(迫真)"<<endl;
			cout<<"5.维尼的蜂蜜罐"<<endl;
			cout<<"4.支持作者"<<endl;
			cout<<"7.退出程序" <<endl; 
			cout<<"                  "<<endl;
			int choice;
			cout<<"您的选择是？(Please enter a number)"<<endl;
			cin>>choice;
			LOOP1:if(choice==1){
		    	int life;
				cout<<"模块1 他的年龄"<<endl;
				cout<<"他的生日是1926年8月17日"<<endl;
				cout<<"请输入一个年份"<<endl;
				cin>>life;
				if(life<1926&&life>0){
					char judge1;
					cout<<"他还没有诞生于世"<<endl;
			RETURN1:		cout<<"再试一次输入r,返回上级输入e."<<endl;
			 cin>>judge1;
					if(judge1=='r'){
					goto LOOP1;
				}
				    else if(judge1=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN1; 
					}
			}
			    else if(life==1926){
			    	char judge2; 
					cout<<"这一年的8月17日，他在江苏省扬州市诞生力"<<endl;
			RETURN2:	    cout<<"返回上级输入r,返回菜单输入e."<<endl;
			 cin>>judge2;
					if(judge2=='r'){
					goto LOOP1;
				}
				    else if(judge2=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN2; 
					}
				} 
			     else if(life>1926){
			     	char judge3;
			     	cout<<"在"<<life-1926<<"年前，他出生了"<<endl;
					cout<<"这一年，他"<<life-1926<<"岁高寿"<<endl;
		RETURN3:	cout<<"返回上级输入r,返回菜单输入e."<<endl;
		        	cin>>judge3;
					if(judge3=='r'){
					goto LOOP1;
				}
				    else if(judge3=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN3; 
					}
				 }
				else if(life==0){
					char judge4;
					cout<<"你在暗示什么？"<<endl;
					cout<<"时 间 静 止"<<endl;
					RETURN4:cout<<"返回上级输入r,返回菜单输入e."<<endl;
			cin>>judge4;
					if(judge4=='r'){
					goto LOOP1;
				}
				    else if(judge4=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN4; 
					}
				}
				else{
					char judge5;
					cout<<"你在暗示什么？为什么会小于0？"<<endl;
					cout<<"有内鬼，运行停止！"<<endl;
				
					system("pause");
					return 0; 
				}
	}
            else if(choice==2){
		  	LOOP2:int chapter;
            cout<<"                                        "<<endl;		  
		  	cout<<"模块2 经典语录  请输入您想查看的篇目"<<endl<<"MENU"<<endl<<"1.怒斥港记"<<endl<<"2.谈笑风生"<<endl<<"3.二院视察"<<endl;
			cin>>chapter;
			if(chapter==1){
				char judge5;
				cout<<"怒 斥 港 记"<<endl<<"不要见的风识的雨，这个东西你们自己也是要判断，是要负责任的" <<endl<<"没有任何的意思，他是按照基本法，按照选举的法，去产生（手势）"<<endl;
				cout<<"刚才你问我啊，我可以告诉你无可奉告"<<endl<<"西方的哪一个国家我没有去过？"<<endl<<"我觉得你们媒体还要学↗习一个，需要提高自己的姿势水平。你们要知道美国的华莱士，比↗你们不知道高到哪里去了，我跟他谈笑风生"<<endl;
				cout<<"你们啊，就有一个好，到了哪个国家比其他的记者跑得都快，但问出来的问题啊，都TOO YOUNG TOO SIMPLE,SOMETIMES NAIVE!"<<endl<<"我今天不是作为新闻工作者，而是作为一个长者()给你们讲，因为我见的太多了，有必要给你们一点人生的经验"<<endl; 
			    cout<<"中国有一句古话叫闷声大发财，我就喜欢这句，就是坠吼的"<<"你们啊，不要总是想着搞个大新闻，说现在已经钦定了，就把我批判一番。你们啊，NAIVE! I'm angry! 你们这样子啊是不行的！"<<endl; 
			    cout<<"                                        "<<endl;
				cout<<"若想获取视频及全文，请联系作者"<<endl;
			 RETURN5:   cout<<"返回上级输入r,返回菜单输入e."<<endl;
			cin>>judge5;
					if(judge5=='r'){
					goto LOOP2;
				}
				    else if(judge5=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN5; 
					}
			} 
			else if(chapter==2){
			    char judge6; 
				cout<<"I hope to convey through your program my best wishes to American People."<<endl;
				cout<<"You mean I'm dictatorship?That's a big mistake!"<<endl;
	            cout<<"                                        "<<endl;			
				cout<<"若想获取视频及全文，请联系作者"<<endl;
			RETURN6:    cout<<"返回上级输入r,返回菜单输入e."<<endl;
			cin>>judge6;
					if(judge6=='r'){
					goto LOOP2;
				}
				    else if(judge6=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN6; 
					}
			
			}
			 else if(chapter==3){
			 	char judge7; 
				cout<<"本来天气预报说有雨，结果江主席一来天气晴朗。"<<endl;
				cout<<"坠痛苦的就是用这个鸭嘴的笔，描图的时候一下子就…"<<endl;
				cout<<"你们给我搞得这个东西啊，excited！~"<<endl;
			    cout<<"                                        "<<endl;
				cout<<"若想获取视频及全文，请联系作者"<<endl;
		RETURN7:	    cout<<"返回上级输入r,返回菜单输入e."<<endl;
			cin>>judge7;
					if(judge7=='r'){
					goto LOOP2;
				}
				    else if(judge7=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN7; 
					}
			}
		  }
		    else if(choice==3){
		LOOP3:  int a,num,fois;
		     	char judge8; 
	       cout<<"第三模块 猜数游戏"<<endl;
		   cout<<"请输入一个1~100的整数"<<endl; 
           srand(time(0));
          num=rand()%100;
          do
       {
    	cout<<"输入一个数字: "<<endl;
		cin>>a;
		if(a==num)
		{
			cout<<"恭喜您！你猜对了"<<"您给了长者"<<num<<"*10^3秒！感谢您的付出"<<endl; 
			break;
		} 
		else if(a>num)
		{
			cout<<"猜大了！小一点"<<endl;
		}
		else
		{
			cout<<"猜小了！大一点"<<endl;
		
		}fois++;	
   
    }while(true);
    cout<<"你历经"<<fois<<"次猜对了您减少的时间"<<endl; 
  	RETURN8:  cout<<"重玩一次输入r,返回菜单输入e."<<endl;
		cin>>judge8;
					if(judge8=='r'){
					goto LOOP3;
				}
				    else if(judge8=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN8; 
					}
    
			}
		    else if(choice==4){ 
		    char judge9;
		    cout<<"感谢您的支持！本程序于2020年2月3日16时编写完成。使用语言：C++"<<endl<<"对于使用本程序带来的一切责任由使用者承担(暴力膜与暴力乳不可取)"<<endl;
			cout<<"浪费自己的语文课写程序的拉里是人间之鉴（确信）"<<endl; 
			cout<<"COPYRIGHT c中国共产党中央政治局 最终解释权归作者所有"<<endl; 
			cout<<"如想资金支持，给xi施舍1145141919810元纸钱罢"<<endl; 
	RETURN9:		cout<<"返回菜单输入e."<<endl;
			cin>>judge9;
				     if(judge9=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN9; 
					}
		 }
	        else if(choice==5){
	        	int key2;
	        	cout<<"请输入树洞门锁的密码"<<endl;
	        	cin>>key2;
	        	if(key2==114514){
	        		char judge20;
	        		int choice1;
	          LOOP4:cout<<"你进入了维尼的树洞 你看到了200斤麦子和一些蜂蜜罐和一本写着'森林宪法'的厚书"<<endl;
	        		cout<<"MENU"<<endl<<"1.平 语 近 人"<<endl<<"2.连任年数"<<endl<<"3.野兽先辈习近平说"<<endl<<"4.读书拉清单"; 
					cout<<"                  "<<endl; 
			        cout<<"您的选择是？(Please enter a number)"<<endl;
			        cout<<"(返回上级输入e)"<<endl;
			        cin>>choice1;
			        if(choice1==1){
			        	char judge10;
			        	cout<<"第一会议室 平语近人"<<endl;
			        	cout<<"我那时候是扛二百斤麦子，十里山路不换肩"<<endl<<"沼气池喷的我满脸全是粪"<<endl<<"轻关易道，通商宽衣"<<endl<<"瞻 仰 老 人"<<endl;
						cout<<"没有金科律玉（金科玉律）的教科书，也没有颐使气指（颐指气使）的教师爷"<<endl<<"我们不以追求贸易逆差为目标"<<endl;
						cout<<"中国经济是一片大海，而不是一个小池塘。大海有风平浪静之时，也有风狂雨骤(误)之时。没有疯狂宇宙，那就不是大海了。疯狂宇宙掀翻小池塘。但不能掀翻大海。"<<endl;
						cout<<"改革开放没有进行时，只有虚拟式（改）"<<endl;
						cout<<"更多翻出去Youtube,请"<<endl;
						cout<<"补充欢迎交流 请联系作者"<<endl;
						RETURN10:	cout<<"返回上级输入r,返回菜单输入e."<<endl;
		cin>>judge10;
					if(judge10=='r'){
					goto LOOP4;
				}
				    else if(judge10=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN10; 
					} 
						 }
				else if(choice1==2){
				 LOOP5: cout<<"第二会议室 连任年数"<<endl;
				        long long xi;
                        cout << "请输入一个年份" << endl;
                        cin>>xi;
                        if(xi<2012 && xi > 0){
                        char judge11; 
                    	cout<<"维尼熊还有"<<2012-xi<<"年成为森林国王"<<endl;
			RETURN11:		    cout<<"重新输入输入f,返回树洞输入r,返回菜单输入e."<<endl;
			   cin>>judge11;
					if(judge11=='r'){
					goto LOOP4;
				}
				    else if(judge11=='e'){
				    	goto LOOP;
					}
					 else if(judge11=='f'){
				    	goto LOOP5;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN11; 
					} 
						}
	                    else if(xi==2012){
	                    char judge12;
                        cout<<"Fuck it 维尼熊成为了森林国王"<<endl;
			RETURN12:			cout<<"重新输入输入f,返回树洞输入r,返回菜单输入e."<<endl;
			   cin>>judge12;
					if(judge12=='r'){
					goto LOOP4;
				}
				    else if(judge12=='e'){
				    	goto LOOP;
					}
					 else if(judge12=='f'){
				    	goto LOOP5;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN12; }  
					}
                        else if(xi<0){
                       char judge13;
   	                   cout<<"你在暗示谁在开倒车" << endl;
			 RETURN13:		   cout<<"重新输入输入f,返回树洞输入r,返回菜单输入e."<<endl;
			  cin>>judge13;
					if(judge13=='r'){
					goto LOOP4;
				}
				    else if(judge13=='e'){
				    	goto LOOP;
					}
					 else if(judge13=='f'){
				    	goto LOOP5;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN13; }  
						}
                  else if (xi == 0){
                char judge14;
   		         cout << "你在暗示什么" << endl;
   		         cout << "时 间 静 止" << endl;
			 RETURN14:	cout<<"重新输入输入f,返回树洞输入r,返回菜单输入e."<<endl;
			  cin>>judge14;
					if(judge14=='r'){
					goto LOOP4;
				}
				    else if(judge14=='e'){
				    	goto LOOP;
					}
					 else if(judge14=='f'){
				    	goto LOOP5;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN14; }  
						}
                    else{
                 char judge15;
   	             cout << "维尼熊已经连任了" <<xi-2012<<"年森林国王"<<endl;
   	           RETURN15:   cout<<"重新输入输入f,返回树洞输入r,返回菜单输入e."<<endl;
			  cin>>judge15;
					if(judge15=='r'){
					goto LOOP4;
				}
				    else if(judge15=='e'){
				    	goto LOOP;
					}
					 else if(judge15=='f'){
				    	goto LOOP5;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN15; }  
   }
					} 
			    else if(choice1==3){
			    	int dem; 
			    	cout<<"第三会议室(下北泽分部) 野兽先辈习近平说"<<endl;
			    	cout<<"1.野兽先辈家很大，习的家也很大"<<endl<<"2.真夏夜の银梦------我年轻的时候读过莎士比亚的仲夏夜之梦"<<endl;
					cout<<"3.野兽先辈不使用电脑，习在发微博的时候需要别人将回车标出来"<<endl;
					cout<<"4.中 南 海-------下 北 泽"<<endl;
					cout<<"5.野兽先辈在水泳部有后辈，习也喜欢游泳和足球（迫真）"<<endl;
			LOOP6:	cout<<"下面有两种证法，请选择（1/2）/（0）" <<endl;
			    	cin>>dem;
					if(dem==1){
						char judge16;
						cout<<"野兽先辈很强壮，习不强壮（指肚子）"<<endl;
						cout<<"噔 噔 咚"<<endl<<"不得证"<<endl;
				RETURN16:	cout<<"重新选择输入f,返回树洞输入r,返回菜单输入e."<<endl;
			   cin>>judge16;
					if(judge16=='r'){
					goto LOOP4;
				}
				    else if(judge16=='e'){
				    	goto LOOP;
					}
					 else if(judge16=='f'){
				    	goto LOOP6;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN16; }  
						} 
					else if(dem==2){
						char judge17;
						cout<<"还没整出来 请等我弄到梯子"<<endl;
						cout<<"Q.E.D"<<endl<<"完 全 胜 利"<<endl;
			 RETURN17:			cout<<"重新选择输入f,返回树洞输入r,返回菜单输入e."<<endl;
			  cin>>judge17;
					if(judge17=='r'){
					goto LOOP4;
				}
				    else if(judge17=='e'){
				    	goto LOOP;
					}
					 else if(judge17=='f'){
				    	goto LOOP6;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN17; }  
						} 
					else if(dem==0){
						char judge18; 
						cout<<"自首，请(国安大队无慈悲)"<<endl;
					   RETURN18:		cout<<"重新选择输入f,返回树洞输入r,返回菜单输入e."<<endl;
		cin>>judge18;
					if(judge18=='r'){
					goto LOOP4;
				}
				    else if(judge18=='e'){
				    	goto LOOP;
					}
					 else if(judge18=='f'){
				    	goto LOOP6;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN18; }  
						}  
					else{
						cout<<"迷 惑 行 为"<<endl;
						goto LOOP6; 
					}
					}
				else if(choice1==4){
					char judge19;
					cout<<"第四部分 梁家河大队部图书室，世界四大图书馆之一"<<endl;
					cout<<"我年轻的时候读过……"<<endl;
					cout<<"(作者的名字过多 不再一一列举 获取原文请爬梯子)"<<endl;
			RETURN19:		cout<<"返回上级输入r,返回菜单输入e."<<endl;
			cin>>judge19;
					if(judge19=='r'){
					goto LOOP4;
				}
				    else if(judge19=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN19; 
					} 
				}	
			RETURN20:cin>>judge20;
					 if(judge20=='e'){
				    	goto LOOP;
					}
					else{
						cout<<"Error"<<endl;
						goto RETURN20; 
					} 
					}
				else{
					cout<<"先当好魔法师罢"<<endl;
					goto LOOP;
				}	
						} 
				else if(choice==7){
					cout<<"再见"<<endl;
					system("pause");
					return 0;
				} 
				}
			else if(key==1){
			cout<<"再见！祝您好梦"<<endl;
			system("pause");
			return 0;		
		}
	
		else{
			cout<<"自觉出门，请"<<endl;
			system("pause");
			return 0;		
		}
}
	else{
		cout<<"迷 惑 行 为"<<endl;
	
		system("pause");
		return 0;
	} 
		
	system("pause");
	return 0; 
}


