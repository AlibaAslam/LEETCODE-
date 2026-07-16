class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        //BRUTE FORCE APPROACH
        int len = students.size();
        queue<int> studentQueue;
        stack<int> SandwichStack;

        for (int i = 0; i < len; i++) {
            studentQueue.push(students[i]);
        }
        for (int i = len - 1; i >= 0; i--) {
            SandwichStack.push(sandwiches[i]);
        }

        int lastServed = 0;
        while (!studentQueue.empty() && lastServed < studentQueue.size()) {
            if (SandwichStack.top() == studentQueue.front()) {
                SandwichStack.pop();
                studentQueue.pop();
                lastServed = 0;
            } else {
                studentQueue.push(studentQueue.front());
                studentQueue.pop();
                lastServed++;
            }
        }

        return studentQueue.size();
    }
};