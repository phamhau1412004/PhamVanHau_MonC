#include<iostream>
#include<string.h>
using namespace std;
class Bike {
private:
 	char* brand; // hiệu xe 
public:
	Bike(){
		brand = NULL;
	}
	//Ham tao ra
	Bike(const char* b){
		brand = new char[strlen(b) + 1];//them ki tu NULL ơ cuối nên phải +1;
		strcpy(brand, b);
	}
	//hàm sao chép
	Bike(const Bike& other){
		brand = new char[strlen(other.brand) + 1];
		strcpy(brand, other.brand);
	}
	Bike& operator = (const Bike& other){ //phương thuc sao chep
		if(this != &other){
			delete[] brand;//giải phóng bộ nhớ động của brand khi đối tượng phương thức(this) và đối tượng sao chép(other) khác nhau;
			brand = new char[strlen(other.brand) + 1];
			strcpy(brand, other.brand);
		}
		return *this;
	}
 	virtual void move(int t1) {
		if(brand){
 			cout << brand << ":" << t1*12 << " ";
}
else {
            cout << ":" << t1*12 << endl;
        }
	} 
	//hàm hủy
	virtual ~Bike(){
		delete[] brand;
	}
};
class EBike : public Bike {
public: 
	void move(int t2) {
 		Bike::move(t2 * 2);
 	}
};
void display(Bike& a, EBike& b) {
 	a.Bike::move(2);
 	b.move(2);
}
int main() {
 	EBike b1, b2; 
 	display(b1,b2);
 	return 0;
}