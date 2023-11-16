#include <iostream>
using namespace std;

// Function prototypes
void arrSelectSort(int *[], int, bool reverseOrder = false); // Chú ý thêm tham số reverseOrder
void showArray(const int[], int);
void showArrPtr(int *[], int);

int main()
{
    int numDonations;

    // Yêu cầu người dùng nhập số lượng quyên góp
    cout << "Nhập số lượng quyên góp: ";
    cin >> numDonations;

    if (numDonations <= 0) {
        cout << "Số lượng quyên góp không hợp lệ. Chương trình kết thúc." << endl;
        return 1;
    }

    // Cấp phát động một mảng để lưu trữ các giá trị quyên góp
    int *donations = new int[numDonations];

    // Yêu cầu người dùng nhập giá trị của các khoản quyên góp
    for (int i = 0; i < numDonations; i++) {
        cout << "Nhập quyên góp " << i + 1 << ": ";
        cin >> donations[i];
    }

    // Tạo một mảng con trỏ tới int.
    int **arrPtr = new int *[numDonations];

    for (int count = 0; count < numDonations; count++)
        arrPtr[count] = &donations[count];

    // Sắp xếp các phần tử của mảng con trỏ theo thứ tự giảm dần.
    arrSelectSort(arrPtr, numDonations, true); // Đặt tham số reverseOrder thành true

    // Hiển thị quyên góp bằng cách sử dụng mảng con trỏ. Điều này
    // sẽ hiển thị chúng theo thứ tự giảm dần.
    cout << "Các quyên góp, được sắp xếp theo thứ tự giảm dần: \n";
    showArrPtr(arrPtr, numDonations);

    // Hiển thị các quyên góp theo thứ tự ban đầu.
    cout << "Các quyên góp, theo thứ tự ban đầu: \n";
    showArray(donations, numDonations);

    // Giải phóng bộ nhớ động được cấp phát
    delete[] donations;
    delete[] arrPtr;

    return 0;
}

// Định nghĩa hàm arrSelectSort.
void arrSelectSort(int *arr[], int size, bool reverseOrder)
{
    int startScan, minIndex;
    int *minElem;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = arr[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (reverseOrder) {
                if (*(arr[index]) > *minElem) // So sánh ngược lại nếu reverseOrder là true
                {
                    minElem = arr[index];
                    minIndex = index;
                }
            } else {
                if (*(arr[index]) < *minElem)
                {
                    minElem = arr[index];
                    minIndex = index;
                }
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

// Định nghĩa hàm showArray.
void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

// Định nghĩa hàm showArrPtr.
void showArrPtr(int *arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl;
}
