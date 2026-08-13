class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        double ans = 0;

        int n = prices.size();
        int m = discounts.size();

        int k = min(n, m);
        for (int i = 0; i < k; i++) {
            // 60% disc ke baad 40% hi to pay karna h isiliye 100 se disc[i] minus kia 
            ans += (double)prices[i] * (100 - discounts[i]) / 100.0;
        }

        // Remaining items get no discount
        for (int i = k; i < n; i++) {
            ans += prices[i];
        }

        return ans;
    }
};