class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int length = flowerbed.size();
        if(n==0) return true;

        if(length==1 && n==1 && flowerbed[0]==0) return true;

        int cnt = 0;
        if(flowerbed[0]==0 && flowerbed[1]==0){
            cnt++;
            flowerbed[0] = 1;
        }
        if(flowerbed[length-1]==0 && flowerbed[length-1-1]==0){
            cnt++;
            flowerbed[length-1] = 1;
        }

        for(int i=1;i<length-1;i++){
            if(flowerbed[i]==1) continue;

            else{
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    cnt++;
                    flowerbed[i] = 1;
                }
            }
        }
        if(cnt >= n) return true;
        else return false;

        
    }
};