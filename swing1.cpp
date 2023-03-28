#include <iostream>
using namespace std;

int main() {

	char name[12];
	double score1; // 실수형 변수 생성
	double score2;
	double score3;
	double score4;

	cout << "이름: ";
	cin.getline(name, 12, '\n'); // 공백을 포함한 이름 입력받기
	cout << "학번: 2023\n" << "반갑습니다." << name << "님" << endl;
	cout << endl << "학점 입력을 시작합니다." << endl;
	cout << endl << "========== SWING 31 ==========" << endl;
	cout << "C프로그래밍(3학점): ";
	cin >> score1; // 과목 점수 입력받기
	cout << "컴퓨터및정보보호학개론(3학점): ";
	cin >> score2;
	cout << "소프트웨어개발실무영어1(1학점): ";
	cin >> score3;
	cout << "대학고급영어(2학점): ";
	cin >> score4;
	cout << "==============================" << endl;
	cout << endl << name << "님의 전체 학점은 " << (score1 + score2 + score3 + score4) / 4 << "입니다."; // 4 과목의 학점을 더해 4로 나눈 후 출력

	return 0;
}