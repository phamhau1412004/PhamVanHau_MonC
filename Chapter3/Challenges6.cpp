#include <iostream>
using namespace std;

int main()
{
    int begInv,
        sold,
        store1,
        store2,
        store3;

    cout << "one week ago, 3 new widget stores opened\n";
    cout << "at the same time with the same beginning\n ";
    cout << "inventory. what was the beginning inventory?";
    cin >> begInv;

    store1 = store2 = store3 = begInv;
    cout <<"How many widgets has store 1 sold?";
    cin >> sold;
    store1 -= sold;  //phép toán trư gán,store1= store1-sold.

    cout <<"How many widgets has store 2 sold?";
    cin >> sold;
    store2 -= sold; //phép toán trư gán,store2= store2-sold.

    cout <<"How many widgets has store 3 sold?";
    cin >> sold;
    store3 -= sold; //phép toán trư gán,store3= store3-sold.

    cout <<"\n The current inventory of each store:\n";
    cout <<"store1: "<< store1 << endl;
    cout <<"store2: "<< store2 << endl;
    cout <<"store3: "<< store3 << endl;
    return 0;
    }