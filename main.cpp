

#include "iostream"

using namespace std;

static float annualIntrestRate;

class SavingAccount {

private:
    float savingBalance;
public:

    SavingAccount(float amount){
        savingBalance = amount;
    }


    float calculateMonthlyInterest(){

        float monthlyInterest = (annualIntrestRate/12) * savingBalance ;

        return monthlyInterest + savingBalance;

    }

    static void modifyInterestRate(float annualInterstRate){

        annualIntrestRate = annualInterstRate;

    }

};

int main (){

    SavingAccount saver1(2000) , saver2(3000);

    SavingAccount::modifyInterestRate(4.0);

    float amount1 = saver1.calculateMonthlyInterest();
    cout << amount1 << endl;

    float amount2 = saver2.calculateMonthlyInterest();
    cout << amount2;


    return 0 ;
}