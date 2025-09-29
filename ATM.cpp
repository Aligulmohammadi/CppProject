#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0; // موجودی اولیه
int amount;
    cout << "ATM Menu:" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        // کدهای مربوط به هر گزینه منو را اینجا بنویسید
   case 1:
   cout << "your balance is $" << balance << endl;
   break;
   case 2:
   cout << " enter amount to deposit: $";
   cin >> amount;
   if(amount>0){
    balance += amount;
    cout <<" Deposit succesfully! your new balance: $" << balance << endl;
    } else {
    	cout << "Invalid amount" << endl;
    	}
    	break;
    	case 3:
    	cout << "enter amount to withdraw: $"<< endl;
    	cin >> amount;
    	if(amount > 0 && amount <= balance) {
    		balance -= amount;
    		cout << "withdaw succesfully! your new balance: $" << balance << endl;
    		} else {
    			cout << " Invalid amount" << endl;
    			}
    			break;
    	
    	case 4:
    	cout << "Thank you for using our ATM. Goodbye!"<< endl;
    	break;
    	default:
    	cout <<" Invalid choice! please enter 1 - 4" << endl;
    	
    }

    return 0;
}