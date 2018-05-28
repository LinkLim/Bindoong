#include<cstring>
#include<iostream>
#include<cmath>
#include<stdio.h>
#include<fstream>
#include <string>
using namespace std;
void explain(void);
void level(void);
void levelcheck(int num, char h[]);
int choice(void);
void Level1(void);
void Level2(void);
void Level3(void);
void Level4(void);
void Level5(void);
void Level6(void);
void Level7(void);
void Level8(void);
void Level9(void);
void Level10(void);
void Boss(void);
int main(void)
{

	FILE *fp = NULL;
	int c;
	int num;
	char full[10];
	for (int i = 0;i < 10;i++)
		full[i] = 'o';
	char h[10] = { ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

	cout<<"추리게임을 시작합니다.\n\n";
	explain();
	level();
	while (1) {
		num = choice();
		switch (num) {
		case 1:Level1();break;
		case 2:Level2();break;
		case 3:Level3();break;
		case 4:Level4();break;
		case 5:Level5();break;
		case 6:Level6();break;
		case 7:Level7();break;
		case 8:Level8();break;
		case 9:Level9();break;
		case 10:Level10();break;
		}
		levelcheck(num, h);

		if (strcmp(h, full) == 0)
			break;
	}

	fp = fopen("boss.txt", "r");
	if (fp == NULL) {
		fprintf(stderr, "원본 파일 boss.txt를 열 수 없습니다.");
		exit(1);
	}
	while ((c = fgetc(fp)) != EOF)
		putchar(c);
	fclose(fp);

	Boss();

	return 0;
}

inline void explain(void)
{
	cout<<"\n게임 방법: \n";
	cout << "우리조의 프로그램은 level별로 나누어져 있습니다.\n";
	cout << "Level은 총 10문제로 구성되어있습니다.\n";
	cout << "10문제를 모두 다 풀게 될 경우 Boss문제가 나옵니다.\n";
	cout << "Boss문제까지 맞추었을 때 어떤 일이 일어날 지 직접 확인해보세요.(단 10번은 무조건 마지막에 풀어야합니다.)\n";
}

inline void level(void)
{
	cout << "\nLevel 1( )     Level 2( )\n\n";
	cout << "Level 3( )     Level 4( )\n\n";
	cout << "Level 5( )     Level 6( )\n\n";
	cout << "Level 7( )     Level 8( )\n\n";
	cout << "Level 9( )     Level 10( )\n\n";
}

inline void levelcheck(int num, char h[])
{
	h[num - 1] = 'o';
	cout<<"\nLevel 1"<<"("<<h[0]<<")"<<" Level 2"<<"("<<h[1]<<")\n\n";
	cout << "\nLevel 3" << "(" << h[2] <<")"<< " Level 4" << "(" << h[3] << ")\n\n";
	cout << "\nLevel 5" << "(" << h[4] << ")"<<" Level 6" << "(" << h[5] << ")\n\n";
	cout << "\nLevel 7" << "(" << h[6] << ")"<<" Level 8" << "(" << h[7] << ")\n\n";
	cout << "\nLevel 9" << "(" << h[8] << ")"<<" Level 10" << "(" << h[9] << ")\n\n";
}

inline int choice(void)
{
	int num;

	while (1)
	{
		cout << "도전할 Level을 입력하세요: ";
		cin >> num;
		getchar();
		if (num < 1 || num>10)
		{
			cout << "1~10 사이의 숫자만 입력하세요\n";
			continue;
		}
		else
			break;
	}

	return num;
}

inline void Level1(void)
{
	int num, count = 0;
	

	cout << "\n\n물음표에 들어갈 숫자는?\n";
	cout<<"3+4=7\n";
	cout << "7+5=12\n";
	cout << "6+9=3\n";
	cout << "11+12=11\n";
	cout << "8+9=?\n";

	while (1) {
		cout << "답: ";
		cin>>num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "힌트:  ";
			ifstream r("1번힌트.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[10];
				r.getline(str, 10,'\n');
				cout << str << endl;
			}
			cout<<endl;
		}

		if (num == 5) {
			cout << "정답입니다.!!\n\n";
			break;
		}
		else {
			cout << "다시 입력하세요!!\n\n";
		}
	}

}

