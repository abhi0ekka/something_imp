#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

void bruteForceMethod(vi &price)
{
    int max = 0;
    int buy = 0, sell = 0;
    for (int i = 0; i < price.size(); i++)
    {
        for (int j = i + 1; j < price.size(); j++)
        {
            int diff = price[j] - price[i];
            if (max < diff)
            {
                max = diff;
                buy = i;
                sell = j;
            }
        }
    }
    if (max == 0)
        cout << "No transaction\n";
    else
    {
        printf("Buy at  : %d\n", buy);
        printf("Sell at : %d\n", sell);
        printf("Profit : %d", max);
    }
}

void auxillaryArray(vi &price)
{
    int till_max = INT_MIN;
    vi auxillar(price.size());
    for (int i = price.size() - 1; i >= 0; i--)
    {
        till_max = max(till_max, price[i]);
        auxillar[i] = till_max;
    }
    int diff;
    int max = 0;
    for (int i = 0; i < price.size(); i++)
    {
        diff = auxillar[i] - price[i];
        if (max < diff)
            max = diff;
    }
    if (max == 0)
        cout << "No transaction\n";
    else
        cout << max;
}

void mostOptamised(vi &price)
{
    int max_profit = 0;
    int min_sofar = price[0];
    for (int i = 1; i < price.size(); i++)
    {
        int curr_profit = price[i] - min_sofar;
        max_profit = max(max_profit, curr_profit);
        min_sofar = min(min_sofar, price[i]);
    }
    if (max_profit == 0)
        cout << "No transcation";
    else
        cout << max_profit;
}

int main()
{
    int len;
    cin >> len;

    vi price(len);

    for (int i = 0; i < len; i++)
        cin >> price[i];
    bruteForceMethod(price);
    auxillaryArray(price);
    mostOptamised(price);
}