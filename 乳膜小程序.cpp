#include<iostream>
#include<ctime> 
#include<cstdlib>
using namespace std;

int main()
{
	time_t timer;
	time(&timer);
	tm *t_tm = localtime(&timer);
	int year = t_tm->tm_year + 1900;//��
	int month = t_tm->tm_mon + 1;//��
	int day = t_tm->tm_mday;//��
	int hour = t_tm->tm_hour;//ʱ
	int minute = t_tm->tm_min;//��
	int second = t_tm->tm_sec;//��
	int yday = t_tm->tm_yday;//һ���еĵڼ���
    char judge;
    int key;
    
    cout<<"���ã���ӭʹ��2020����������С����"<<"Welcome!"<<" Bienvenue a la salle de bain!"<<endl;
    	cout<<"                                        "<<endl;
	cout <<"������"<< year << "��" << month << "��" << day <<"��"<< hour << "ʱ" << minute << "��" << second<<"��" << std::endl;
	cout<<"����2021��ĵ�������"<<365-yday<<"��"<<endl; 
	cout<<"                                        "<<endl;
	cout<<"����ʵ��ȫ��С������"<<638-yday<<"��"<<endl;
	cout<<"                                        "<<endl;
	cout<<"����ʵ����������ִ�������"<<2035-year<<"��"<<endl;
	cout<<"                                        "<<endl; 
	cout<<"����ʵ���л�����ΰ���˵��й��λ���"<<2049-year<<"��"<<endl;
	cout<<"                                        "<<endl;
	cout<<"���뵳�Ķ�ʮ����ٿ�����"<<2022-year<<"��"<<endl; 
	cout<<"                                        "<<endl;
	cout<<"��������ҲҪ���� �� �� �� ʿ"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	cout<<"�Ƿ��˳���(y=��,n=��)"<<endl;
	cin>> judge;
	if(judge=='y'){
		cout<<"�ټ�"<<endl;
		system("pause");
		return 0; 
	}
	else if(judge=='n')
	{
		cout<<"��������ش���"<<endl;
		cout<<"������������1�˳�"<<endl;
		cin>>key;
		LOOP:if(key==19260817)
		{
			cout<<"ħ��ʦ�ֵܣ���ã�"<<endl; 
			cout<<"MENU"<<endl;
			cout<<"1.��������"<<endl;
			cout<<"2.�� ¼ �� ��"<<endl;
			cout<<"3.���������С��Ϸ(����)"<<endl;
			cout<<"5.ά��ķ��۹�"<<endl;
			cout<<"4.֧������"<<endl;
			cout<<"7.�˳�����" <<endl; 
			cout<<"                  "<<endl;
			int choice;
			cout<<"����ѡ���ǣ�(Please enter a number)"<<endl;
			cin>>choice;
			LOOP1:if(choice==1){
		    	int life;
				cout<<"ģ��1 ��������"<<endl;
				cout<<"����������1926��8��17��"<<endl;
				cout<<"������һ�����"<<endl;
				cin>>life;
				if(life<1926&&life>0){
					char judge1;
					cout<<"����û�е�������"<<endl;
			RETURN1:		cout<<"����һ������r,�����ϼ�����e."<<endl;
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
					cout<<"��һ���8��17�գ����ڽ���ʡ�����е�����"<<endl;
			RETURN2:	    cout<<"�����ϼ�����r,���ز˵�����e."<<endl;
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
			     	cout<<"��"<<life-1926<<"��ǰ����������"<<endl;
					cout<<"��һ�꣬��"<<life-1926<<"�����"<<endl;
		RETURN3:	cout<<"�����ϼ�����r,���ز˵�����e."<<endl;
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
					cout<<"���ڰ�ʾʲô��"<<endl;
					cout<<"ʱ �� �� ֹ"<<endl;
					RETURN4:cout<<"�����ϼ�����r,���ز˵�����e."<<endl;
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
					cout<<"���ڰ�ʾʲô��Ϊʲô��С��0��"<<endl;
					cout<<"���ڹ�����ֹͣ��"<<endl;
				
					system("pause");
					return 0; 
				}
	}
            else if(choice==2){
		  	LOOP2:int chapter;
            cout<<"                                        "<<endl;		  
		  	cout<<"ģ��2 ������¼  ����������鿴��ƪĿ"<<endl<<"MENU"<<endl<<"1.ŭ��ۼ�"<<endl<<"2.̸Ц����"<<endl<<"3.��Ժ�Ӳ�"<<endl;
			cin>>chapter;
			if(chapter==1){
				char judge5;
				cout<<"ŭ �� �� ��"<<endl<<"��Ҫ���ķ�ʶ���꣬������������Լ�Ҳ��Ҫ�жϣ���Ҫ�����ε�" <<endl<<"û���κε���˼�����ǰ��ջ�����������ѡ�ٵķ���ȥ���������ƣ�"<<endl;
				cout<<"�ղ������Ұ����ҿ��Ը������޿ɷ��"<<endl<<"��������һ��������û��ȥ����"<<endl<<"�Ҿ�������ý�廹Ҫѧ�Jϰһ������Ҫ����Լ�������ˮƽ������Ҫ֪�������Ļ���ʿ���ȨJ���ǲ�֪���ߵ�����ȥ�ˣ��Ҹ���̸Ц����"<<endl;
				cout<<"���ǰ�������һ���ã������ĸ����ұ������ļ����ܵö��죬���ʳ��������Ⱑ����TOO YOUNG TOO SIMPLE,SOMETIMES NAIVE!"<<endl<<"�ҽ��첻����Ϊ���Ź����ߣ�������Ϊһ������()�����ǽ�����Ϊ�Ҽ���̫���ˣ��б�Ҫ������һ�������ľ���"<<endl; 
			    cout<<"�й���һ��Ż��������󷢲ƣ��Ҿ�ϲ����䣬����׹���"<<"���ǰ�����Ҫ�������Ÿ�������ţ�˵�����Ѿ��ն��ˣ��Ͱ�������һ�������ǰ���NAIVE! I'm angry! ���������Ӱ��ǲ��еģ�"<<endl; 
			    cout<<"                                        "<<endl;
				cout<<"�����ȡ��Ƶ��ȫ�ģ�����ϵ����"<<endl;
			 RETURN5:   cout<<"�����ϼ�����r,���ز˵�����e."<<endl;
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
				cout<<"�����ȡ��Ƶ��ȫ�ģ�����ϵ����"<<endl;
			RETURN6:    cout<<"�����ϼ�����r,���ز˵�����e."<<endl;
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
				cout<<"��������Ԥ��˵���꣬�������ϯһ���������ʡ�"<<endl;
				cout<<"׹ʹ��ľ��������Ѽ��ıʣ���ͼ��ʱ��һ���Ӿ͡�"<<endl;
				cout<<"���Ǹ��Ҹ�������������excited��~"<<endl;
			    cout<<"                                        "<<endl;
				cout<<"�����ȡ��Ƶ��ȫ�ģ�����ϵ����"<<endl;
		RETURN7:	    cout<<"�����ϼ�����r,���ز˵�����e."<<endl;
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
	       cout<<"����ģ�� ������Ϸ"<<endl;
		   cout<<"������һ��1~100������"<<endl; 
           srand(time(0));
          num=rand()%100;
          do
       {
    	cout<<"����һ������: "<<endl;
		cin>>a;
		if(a==num)
		{
			cout<<"��ϲ������¶���"<<"�����˳���"<<num<<"*10^3�룡��л���ĸ���"<<endl; 
			break;
		} 
		else if(a>num)
		{
			cout<<"�´��ˣ�Сһ��"<<endl;
		}
		else
		{
			cout<<"��С�ˣ���һ��"<<endl;
		
		}fois++;	
   
    }while(true);
    cout<<"������"<<fois<<"�β¶��������ٵ�ʱ��"<<endl; 
  	RETURN8:  cout<<"����һ������r,���ز˵�����e."<<endl;
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
		    cout<<"��л����֧�֣���������2020��2��3��16ʱ��д��ɡ�ʹ�����ԣ�C++"<<endl<<"����ʹ�ñ����������һ��������ʹ���߳е�(����Ĥ�뱩���鲻��ȡ)"<<endl;
			cout<<"�˷��Լ������Ŀ�д������������˼�֮����ȷ�ţ�"<<endl; 
			cout<<"COPYRIGHT c�й��������������ξ� ���ս���Ȩ����������"<<endl; 
			cout<<"�����ʽ�֧�֣���xiʩ��1145141919810ԪֽǮ��"<<endl; 
	RETURN9:		cout<<"���ز˵�����e."<<endl;
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
	        	cout<<"��������������������"<<endl;
	        	cin>>key2;
	        	if(key2==114514){
	        		char judge20;
	        		int choice1;
	          LOOP4:cout<<"�������ά������� �㿴����200�����Ӻ�һЩ���۹޺�һ��д��'ɭ���ܷ�'�ĺ���"<<endl;
	        		cout<<"MENU"<<endl<<"1.ƽ �� �� ��"<<endl<<"2.��������"<<endl<<"3.Ұ���ȱ�ϰ��ƽ˵"<<endl<<"4.�������嵥"; 
					cout<<"                  "<<endl; 
			        cout<<"����ѡ���ǣ�(Please enter a number)"<<endl;
			        cout<<"(�����ϼ�����e)"<<endl;
			        cin>>choice1;
			        if(choice1==1){
			        	char judge10;
			        	cout<<"��һ������ ƽ�����"<<endl;
			        	cout<<"����ʱ���ǿ����ٽ����ӣ�ʮ��ɽ·������"<<endl<<"���������������ȫ�Ƿ�"<<endl<<"����׵���ͨ�̿���"<<endl<<"հ �� �� ��"<<endl;
						cout<<"û�н�����񣨽�����ɣ��Ľ̿��飬Ҳû����ʹ��ָ����ָ��ʹ���Ľ�ʦү"<<endl<<"���ǲ���׷��ó�����ΪĿ��"<<endl;
						cout<<"�й�������һƬ�󺣣�������һ��С���������з�ƽ�˾�֮ʱ��Ҳ�з������(��)֮ʱ��û�з�����棬�ǾͲ��Ǵ��ˡ���������Ʒ�С�������������Ʒ��󺣡�"<<endl;
						cout<<"�ĸ￪��û�н���ʱ��ֻ������ʽ���ģ�"<<endl;
						cout<<"���෭��ȥYoutube,��"<<endl;
						cout<<"���件ӭ���� ����ϵ����"<<endl;
						RETURN10:	cout<<"�����ϼ�����r,���ز˵�����e."<<endl;
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
				 LOOP5: cout<<"�ڶ������� ��������"<<endl;
				        long long xi;
                        cout << "������һ�����" << endl;
                        cin>>xi;
                        if(xi<2012 && xi > 0){
                        char judge11; 
                    	cout<<"ά���ܻ���"<<2012-xi<<"���Ϊɭ�ֹ���"<<endl;
			RETURN11:		    cout<<"������������f,������������r,���ز˵�����e."<<endl;
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
                        cout<<"Fuck it ά���ܳ�Ϊ��ɭ�ֹ���"<<endl;
			RETURN12:			cout<<"������������f,������������r,���ز˵�����e."<<endl;
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
   	                   cout<<"���ڰ�ʾ˭�ڿ�����" << endl;
			 RETURN13:		   cout<<"������������f,������������r,���ز˵�����e."<<endl;
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
   		         cout << "���ڰ�ʾʲô" << endl;
   		         cout << "ʱ �� �� ֹ" << endl;
			 RETURN14:	cout<<"������������f,������������r,���ز˵�����e."<<endl;
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
   	             cout << "ά�����Ѿ�������" <<xi-2012<<"��ɭ�ֹ���"<<endl;
   	           RETURN15:   cout<<"������������f,������������r,���ز˵�����e."<<endl;
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
			    	cout<<"����������(�±���ֲ�) Ұ���ȱ�ϰ��ƽ˵"<<endl;
			    	cout<<"1.Ұ���ȱ��Һܴ�ϰ�ļ�Ҳ�ܴ�"<<endl<<"2.����ҹ������------�������ʱ�����ɯʿ���ǵ�����ҹ֮��"<<endl;
					cout<<"3.Ұ���ȱ���ʹ�õ��ԣ�ϰ�ڷ�΢����ʱ����Ҫ���˽��س������"<<endl;
					cout<<"4.�� �� ��-------�� �� ��"<<endl;
					cout<<"5.Ұ���ȱ���ˮӾ���к󱲣�ϰҲϲ����Ӿ���������棩"<<endl;
			LOOP6:	cout<<"����������֤������ѡ��1/2��/��0��" <<endl;
			    	cin>>dem;
					if(dem==1){
						char judge16;
						cout<<"Ұ���ȱ���ǿ׳��ϰ��ǿ׳��ָ���ӣ�"<<endl;
						cout<<"�� �� ��"<<endl<<"����֤"<<endl;
				RETURN16:	cout<<"����ѡ������f,������������r,���ز˵�����e."<<endl;
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
						cout<<"��û������ �����Ū������"<<endl;
						cout<<"Q.E.D"<<endl<<"�� ȫ ʤ ��"<<endl;
			 RETURN17:			cout<<"����ѡ������f,������������r,���ز˵�����e."<<endl;
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
						cout<<"���ף���(��������޴ȱ�)"<<endl;
					   RETURN18:		cout<<"����ѡ������f,������������r,���ز˵�����e."<<endl;
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
						cout<<"�� �� �� Ϊ"<<endl;
						goto LOOP6; 
					}
					}
				else if(choice1==4){
					char judge19;
					cout<<"���Ĳ��� ���ҺӴ�Ӳ�ͼ���ң������Ĵ�ͼ���֮һ"<<endl;
					cout<<"�������ʱ���������"<<endl;
					cout<<"(���ߵ����ֹ��� ����һһ�о� ��ȡԭ����������)"<<endl;
			RETURN19:		cout<<"�����ϼ�����r,���ز˵�����e."<<endl;
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
					cout<<"�ȵ���ħ��ʦ��"<<endl;
					goto LOOP;
				}	
						} 
				else if(choice==7){
					cout<<"�ټ�"<<endl;
					system("pause");
					return 0;
				} 
				}
			else if(key==1){
			cout<<"�ټ���ף������"<<endl;
			system("pause");
			return 0;		
		}
	
		else{
			cout<<"�Ծ����ţ���"<<endl;
			system("pause");
			return 0;		
		}
}
	else{
		cout<<"�� �� �� Ϊ"<<endl;
	
		system("pause");
		return 0;
	} 
		
	system("pause");
	return 0; 
}


