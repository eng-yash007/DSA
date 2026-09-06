class Solution {
public:

    int fun(vector<int>& weights, int cap){
        int day = 1;
        int load = 0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i] > cap){
                day++;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = *max_element(weights.begin(), weights.end());
        int sum = 0;
        for(int element: weights){
            sum += element;
        }
        int low = maxi;
        int high = sum;
        while(low<=high){
            int mid = (low+high)/2;
            int no_of_days = fun(weights, mid);
            if(no_of_days > days){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};