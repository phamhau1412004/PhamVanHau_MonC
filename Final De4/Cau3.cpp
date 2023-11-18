#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Contract {
protected:
    string fullName;
    string idNumber;
    string address;

public:
    Contract(string name, string id, string addr) : fullName(name), idNumber(id), address(addr) {}

    virtual ~Contract() {}

    string getFullName() const {
        return fullName;
    }

    string getIdNumber() const {
        return idNumber;
    }

    string getAddress() const {
        return address;
    }

    virtual double calculateTotalBill() const = 0;
    virtual void displayContractInfo() const = 0;
};

class BasicContract : public Contract {
private:
    int callTime; //thời gian gọi
    double callRate; //tiền gọi(1000d/h)
    int dataUsage;//internet sử dụng (MB)
    double dataRate;//tiền inrternet(200d/MB)

public:
    BasicContract(string name, string id, string addr, int time, double rate, int usage, double data_rate)
        : Contract(name, id, addr), callTime(time), callRate(rate), dataUsage(usage), dataRate(data_rate) {}
    int getCallTime() const {
        return callTime;
    }

    double getCallRate() const {
        return callRate;
    }

    int getDataUsage() const{
        return dataUsage;
    }

    double getDataRate() const{
        return dataRate;
    }
    double calculateTotalBill() const override {
        double callCost = callTime * callRate;
        double dataCost = dataUsage * dataRate;
        return callCost + dataCost + (callCost + dataCost)*0.1;
    }

    void displayContractInfo() const override {
        cout << "Basic Contract Information:\n";
        cout << "Customer Name: " << getFullName() << "\n";
        cout << "Customer ID: " << getIdNumber() << "\n";
        cout << "Customer Address: " << getAddress() << "\n";
    }
};

class DataFreeContract : public BasicContract {
private:
    int dataFreeLimit;

public:
    DataFreeContract(string name, string id, string addr, int time, double rate, int usage, double data_rate, int limit)
        : BasicContract(name, id, addr, time, rate, usage, data_rate), dataFreeLimit(limit) {}

    double calculateTotalBill() const override {
        double totalBill = BasicContract::calculateTotalBill();
        return (getDataUsage() > dataFreeLimit) ? totalBill + (getDataUsage() - dataFreeLimit) * getDataRate() : totalBill;
    }
};

class DataFixContract : public BasicContract {
private:
    double fixedCost;

public:
    DataFixContract(string name, string id, string addr, int time, double rate, int usage, double data_rate, double cost)
        : BasicContract(name, id, addr, time, rate, usage, data_rate), fixedCost(cost) {}

    double calculateTotalBill() const override {
        double totalBill = BasicContract::calculateTotalBill();
        return totalBill - (totalBill * 0.1) + fixedCost;
    }
};

class Company {
private:
    vector<Contract*> contracts;

public:
    ~Company() {
        for (Contract* contract : contracts) {
            delete contract;
        }
    }

    void addContract(Contract* contract) {
        contracts.push_back(contract);
    }

    void calculateBill() const {
        for (const Contract* contract : contracts) {
            contract->displayContractInfo();
            cout << "Total Bill: " << fixed << setprecision(0) << contract->calculateTotalBill() << " VND\n";
            cout << "---------------------------\n";
        }
    }
};

int main() {
    Company company;

    // tạo thông tin
    BasicContract* contract1 = new BasicContract("Hau", "123456789", "97 Man Thien", 100, 1000, 500, 200);
    DataFreeContract* contract2 = new DataFreeContract("Hay", "987654321", "97 Man Thien", 200, 1000, 800, 200, 500);
    DataFixContract* contract3 = new DataFixContract("Ho", "456789123", "97 Man Thien", 50, 1000, 180, 200, 1000000);

    //Add vào company
    company.addContract(contract1);
    company.addContract(contract2);
    company.addContract(contract3);

    // xuất Bill
    company.calculateBill();

    return 0;
}
