#include <iostream>
#include <string>
using namespace std;
int main() {
	char Cau_tra_loi[20] = { 0 };
	char Ket_qua[20] = { 'A', 'D' , 'B', 'B' ,'C' ,'B' ,'A' ,'B' ,'C' ,'D' ,
						 'A' ,'C' ,'D' , 'B' , 'D' , 'C' , 'C' , 'A' , 'D' , 'B'};
	for (int i = 0; i < 20; i++) {
		cout << "Nhap cau tra loi cho cau hoi thu " << i + 1 << " " << endl;
		cin >> Cau_tra_loi[i];
	}
	int count = 0;
	for (int i = 0; i < 20; i++) {
		if (Cau_tra_loi[i] == Ket_qua[i]) {
			count = count + 1;
		}
	}
	cout << count;
	return 0;	
}