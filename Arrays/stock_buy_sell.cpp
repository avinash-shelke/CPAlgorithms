// Stock buy and sell

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& stock){
    int n = stock.size();
    int profit =0;
    for(int i=1;i<n;i++){
        if(stock[i] > stock[i-1]){
            profit += (stock[i]-stock[i-1]);
        }
    }
    return profit;
}

int main()
{
    vector<int> stock = {1, 5, 3, 8, 12};
    cout<<"The Maximum Profit would be: ";
    cout<<maxProfit(stock);

}