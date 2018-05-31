#include<stdio.h>
int father() {
	int a;//피트 
	int j;//인치 
	printf("아빠키를 피트와 인치를 띄어서 입력\n "); 
	scanf_s("%d %d",&a,&j);
	printf("아빠키는 %d피트 %d인치입니다\n", a, j);//아빠가 몇 피트 몇 인치 인지를 받음 
	return a * 12 + j;//인치값으로 변 환 
}//아빠 키를 받는 함수 

int mother() {
	int b;//피트 
	int k;//인치 
	printf("엄마키를 피트와 인치를 띄어서 입력\n");
	scanf_s("%d %d", &b, &k);
		printf("엄마키는 %d피트 %d인치입니다\n", b, k);
	return b * 12 + k;//인치값으로 변환 
}//엄마키를 받는 함수 

char kidgen() {
	int d; 
	printf("아이성별은 1.남자 or 2.여자?\n");
		scanf_s("%d",&d);
	return d;
}//아이의 성별을 받는 함수 

int boy(int f, int g)//아빠키 엄마키를 전달받음 
{
	int a1;//결과를 받아줌 
	a1 = ((f * 13 / 12) + g) / 2;
	return a1;
}//아이가 남자일 경우 키 계산  

int girl(int h, int i)//아빠키롸 엄마키를 전달받음 
{
	int a2;
	a2 = ((h * 12 / 13) + i) / 2;
	return a2;//결과를 받아줌 
}//아이가 여자일 경우  키 계산 

void ans(int ak) {
	int pp;
	int al;
	pp = ak % 12;//인치는 전체 인치를 12로 나눈 나머지 값 
	al = ak / 12;//피트는 전체 인치를 12로 나눈 몫 
	printf("%d feet %d meter\n", al, pp);
}//인치를 몊 피트 몇 인치로 간단히 표현해주는 함수 

int main() {
	int fa;//아빠 키 
	int eag;//종료 할것인지 말것인지를 받는 변수 
	int ch;//아이 키 연산된 결과 값을 받는 변수 
	int mo;//엄마 키 
	int sekid;//아이 성별 
	do {

		do {
			sekid = kidgen();
		} while (sekid != 1&&sekid != 2);//아이 성별을 올바르게 입력할 때 까지 반복 
											 //아이의 성별 입력 
		mo = mother();//엄마 키 
		fa = father();//아빠 키 
		if (sekid == 1)
		{
			ch = boy(fa, mo);
		}//아이가 남자일 경우의 키 
		else if (sekid == 2)
		{
			ch = girl(mo, fa);
		}//아이가 여자일 경우의 키 
		printf("아이키는?\n");
		ans(ch);//몇 피트 몇인치인지 정답 출력 
		printf("입니다\n");
		printf("종료하시겠습니까?1. y or2. n\n");
		scanf_s("%d", &eag);
		
		} while (eag == 2);
	return 0;
}