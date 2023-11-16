#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Các hằng số cho chi phí và số tiền được tính
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    //Biến
    double length,//Chiều dài thùng
           width,// Chiều rộng của thùng
           height,// Chiều cao của thùng
           volume,// Thể tích của thùng
           cost,// Chi phí xây dựng thùng
           charge,// Phí khách hàng tính cho thùng
           profit;// Lợi nhuận kiếm được từ thùng
    // Đặt định dạng đầu ra mong muốn cho số.
    cout << setprecision(2) << fixed <<showpoint;
    // Nhắc người dùng về chiều dài, chiều rộng và chiều cao của thùng
    cout <<"Enter the dimensions of the crate(in feet):\n";
    cout <<"Length";
    cin >> length;
    cout <<"Width";
    cin >> width;
    cout <<"Height:";
    cin >> height;
    
// Tính thể tích thùng, chi phí sản xuất thùng,
 // tính phí cho khách hàng và lợi nhuận.
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

// Hiển thị dữ liệu được tính toán.
    cout << "The volume of the crate is" ;
    cout << volume << "cubic feet.\n";
    cout << "cost to build: $ " << cost <<endl;
    cout << "Profit: $" <<profit <<endl;
    return 0;

}