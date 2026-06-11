class Solution {
public:
    int totalMoney(int n) {
        int total_money = 0;
        int monday_money = 1;
        
        int current_money = monday_money;
        for (int day = 1; day <= n; ++day) {
            total_money += current_money;
            current_money++;
            
            if (day % 7 == 0) {
                monday_money++;
                current_money = monday_money;
            }
        }
        
        return total_money;
    }
};