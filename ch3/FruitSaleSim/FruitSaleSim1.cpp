#include <iostream>

using namespace std;

class FruitSeller
{
    int APPLE_PRICE;
    int numOfAppels;
    int myMoney;

public:
    void InitMembers(int price, int num, int money)
    {
        APPLE_PRICE = price;
        numOfAppels = num;
        myMoney = money;
    }

    int SaleApples(int money)
    {
        int num = money / APPLE_PRICE;
        numOfAppels -= num;
        myMoney += money;

        return num;
    }

    void ShowSaleResult()
    {
        cout << "남은 사과: " << numOfAppels << endl;
        cout << "판매 수익: " << myMoney << endl
             << endl;
    }
};

class FruitBuyer
{
    int myMoney;     // private:
    int numOfApples; // private:

public:
    void InitMembers(int money)
    {
        myMoney = money;
        numOfApples = 0;
    }

    void BuyApples(FruitSeller &seller, int money)
    {
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }

    void ShowBuyResult()
    {
        cout << "현재 잔액: " << myMoney << endl;
        cout << "사과 개수: " << numOfApples << endl
             << endl;
    }
};

int main(void)
{
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 2000); // 과일의 구매!

    cout << "과일 판매자의 현황" << endl;
    seller.ShowSaleResult();
    cout << "과일 구매자의 현황" << endl;
    buyer.ShowBuyResult();

    return 0;
}