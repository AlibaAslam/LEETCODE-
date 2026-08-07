class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int answer = 0;
        int total = 0;
        int n = cardPoints.size();

        for (int i : cardPoints) {
            total += i;
        }

        int window = n - k;
        if (window == 0)
            return total;

        int sum = 0;
        for (int i = 0; i < window; i++) {
            sum += cardPoints[i];
        }

        answer = total - sum;

        for (int i = window; i < n; i++) {
            sum += cardPoints[i];
            sum -= cardPoints[i - window];
            answer = max(answer, total - sum);
        }

        return answer;
    }
};