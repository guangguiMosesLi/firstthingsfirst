#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string owner_) {
        owner = owner_;
        balance = 0;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        }
        else {
            cout << "Insufficient funds" << endl;
        }
    }

    double getBalance() {
        return balance;
    }

    void printInfo() {
        cout << owner << "'s balance: ¥"
            << fixed << setprecision(1) << balance << endl;
    }
};

int main() {
    string owner;
    cout << "请输入账户名：";
    cin >> owner;

    BankAccount account(owner);

    int choice;
    while (true) {
        cout << "\n=== 银行账户系统 ===\n";
        cout << "1. 存钱\n";
        cout << "2. 取钱\n";
        cout << "3. 查询余额\n";
        cout << "4. 退出\n";
        cout << "请输入你的选择：";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "请输入数字选项！\n";
            continue;
        }

        switch (choice) {
        case 1: {
            double amount;
            cout << "请输入存入金额：";
            cin >> amount;
            account.deposit(amount);
            break;
        }
        case 2: {
            double amount;
            cout << "请输入取出金额：";
            cin >> amount;
            account.withdraw(amount);
            break;
        }
        case 3:
            account.printInfo();
            break;
        case 4:
            cout << "感谢使用，再见！\n";
            return 0;
        default:
            cout << "无效选项，请重新输入。\n";
        }
    }

    return 0;
}
