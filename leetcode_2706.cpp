// Leetcode 3706. Buy Two Chocolates

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int smallest = INT_MAX, secondSmallest = INT_MAX;
        for(auto price : prices)
        {
            if(price < smallest)
                secondSmallest = smallest, smallest = price;
            else if(price < secondSmallest)
                secondSmallest = price;
        }
        
        if(smallest + secondSmallest <= money)
            return money - (smallest + secondSmallest);
        else
            return money;
    }
};
