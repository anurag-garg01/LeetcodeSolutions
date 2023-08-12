class RandomizedSet {
public:
// insert remove and get random in o(1) 

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end())
        return false;

        arr.push_back(val);
        mp[val]=arr.size()-1;

        return true;
    }
    
    bool remove(int val) {
        // how remove functionality works in o(1)
        if(mp.find(val)==mp.end())
            return false;


        int last = arr[arr.size()-1];

        mp[last]=mp[val];

        arr[mp[val]]=last;

        mp.erase(val);
        arr.pop_back();

        return true;

        
    }
    
    int getRandom() {
        return arr[rand()%arr.size()];
    }


    private:
    unordered_map<int,int> mp;
    vector<int> arr;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */