#include <iostream>

using namespace std;

int main()
{
    size_t target = 2023;
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(8);
    coins.push_back(21);
    coins.push_back(55);
    vector<int> dp;
    dp.push_back(1);
    for (size_t i = 0; i < target; ++i) {
        dp.push_back(0);
    }

    for (auto coin : coins) {
        for (size_t i = 0; i < target; ++i) {
            if (i + coin <= target) {
                dp[i + coin] += dp[i];
            }
        }
    } 

    cout << dp[target] << endl;
    return 0;
}
