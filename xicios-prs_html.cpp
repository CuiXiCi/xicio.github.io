#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<string>

using namespace std;
SYSTEMTIME sys;

int main () {
	//new
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	SetConsoleTitle("xicios-prs_html bv1.2.0");

	//show
	int ls=0,max=-1;
	string title,no,in[2000],oldfile,newfile;
	bool space=false;
	cout<<"no=";
	cin>>no;
	cout<<endl;
	cout<<"title=";
	cin>>title;
	cout<<endl;
	cout<<"space=";
	cin>>space;
	cout<<endl;
	system("cls");
	while (true) {
		cin>>in[ls];
		if (in[ls]=="end"||in[ls]=="END") max=ls;
		if (max==ls) goto html;
		ls+=1;
	}

	//html
html:
	ofstream fout("temp.txt",ios::app);
	fout<<"<!DOCTYPE html>"<<endl;
	fout<<"<html>"<<endl;
	fout<<"<head>"<<endl;
	fout<<"    <meta charset=\"ANSI\">"<<endl;
	fout<<"    <meta http-equiv=\"content-type\" content=\"text/html\">"<<endl;
	fout<<"    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1, user-scalable=no\"/>"<<endl;
	fout<<"    <meta content=\"IE=edge,chrome=1\" http-equiv=\"X-UA-Compatible\">"<<endl;
	fout<<"    <meta name=\"renderer\" content=\"webkit\">"<<endl;
	fout<<"    <meta property=\"og: title\" content=\""<<title<<"\" />"<<endl;
	fout<<"    <title>"<<no<<"-"<<title<<"</title>"<<endl;
	fout<<"    <meta name=\"keywords\" content=\""<<title<<"\">"<<endl;
	fout<<"    <meta name=\"description\" content=\""<<title<<"\">"<<endl;
	fout<<"    <link rel=\"shortcut icon\" href=\"img/icon.ico\">"<<endl;
	fout<<"    <link rel=\"stylesheet\" type=\"text/css\" href=\"css/base.css\">"<<endl;
	fout<<"</head>"<<endl<<endl;

	fout<<"<body>"<<endl<<endl;

	fout<<"<div class=\"article_title bg\" style=\"background: url('img/AR/ARM02.png')\">"<<endl;
	fout<<"    <div class=\"content_container\">"<<endl;
	fout<<"        <div class=\"article_title_line\">"<<endl;
	fout<<"            <h2>"<<no<<"-"<<title<<"</h2>"<<endl;
	fout<<"        </div>"<<endl;
	fout<<"    </div>"<<endl;
	fout<<"</div>"<<endl<<endl;

	fout<<"<div class=\"article_text\">"<<endl;
	fout<<"    <div class=\"content_container\">"<<endl;
	fout<<"        <div class=\"article_content\">"<<endl;
	if (space==false) for (int ls=0; ls!=max; ls++) fout<<"            <p>"<<in[ls]<<"</p>"<<endl;
	else for (int ls=0; ls!=max; ls++) fout<<"            <p>&emsp;&emsp;"<<in[ls]<<"</p>"<<endl;
	fout<<"        </div>"<<endl;
	fout<<"    </div>"<<endl;
	fout<<"</div>"<<endl<<endl;

	fout<<"<div class=\"footer\">"<<endl;
	fout<<"    <div class=\"footer_top\">"<<endl;
	fout<<"        <div class=\"content_container\">"<<endl;
	fout<<"            <div class=\"footer_jigou\">"<<endl;
	fout<<"                <h2>��������</h2>"<<endl;
	fout<<"                <a href=\"index.html\">��Ǥ�������</a>"<<endl;
	fout<<"                <a href=\"https://www.pixiv.net\">Pվ(pixiv)</a>"<<endl;
	fout<<"                <a href=\"https://www.bilibili.com\">��������(bilibili)</a>"<<endl;
	fout<<"                <a href=\"https://www.youtube.com/\">�͹�(youtube)</a>"<<endl;
	fout<<"                <a href=\"https://18comic-ff7rebirth.art/\">��������(JMcomic)</a>"<<endl;
	fout<<"            </div>"<<endl;
	fout<<"            <div class=\"footer_center clearfix\">"<<endl;
	fout<<"                <div class=\"center_left\">"<<endl;
	fout<<"                    <h2>��Ǥ�����С��</h2>"<<endl;
	fout<<"                    <p>�绰��114514</p>"<<endl;
	fout<<"                    <p>���䣺http_xici_mail@163.com</p>"<<endl;
	fout<<"                    <p>�ʱࣺ207700</p>"<<endl;
	fout<<"                    <p>��ַ������׳��������δ���л��Ĺ�·1011��</p>"<<endl;
	fout<<"                </div>"<<endl;
	fout<<"                <div class=\"center_right\">"<<endl;
	fout<<"                    <h2>N/A</h2>"<<endl;
	fout<<"                    <p>����/������ѯ����</p>"<<endl;
	fout<<"                    <div class=\"erweima\">"<<endl;
	fout<<"                        <img src=\"img/class.png\">"<<endl;
	fout<<"                        <p>�ٷ�QQȺ</p>"<<endl;
	fout<<"                    </div>"<<endl;
	fout<<"                    <div class=\"erweima\">"<<endl;
	fout<<"                        <img src=\"img/qq.png\">"<<endl;
	fout<<"                        <p>����/������ѯ</p>"<<endl;
	fout<<"                    </div>"<<endl;
	fout<<"                </div>"<<endl;
	fout<<"            </div>"<<endl;
	fout<<"        </div>"<<endl;
	fout<<"    </div>"<<endl;
	fout<<"    <div class=\"footer_bottom clearfix\">"<<endl;
	fout<<"        <div class=\"content_container\">"<<endl;
	fout<<"            <div class=\"footer_banquanbeian\">"<<endl;
	fout<<"                <span>����Ǥ�����С�ݡ� Copyright 2023-2024 XiCi.co</span>&emsp;"<<endl;
	fout<<"                <a>��ICP����20771145141919810��</a>&emsp;"<<endl;
	fout<<"                <a>�����������ţ�31020771145141919810��</a>&emsp;"<<endl;
	fout<<"                <a>Power by Github.com</a>"<<endl;
	fout<<"            </div>"<<endl;
	fout<<"            <div class=\"footer_link\">"<<endl;
	fout<<"                <a href=\"javascript:void(0)\">����ϵͳ</a>|"<<endl;
	fout<<"                <a href=\"javascript:void(0)\">�������</a>|"<<endl;
	fout<<"                <a href=\"javascript:void(0)\">��������</a>|"<<endl;
	fout<<"                <a href=\"javascript:void(0)\">��ϵ����</a>"<<endl;
	fout<<"            </div>"<<endl;
	fout<<"        </div>"<<endl;
	fout<<"    </div>"<<endl;
	fout<<"</div>"<<endl<<endl;

	fout<<"</body>"<<endl;
	fout<<"</html>"<<endl;
	fout.close();
	
	//end
	system("cls");
	oldfile = "temp.txt";
	newfile = no+".html";
	rename(oldfile.c_str(),newfile.c_str());
	cout<<"����ɡ�"<<endl;
	return 0;
}
