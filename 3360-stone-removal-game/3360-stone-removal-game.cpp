class Solution {
public:
    bool canAliceWin(int n) {
        int k = 10;
        int turn = 0;

        while (n >= k) {
            n -= k;
            k--;
            turn++;
        }

        return turn % 2 == 1;
    }
};