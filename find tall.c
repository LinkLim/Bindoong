#include<stdio.h>
int father() {
	int feet;//피트 
	int inch;//인치 
	printf("아버지의 키를 피트와 인치를 띄어서 입력하시오\n "); 
	scanf_s("%d %d",&feet,&inch);
	printf("아버지의 키는 %d피트 %d인치입니다\n", feet, inch);//아버지가 몇 피트 몇 인치 인지를 받음 
	return (feet * 12 + inch);//인치값으로 변환 
}//아버지의 키를 받는 함수 

int mother() {
	int feet;//피트 
	int inch;//인치 
	printf("어머니의 키를 피트와 인치를 띄어서 입력하시오\n");
	scanf_s("%d %d", &feet, &inch);
		printf("어머니의 키는 %d피트 %d인치입니다\n",feet, inch);
	return (feet * 12 + inch);//인치값으로 변환 
}//어머니의 키를 받는 함수 

char kidgen() {
	int gender; 
	printf("아이의 성별은 1.남자 or 2.여자?\n");
		scanf_s("%d",&gender);
	return gender;
}//아이의 성별을 받는 함수 

int boy(int f, int m)//아버지의 키 어머니의 키를 전달받음 
{
	return (((f * 13 / 12) + m) / 2;;
}//아이가 남자일 경우 키 계산  

int girl(int f, int m)//아버지의 키와 어머니의 키를 전달 받음 
{
	return ((f * 12 / 13) + m) / 2; 
}//아이가 여자일 경우  키 계산 

void ans(int height) {
	int feet;
	int inch;
	feet = height % 12;//인치는 전체 인치를 12로 나눈 나머지 값 
	inch = height / 12;//피트는 전체 인치를 12로 나눈 몫 
	printf("%d feet %d inch\n", feet, inch);
}//인치를 몇 피트 몇 인치로 간단히 표현해주는 함수 

int main() {
	int fa;//아빠 키 
	int eag;//종료 할 것인지 말 것인지를 받는 변수 
	int ch;//아이 키 연산된 결과 값을 받는 변수 
	int mo;//엄마 키 
	int gender;//아이 성별 
	do {

		do {
			gender = kidgen();	//아이의 성별 입력
		} while (gender != 1&&gender != 2);	//아이 성별을 올바르게 입력할 때 까지 반복 
											
		mo = mother();//어머니의 키 
		fa = father();//아 키 
		if (gender == 1)
		{
			ch = boy(fa, mo);
		}//아이가 남자일 경우의 키 
		else if (gender == 2)
		{
			ch = girl(mo, fa);
		}//아이가 여자일 경우의 키 
		printf("아이키는?\n");
		ans(ch);//몇 피트 몇인치인지 정답 출력 
		printf("입니다\n");
		printf("종료하시겠습니까? 1.Yes or 2.No \n");
		scanf_s("%d", &eag);
		
		} while (eag == 2);
	return 0;
}
