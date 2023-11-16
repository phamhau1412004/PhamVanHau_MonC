#include <iostream>
using namespace std;

// Hàm để nhập số lượng cuộn đặt hàng và kiểm tra dữ liệu đầu vào
int getOrderQuantity() {
    int quantity;
    do {
        cout << "Nhập số lượng cuộn đặt hàng: ";
        cin >> quantity;
    } while (quantity < 1);
    return quantity;
}

// Hàm để nhập số lượng cuộn dây đồng trong kho và kiểm tra dữ liệu đầu vào
int getInventoryQuantity() {
    int quantity;
    do {
        cout << "Nhập số lượng cuộn dây đồng trong kho: ";
        cin >> quantity;
    } while (quantity < 0);
    return quantity;
}

// Hàm để nhập số lượng cuộn đặt hàng trước và kiểm tra dữ liệu đầu vào
int getPreorderQuantity() {
    int quantity;
    do {
        cout << "Nhập số lượng cuộn đặt hàng trước: ";
        cin >> quantity;
    } while (quantity < 1);
    return quantity;
}

// Hàm để nhập số lượng cuộn sẵn sàng xuất xưởng từ kho hiện tại và kiểm tra dữ liệu đầu vào
int getReadyToShipQuantity() {
    int quantity;
    do {
        cout << "Nhập số lượng cuộn sẵn sàng xuất xưởng từ kho hiện tại: ";
        cin >> quantity;
    } while (quantity < 0);
    return quantity;
}

// Hàm để nhập thông tin về phí vận chuyển và xử lý đặc biệt cho từng cuộn đặt hàng
double getSpecialHandlingFee(int quantity) {
    double fee = 0.0;
    for (int i = 1; i <= quantity; i++) {
        double cuonFee;
        cout << "Nhập phí vận chuyển và xử lý đặc biệt cho cuộn " << i << ": $";
        cin >> cuonFee;
        fee += cuonFee;
    }
    return fee;
}

// Hàm để tính và hiển thị thông tin về trạng thái đơn hàng
void displayOrderStatus() {
    int orderQuantity = getOrderQuantity();
    int inventoryQuantity = getInventoryQuantity();
    int preorderQuantity = getPreorderQuantity();
    int readyToShipQuantity = getReadyToShipQuantity();
    double specialHandlingFee = getSpecialHandlingFee(orderQuantity);

    int totalReadyToShip = readyToShipQuantity + min(orderQuantity, inventoryQuantity);
    double totalShippingFee = totalReadyToShip * 100.0;
    int totalOrdersReadyToShip = min(orderQuantity, inventoryQuantity);

    cout << "\nTrạng thái đơn hàng:\n";
    cout << "Số lượng cuộn đã sẵn sàng xuất xưởng: " << totalReadyToShip << " cuộn\n";
    cout << "Số lượng cuộn đặt hàng đã sẵn sàng để vận chuyển: " << totalOrdersReadyToShip << " cuộn\n";
    cout << "Tổng số phần đã sẵn sàng để vận chuyển: $" << totalShippingFee << "\n";
    cout << "Tổng phí vận chuyển và xử lý trên phần hàng đã sẵn sàng để vận chuyển: $" << specialHandlingFee << "\n";
    cout << "Tổng số đơn hàng đã sẵn sàng để vận chuyển: " << totalOrdersReadyToShip << " đơn hàng\n";
}

int main() {
    displayOrderStatus();

    return 0;
}
