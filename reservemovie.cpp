#include <iostream>
#include <cstdlib>
#include <fstream>
#include <Windows.h>
using namespace std;

class movie {
public:
	char title[100];
	char director[100];
	int run;
	char genre[15];
	int seat1[3][10];
	int seat2[3][10];
	int seat3[3][10];
	int seat4[3][10];
};
void ChooseTimeAndSeat(class movie *p);
void Reserv1(class movie *p);
void Reserv2(class movie *p);
void Reserv3(class movie *p);
void Reserv4(class movie *p);

int main(void) {
	int X;
	typedef class movie movie;
	movie Avengers = {
		"어벤져스: 인피니티 워",//영화제목
		"안소니 루소, 조 루소 ",//감독
		149,
		"Fantasy",
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 }
	};//좌석표
	movie Gonjiam = {
		"곤지암",
		"정범식",
		94,
		"Thriller",
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 }
	};
	movie DetectiveConan = {
		"명탐정 코난 극장판 감벽의 관",
		"야마모토 야스이치로",
		107,
		"Animation",
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 }
	};
	movie EdgeOfTomorrow = {
		"Edge of tomorrow",
		"더그 라이만 ",
		113,
		"Sciencefiction",
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 }
	};
	while (1) {
		system("cls");
		cout << "영화 선택:" << endl;
		cout << "1. 어벤져스: 인피니트 워, 2. 곤지암, 3. 명탐정 코난 극장판 감벽의 관, 4. 엣지오브 투머로우, 5. 프로그램 종료" << endl;
		cin >> X;//영화 입력받기
		cout << endl;
		system("cls");
		if (X == 1) {
			cout << "영화정보" << endl;;
			cout << "제목 : " << Avengers.title << endl;
			cout << "감독 : " << Avengers.director << endl;
			cout << "상영시간 : " << Avengers.run << "분" << endl;
			cout << "장르 : " << Avengers.genre << endl;
			ChooseTimeAndSeat(&Avengers);
		}//어벤저스를 선택받았을 때
		else if (X == 2) {
			cout << "영화정보" << endl;;
			cout << "제목 : " << Gonjiam.title << endl;
			cout << "감독 : " << Gonjiam.director << endl;
			cout << "상영시간 : " << Gonjiam.run << "분" << endl;
			cout << "장르 : " << Gonjiam.genre << endl;
			ChooseTimeAndSeat(&Gonjiam);

		}//곤지암을 선택받았을 때
		else if (X == 3) {
			cout << "영화정보" << endl;;
			cout << "제목 : " << DetectiveConan.title << endl;
			cout << "감독 : " << DetectiveConan.director << endl;
			cout << "상영시간 : " << DetectiveConan.run << "분" << endl;
			cout << "장르 : " << DetectiveConan.genre << endl;
			ChooseTimeAndSeat(&DetectiveConan);
		}//명탐정 코난을 선택받았을 때
		else if (X == 4) {
			cout << "영화정보" << endl;;
			cout << "제목 : " << EdgeOfTomorrow.title << endl;
			cout << "감독 : " << EdgeOfTomorrow.director << endl;
			cout << "상영시간 : " << EdgeOfTomorrow.run << "분" << endl;
			cout << "장르 : " << EdgeOfTomorrow.genre << endl;
			Cho간 선택:oseTimeAndSeat(&EdgeOfTomorrow);
		}//엣지오브 투모로우를 선택받았을떄
		else if (X == 5) {
			exit(0);
		}
	}
};
void ChooseTimeAndSeat(class movie *p)
{
	while (1)
	{
		int s, i, j;
		cout << endl << "시간 선택:" << endl;
		cout << "1.  9:30 ~ 11:30" << endl;
		cout << "2. 12:00 ~ 14:00" << endl;
		cout << "3. 15:15 ~ 17:15" << endl;
		cout << "4. 20:45 ~ 22:45" << endl;
		cin >> s;//시간을 입력받음
		cout << endl;
		system("cls");
		if (s == 1) {
			cout << "            1       2       3       4       5       6       7       8       9       10" << endl;
			cout << "     ---------------------------------------------------------------------------------" << endl;
			for (j = 0; j < 4; j++)
			{
				if (j == 0)
					cout << "  A  " << endl;
				if (j == 1)
					cout << "  B  " << endl;
				if (j == 2)
					cout << "  C  " << endl;
				if (j == 3)
					cout << "  D  " << endl;
				for (i = 0; i < 10; i++) {
					if (p->seat1[j][i] == 0)
						cout << "       O";
					else if (p->seat1[j][i] == 1)
						cout << "       X";
				}
				cout << "\n" << endl;
			}
			Reserv1(p);
			break;
		}
		if (s == 2) {
			cout << "           1       2       3       4       5       6       7       8       9       10" << endl;
			cout << "     ---------------------------------------------------------------------------------" << endl;
			for (j = 0; j < 4; j++)
			{
				if (j == 0)
					cout << "  A  " << endl;
				if (j == 1)
					cout << "  B  " << endl;
				if (j == 2)
					cout << "  C  " << endl;
				if (j == 3)
					cout << "  D  " << endl;
				for (i = 0; i < 10; i++) {
					if (p->seat1[j][i] == 0)
						cout << "       O";
					else if (p->seat1[j][i] == 1)
						cout << "       X";
				}
				cout << "\n" << endl;
			}
			Reserv2(p);
			break;
		}
		if (s == 3) {
			cout << "           1       2       3       4       5       6       7       8       9       10" << endl;
			cout << "     ---------------------------------------------------------------------------------" << endl;
			for (j = 0; j < 4; j++)
			{
				if (j == 0)
					cout << "  A  " << endl;
				if (j == 1)
					cout << "  B  " << endl;
				if (j == 2)
					cout << "  C  " << endl;
				if (j == 3)
					cout << "  D  " << endl;
				for (i = 0; i < 10; i++) {
					if (p->seat1[j][i] == 0)
						cout << "       O";
					else if (p->seat1[j][i] == 1)
						cout << "       X";
				}
				cout << "\n" << endl;
			}
			Reserv3(p);
			break;
		}
		if (s == 4) {
			cout << "           1       2       3       4       5       6       7       8       9       10" << endl;
			cout << "     ---------------------------------------------------------------------------------" << endl;
			for (j = 0; j < 4; j++)
			{
				if (j == 0)
					cout << "  A  " << endl;
				if (j == 1)
					cout << "  B  " << endl;
				if (j == 2)
					cout << "  C  " << endl;
				if (j == 3)
					cout << "  D  " << endl;
				for (i = 0; i < 10; i++) {
					if (p->seat1[j][i] == 0)
						cout << "       O";
					else if (p->seat1[j][i] == 1)
						cout << "       X";
				}
				cout << "\n" << endl;
			}
			Reserv4(p);
			break;
		}
		else
			cout << "다시 선택하세요." << endl;//잘못 입력하였을 때 다시 입력받음
	}
}

