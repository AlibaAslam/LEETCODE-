class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> s;
        int x = 0;
        int y = 0;
        s.insert(to_string(x) + " " + to_string(y));
        for (char i : path) {
            if (i == 'N')
                y++;
            if (i == 'S')
                y--;
            if (i == 'W')
                x--;
            if (i == 'E')
                x++;
            string str = to_string(x) + " " + to_string(y);
            if (s.find(str) != s.end())
                return true;

            s.insert(str);
        }

        return false;
    }
};