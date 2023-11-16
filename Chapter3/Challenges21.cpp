#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //Hằng số
    const int MIN_VALUE = 1;//Giá trị khuôn tối thiểu
    const int MAX_VALUE = 6;//Giá trị khuôn tối đa
    //Biến
    int die1;//Để giữ giá trị của xúc xắc số 1
    int die2;//Để giữ giá trị của xúc xắc số 2
    //Lấy thời gian của hệ thống.
    unsigned seed = time(0);
    srand(seed);
    cout <<"Rolling the dice...\n";
    die1 = (rand () % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    die2 = (rand () % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
    cout << die1 <<endl;
    cout << die2 <<endl;
}   