void Reserv1(class movie *p) {
	int a, b = 0;
	int i = 0, j = 0;
	char C, X;
	char check = 'Y';
	class movie reserver;

	cout << "예약자 이름을 입력해 주세요." << endl;
	cin >> reserver.title;//이름 입력받음
	cout << endl;
	while (check == 'Y') {
		cout << endl << "예매하실 좌석의 열을 선택해 주세요.(A,B,C,D)" << endl;
		cin >> C;//열을 받음
		cout << endl;

		if (C == 'A'&& C == 'a')
			b = 1;
		if (C == 'B'&& C == 'b')
			b = 2;
		if (C == 'C'&& C == 'c')
			b = 3;
		if (C == 'D'&& C == 'd')
			b = 3;

		cout << endl << "예매하실 좌석의 번호를 선택해 주세요.(1~10)" << endl;
		cin >> a;
		if (p->seat1[b - 1][a - 1] == 0) {
			p->seat1[b - 1][a - 1] = 1;
			reserver.seat1[b - 1][a - 1] = 1;

		}
		else {
			cout << "이미 예약된 좌석입니다" << endl;
			continue;
		}
		cout << "계속 예매 하시겠습니까? (Y/N) : " << endl;
		cin >> check;
		cout << endl;
	}
	ifstream f("reserver.title");
	if (!f) {
		cout << "파일이 열리지 않습니다." << endl;
	}

	cout << " -------------------------------------------------------" << endl;
	cout << "                     영화 예매표" << endl;
	cout << " 예매자 이름 : " << endl << reserver.title;
	cout << " 영화제목 : " << endl << p->title;
	cout << " 영화시간 : 9:30 ~ 11:30" << endl;
	cout << " 상영시간 : " << p->run << endl;
	cout << " 영화장르 : " << p->genre << endl;
	cout << " 좌석 : ";
	for (j = 0; j < 4; j++)
	{
		if (j == 0) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "A" << i + 1;
			}
		}
		if (j == 1) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "B" << i + 1;
			}
		}
		if (j == 2) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "C" << i + 1;
			}
			if (j == 3) {
				for (i = 0; i < 10; i++) {
					if (reserver.seat1[j][i] == 1)
						cout << "D" << i + 1;
				}
			}
		}
		cout << endl;
		f.close();
	}
}
void Reserv2(struct movie *p) {
	int a, b = 0;
	int i = 0, j = 0;
	char C, X;
	char check = 'Y';
	struct movie reserver;
	ifstream f("reserver.title");

	cout << "예약자 이름을 입력해 주세요." << endl;
	cin >> reserver.title;

	while (check == 'Y') {
		cout << endl << "예매하실 좌석의 열을 선택해 주세요.(A,B,C,D)" << endl;
		cin >> C;

		if (C == 'A'&& C == 'a')
			b = 1;
		if (C == 'B'&& C == 'b')
			b = 2;
		if (C == 'C'&& C == 'c')
			b = 3;
		if (C == 'D'&& C == 'd')
			b = 3;

		cout << endl << "예매하실 좌석의 번호를 선택해 주세요.(1~10)" << endl;
		cin >> a;
		if (p->seat1[b - 1][a - 1] == 0) {
			p->seat1[b - 1][a - 1] = 1;
			reserver.seat1[b - 1][a - 1] = 1;

		}
		else {
			cout << "이미 예약된 좌석입니다" << endl;
			continue;
		}
		cout << "계속 예매 하시겠습니까? (Y/N) : " << endl;
		cin >> check;
	}
	if (!f) {
		cout << "파일이 열리지 않습니다." << endl;
	}
	cout << " -------------------------------------------------------" << endl;
	cout << "                     영화 예매표" << endl;
	cout << " 예매자 이름 : " << endl << reserver.title;
	cout << " 영화제목 : " << endl << p->title;
	cout << " 영화시간 : 9:30 ~ 11:30" << endl;
	cout << " 상영시간 : " << p->run << endl;
	cout << " 영화장르 : " << p->genre << endl;
	cout << " 좌석 : ";
	for (j = 0; j < 4; j++)
	{
		if (j == 0) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "A" << i + 1;
			}
		}
		if (j == 1) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "B" << i + 1;
			}
		}
		if (j == 2) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "C" << i + 1;
			}
			if (j == 3) {
				for (i = 0; i < 10; i++) {
					if (reserver.seat1[j][i] == 1)
						cout << "D" << i + 1;
				}
			}
		}
		cout << endl;
		f.close();
	}
}

