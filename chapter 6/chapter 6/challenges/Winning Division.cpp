#include <iostream>
#include <string>
using namespace std;

// Hàm để nhập số liệu bán hàng của một bộ phận
double getSales(const string& department) {
    double sales;
    cout << "Nhập số liệu bán hàng của bộ phận " << department << " trong quý: ";
    cin >> sales;
    while (sales < 0) {
        cout << "Số liệu không hợp lệ. Vui lòng nhập lại: ";
        cin >> sales;
    }
    return sales;
}

// Hàm để xác định bộ phận có doanh số bán hàng lớn nhất
void findHighest(double& salesNE, double& salesNW, double& salesSE, double& salesSW) {
    string highestDepartment;
    double highestSales = 0.0;
    
    if (salesNE > highestSales) {
        highestSales = salesNE;
        highestDepartment = "Đông Bắc";
    }
    if (salesNW > highestSales) {
        highestSales = salesNW;
        highestDepartment = "Đông Nam";
    }
    if (salesSE > highestSales) {
        highestSales = salesSE;
        highestDepartment = "Tây Bắc";
    }
    if (salesSW > highestSales) {
        highestSales = salesSW;
        highestDepartment = "Tây Nam";
    }
    
    cout << "Bộ phận " << highestDepartment << " có doanh số bán hàng lớn nhất: " << highestSales << " USD." << endl;
}

int main() {
    double salesNE, salesNW, salesSE, salesSW;
    
    salesNE = getSales("Đông Bắc");
    salesNW = getSales("Đông Nam");
    salesSE = getSales("Tây Bắc");
    salesSW = getSales("Tây Nam");
    
    findHighest(salesNE, salesNW, salesSE, salesSW);
    
    return 0;
}
