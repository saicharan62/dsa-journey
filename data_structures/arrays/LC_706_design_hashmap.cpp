//TC - O(1)
//SC - O(10^6)
//technique - we use array to manipulate with values, replicating a hashmap.

class MyHashMap {
private:    
    vector<int> data;
public:
    MyHashMap() {
        data.resize(1000006, -1);
    }
    
    void put(int key, int value) {
        data[key] = value;
    }
    
    int get(int key) {
        return data[key];
    }
    
    void remove(int key) {
        data[key] = -1;
    }
};