void Level2(void)
{
	int count = 0;
	char c1[50];
	cout << "\n\n다음에 올 알파벳은 무엇인가?\n";
	cout << "N W H O I ( )\n";

	while (1) {
		cout << "답: ";
		cin >> c1;
		getchar();
		count++;
		if (count >= 3) {
			cout << "힌트:  ";
			ifstream r("2번힌트.txt", ios_base::out);

			if (r.is_open()==true) 
			{
				char str[100];
				r.getline(str, 100, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (c1[0] == 'i' || c1[0] == 'I') {
			cout << "정답입니다.!!\n\n";
			break;
		}
		else
			cout << "다시 입력하세요!!\n\n";

	}
}

void Level3(void)
{
	int count = 0;
	int num1;
	cout<<"c8반 감옥에 갇힌 두연이는 감옥을 탈출하기 위해\n";
	cout<<"암호를 알아내야 한다. 암호는 무엇일까?\n";
	cout << "2 1 1 1 1 2 1 3 2 2 2 1 1\n";
	cout << "1 1 1 1 1 2 1 1 2 ? 2 2 1\n";
	while (1) {
		cout << "답: ";
		cin>>num1;
		getchar();
		count++;
		if (count >= 3) {
			cout << "힌트:  ";
			ifstream r("3번힌트.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[10000];
				r.getline(str, 10000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num1 == 3) {
			cout<<"정답입니다.!!\n\n";
			break;
		}
		else {
			cout << "다시 입력하세요!!\n\n";
			continue;
		}
	}
}

void Level4(void)
{
	int count = 0;
	int num;
	cout<<"물음표에 숫자는?\n";
	cout<<"나라사랑=0\n";
	cout<<"키보드=1\n";
	cout<<"중모리장단=2\n";
	cout<<"유부초밥=3\n";
	cout << "광운대학교=?\n";
	while (1) {
		cout<<"답: ";
		cin >> num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "힌트:  ";
			ifstream r("4번힌트.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[100];
				r.getline(str, 100, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num == 0) {
			cout<<"정답입니다.!!\n\n";
			break;
		}
		else
			cout<<"다시 입력하세요!!\n\n";

	}
}

inline void Level5(void)
{
	int count = 0;
	char c[50];
	cout<<"나는 누구일까?\n";
	cout<< "나는 산에 살지만 바다에는 살지 못해요.\n";
	cout<<"나는 사방 모든 것에 존재해요.\n";
	cout<<"나는 슬플 때가 많아요.\n";
	cout<<"나는 모든 것을 크게 해줘요.\n";
	cout<<"나는 누구일까요?\n";
	while (1) {
		cout<<"답: ";
		cin >> c;
		count++;
		if (count >= 3) {
			cout << "힌트:  ";
			ifstream r("5번힌트.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (c[0] == 't' || c[0] == 'T') {
			cout<<"정답입니다.!!\n\n";
			break;
		}
		else
			cout<<"다시 입력하세요!!\n\n";
	}
}

void Level6(void)
{
	FILE *fp = NULL;
	int count = 0;
	int num;
	cout<<"물음표에 들어갈 숫자는?\n";
	cout<<"Freedom=11\n";
	cout<<"Lion=7\n";
	cout<<"Photo=11\n";
	cout<<"ARt=19\n";
	cout << "Gentleman=?\n";
	while (1) {
		cout<<"답: ";
		cin >> num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "힌트:  ";
			ifstream r("6번힌트.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num == 15) {
			cout << "정답입니다.!!\n\n";
			break;
		}
		else {
			cout<<"다시 입력하세요!!\n\n";
			continue;
		}
	}
}

void Level7(void)
{
	int count = 0;
	int num;
	cout<<"비밀 작전을 수행 중인 스파이 두연이는 비밀 장소에\n";
	cout<<"자신의 팀원들만 알아볼 수 있게 8자리 패스워드를 설정해놓았다.\n";
	cout<<"패스워드는 무엇일까?\n";
	cout << "THIS WILL BE OUR SECRET\n";
	cout << "TIHS WLIL BE OUR SCERTE\n";
	while (1) {
		cout<<"답: ";
		cin >> num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "힌트:  ";
			ifstream r("7번힌트.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num == 91912399) {
			cout<<"정답입니다.!!\n\n";
			break;
		}
		else {
			cout<<"다시 입력하세요!!\n\n";
			continue;
		}
	}
}

void Level8(void)
{
	int count = 0;char c1[50] = "house";
	char c2[50];
	cout << "물음표에 들어갈 것은? (단, 소문자로 작성하시오)\n";
	cout<<"33 92 75 83 → ring\n";
	cout<<"84 13 33 23 → hero\n";
	cout<<"32 23 43 71 81 → ?\n";
	while (1) {
		cout<<"답: ";
		cin >> c2;

		count++;
		if (count >= 3) {
			cout << "힌트:  ";
			ifstream r("8번힌트.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (strcmp(c1, c2) == 0) {
			cout<<"정답입니다.!!\n\n";
			break;
		}
		else {
			cout<<"다시 입력하세요!!\n\n";
			continue;
		}
	}

}

void Level9(void)
{
	int count = 0;
	int num;
	cout<<"물음표에 들어갈 것은?\n";
	cout<<"TV=1   KO=3\n";
	cout<<"DJ=5   ET=?\n";
	while (1) {
		cout<<"답: ";
		cin >> num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "힌트:  ";
			ifstream r("9번힌트.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num == 14) {
			cout<<"정답입니다.!!\n\n";
			break;
		}
		else {
			cout<<"다시 입력하세요!!\n\n";
			continue;
		}
	}
}

void Level10(void)
{
	int count = 0;
	int num;
	cout<<"물음표에 들어갈 숫자는?\n";
	cout<<"2  4  6  30 32 34 36 40 42 44\n";
	cout<<"46 50 52 54 56 60 62 64 66 ?\n";

	while (1) {
		cout << "답: ";
		cin >> num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "힌트:  ";
			ifstream r("10번힌트.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num == 1000) {
			cout<<"정답입니다.!!\n\n";
			break;
		}
		else
			cout<<"다시 입력하세요!!\n\n";
	}
}

void Boss(void)
{
	char c[20];

	while (1) {
		cout<<"우리나라의 수도는? \n";
		cin >> c;
		if (strcmp(c, "서울") == 0) {
			cout<<"정답입니다. 모두 클리어하셨습니다!!\n\n당신은 진정한 뇌섹남!!!\n\n";
			break;
		}
		else {
			cout<<"다시 입력하세요!!\n\n";
			continue;
		}
	}
}