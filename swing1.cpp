#include <iostream>
using namespace std;

int main() {

	char name[12];
	double score1; // �Ǽ��� ���� ����
	double score2;
	double score3;
	double score4;

	cout << "�̸�: ";
	cin.getline(name, 12, '\n'); // ������ ������ �̸� �Է¹ޱ�
	cout << "�й�: 2023\n" << "�ݰ����ϴ�." << name << "��" << endl;
	cout << endl << "���� �Է��� �����մϴ�." << endl;
	cout << endl << "========== SWING 31 ==========" << endl;
	cout << "C���α׷���(3����): ";
	cin >> score1; // ���� ���� �Է¹ޱ�
	cout << "��ǻ�͹�������ȣ�а���(3����): ";
	cin >> score2;
	cout << "����Ʈ����߽ǹ�����1(1����): ";
	cin >> score3;
	cout << "���а�޿���(2����): ";
	cin >> score4;
	cout << "==============================" << endl;
	cout << endl << name << "���� ��ü ������ " << (score1 + score2 + score3 + score4) / 4 << "�Դϴ�."; // 4 ������ ������ ���� 4�� ���� �� ���

	return 0;
}