void Reserv3(struct movie *p) {
	int a, b = 0;
	int i = 0, j = 0;
	char C, X;
	char check = 'Y';
	struct movie reserver;
	ifstream f("reserver.title");

	cout << "예약자 이름을 입력해 주세요." << endl;
	cin >> reserver.title;
	while (check == 'Y') {
		cout << endl << "예매하실 좌석의 열을 선택해 주세요.(A,B,C,D)" << endl;
		cin >> C;

		if (C == 'A'&& C == 'a')
			b = 1;
		if (C == 'B'&& C == 'b')
			b = 2;
		if (C == 'C'&& C == 'c')
			b = 3;
		if (C == 'D'&& C == 'd')
			b = 3;

		cout << endl << "예매하실 좌석의 번호를 선택해 주세요.(1~10)" << endl;
		cin >> a;
		if (p->seat1[b - 1][a - 1] == 0) {
			p->seat1[b - 1][a - 1] = 1;
			reserver.seat1[b - 1][a - 1] = 1;
		}
		else {
			cout << "이미 예약된 좌석입니다" << endl;
			continue;
		}
		cout << "계속 예매 하시겠습니까? (Y/N) : " << endl;
		cin >> check;
	}
	if (!f) {
		cout << "파일이 열리지 않습니다." << endl;
	}
	cout << " -------------------------------------------------------" << endl;
	cout << "                     영화 예매표" << endl;
	cout << " 예매자 이름 : " << endl << reserver.title;
	cout << " 영화제목 : " << endl << p->title;
	cout << " 영화시간 : 9:30 ~ 11:30" << endl;
	cout << " 상영시간 : " << p->run << endl;
	cout << " 영화장르 : " << p->genre << endl;
	cout << " 좌석 : ";
	for (j = 0; j < 4; j++)
	{
		if (j == 0) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "A" << i + 1;
			}
		}
		if (j == 1) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "B" << i + 1;
			}
		}
		if (j == 2) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "C" << i + 1;
			}
			if (j == 3) {
				for (i = 0; i < 10; i++) {
					if (reserver.seat1[j][i] == 1)
						cout << "D" << i + 1;
				}
			}
		}
		cout << endl;
		f.close();
	}
}
void Reserv4(struct movie *p) {
	int a, b = 0;
	int i = 0, j = 0;
	char C, X;
	char check = 'Y';
	struct movie reserver;
	ifstream f("reserver.title");

	cout << "예약자 이름을 입력해 주세요." << endl;
	cin >> reserver.title;
	while (check == 'Y') {
		cout << endl << "예매하실 좌석의 열을 선택해 주세요.(A,B,C,D)" << endl;
		cin >> C;

		if (C == 'A'&& C == 'a')
			b = 1;
		if (C == 'B'&& C == 'b')
			b = 2;
		if (C == 'C'&& C == 'c')
			b = 3;
		if (C == 'D'&& C == 'd')
			b = 3;

		cout << endl << "예매하실 좌석의 번호를 선택해 주세요.(1~10)" << endl;
		cin >> a;
		if (p->seat1[b - 1][a - 1] == 0) {
			p->seat1[b - 1][a - 1] = 1;
			reserver.seat1[b - 1][a - 1] = 1;

		}
		else {
			cout << "이미 예약된 좌석입니다" << endl;
			continue;
		}
		cout << "계속 예매 하시겠습니까? (Y/N) : " << endl;
		cin >> check;
	}
	if (!f) {
		cout << "파일이 열리지 않습니다." << endl;
	}
	cout << " -------------------------------------------------------" << endl;
	cout << "                     영화 예매표" << endl;
	cout << " 예매자 이름 : " << endl << reserver.title;
	cout << " 영화제목 : " << endl << p->title;
	cout << " 영화시간 : 9:30 ~ 11:30" << endl;
	cout << " 상영시간 : " << p->run << endl;
	cout << " 영화장르 : " << p->genre << endl;
	cout << " 좌석 : ";
	for (j = 0; j < 4; j++)
	{
		if (j == 0) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "A" << i + 1;
			}
		}
		if (j == 1) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "B" << i + 1;
			}
		}
		if (j == 2) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "C" << i + 1;
			}
			if (j == 3) {
				for (i = 0; i < 10; i++) {
					if (reserver.seat1[j][i] == 1)
						cout << "D" << i + 1;
				}
			}
		}
		cout << endl;
		f.close();
	}
}
