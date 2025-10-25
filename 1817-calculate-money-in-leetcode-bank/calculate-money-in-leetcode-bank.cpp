class Solution {
public:
    int totalMoney(int n) {
        int completeWeeks = n / 7;
        int remainingDays = n % 7;
        int firstWeekSum = 28;
        int lastWeekSum = 28 + 7 * (completeWeeks - 1);
        int totalFromCompleteWeeks = (firstWeekSum + lastWeekSum) * completeWeeks / 2;
        int firstDayAmount = completeWeeks + 1;
        int lastDayAmount = completeWeeks + remainingDays;
        int totalFromRemainingDays = (firstDayAmount + lastDayAmount) * remainingDays / 2;
      
        return totalFromCompleteWeeks + totalFromRemainingDays;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();