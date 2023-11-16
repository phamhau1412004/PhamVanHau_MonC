#include <iostream>
#include <string>
using namespace std;
int main() {
	const int NUM_STUDENT = 5;
	const int NUM_SCORE = 4;
	string NAME_STUDENT[NUM_STUDENT];
	int SCORE[NUM_SCORE];
	double diem_kiem_tra[NUM_STUDENT][NUM_SCORE];
	for ( int i = 0 ; i < NUM_STUDENT ; i++) {
		for ( int j = 0 ; j < NUM_SCORE ; j++) {
			cout << "Nhap ten va diem cua sinh vien thu " << i + 1;
			cin >> diem_kiem_tra[i][j];
			double diem_tong = 0;
			for (int i = 0; i < NUM_STUDENT; i++) {
				for (int j = 0; j < NUM_SCORE; j++) {
					diem_tong = diem_kiem_tra[i][j] + diem_tong;
				}
			}
			