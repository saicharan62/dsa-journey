//TC - O(1)
//SC - O(1000000)
//technique - we use boolean array and change values as requested, true for adding, false for removing and returning key in the array.

class MyHashSet {
private:
    vector<bool> data;
public:
    MyHashSet() {
        data.resize(1000001, false);
    }
    
    void add(int key) {
        data[key] = true;
    }
    
    void remove(int key) {
        data[key] = false;
    }
    
    bool contains(int key) {
        return data[key];
    }
};
