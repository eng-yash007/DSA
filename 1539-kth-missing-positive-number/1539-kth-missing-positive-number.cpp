class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int mx = *max_element(arr.begin(), arr.end());
        int cnt = 0;
        int i=1;
        while(i<=mx){
            if(find(arr.begin(), arr.end(), i) == arr.end()){
                cnt++;
            }
            if(cnt == k){
                return i;
            }
            i++;
        }
        return mx + (k - cnt);
    }
};