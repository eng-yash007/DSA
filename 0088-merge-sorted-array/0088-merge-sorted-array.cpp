class Solution {
public:
    void swaping(vector<int>& arr1,int idx1, vector<int>& arr2, int idx2){
        //swaping kar rhe h 
        if(arr1[idx1] > arr2[idx2]){
            swap(arr1[idx1], arr2[idx2]);
        }
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m+n;
        int gap = (len/2) + (len%2); // ceil value leni h
        while(gap>0){
            int left = 0;
            int right = left + gap;
            while(right<len){
                if(left<m && right>=m){ // arr1 and arr2 elements
                    swaping(nums1, left, nums2, right-m);
                }
                else if(left>=m){ // arr2 and arr2 elements
                    swaping(nums2, left-m, nums2, right-m);
                }

                else{ // arr1 and arr1 elements
                    swaping(nums1, left, nums1, right);
                }
                left++;
                right++;
            }
            if(gap == 1) break;
            gap = (gap/2) + (gap%2);
        }
        for(int i = 0; i < n; i++){
            nums1[m + i] = nums2[i];
        }   
       
    }
};