class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1+n2;
        vector<int> arr = nums1;
        arr.insert(arr.end(), nums2.begin(), nums2.end());
        sort(arr.begin(), arr.end());

        if(n % 2 != 0){
            return arr[n/2];
        }
        else{
            return (arr[n/2 - 1] + arr[n/2]) / 2.0;
        }
    }
};