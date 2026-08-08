class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> city;
        for (const auto& path : paths) {
            city[path[0]] = path[1];
        }
        for (const auto& path : paths) {
            if (city.find(path[1]) == city.end()) {
                return path[1];
            }
        }
        return "";
    }
};