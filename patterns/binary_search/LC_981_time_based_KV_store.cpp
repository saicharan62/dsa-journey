// TC - O(log n)
// SC - O(1)

class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> map;

    TimeMap() { }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if(map.find(key) == map.end()) return "";

        auto &vec = map[key];

        int l = 0;
        int h = vec.size() - 1;
        string res = "";
        while(l <= h) {
            int m = l + (h - l)/2;
            if(vec[m].first <= timestamp) {
                res = vec[m].second;
                l = m + 1; 
            }
            else {
                h = m - 1;
            }
        }
        return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
