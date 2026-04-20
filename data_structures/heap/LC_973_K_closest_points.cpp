// TC - O(n)
// SC - O(n)
// technique - we make use of maxHeap by storing points along with their distance from origin, by doing so we end up storing closest K from origin, and then use extra space to store points and return 

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> maxH;

        for(auto &p:points) {
            int dist = p[0]*p[0] + p[1]*p[1];

            maxH.push({dist, p});
            if(maxH.size() > k) maxH.pop();
        }
        vector<vector<int>> res;

        while(!maxH.empty()) {
            res.push_back(maxH.top().second);
            maxH.pop();
        }
        return res;
    }
};
