// TC - O(nlogn)
// SC - O(n)
// technique - we calculate arrival times for every car and then if the arrival times are same or less than the stack top, we skip it
//             because that can become a car fleet with existing car, if this is not the case, we add that into stack indicating new
//             new car fleet, and finally print out the values in stack.

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> cars;

        for(int i=0; i<position.size(); i++){
            double arrival_time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], arrival_time});
        }

        sort(cars.begin(), cars.end(), greater<>());
        stack<double> st;

        for(auto &it:cars){
            
            while(st.empty() || it.second > st.top()){
                st.push(it.second);
            }
        }
        return st.size();


    }
};
