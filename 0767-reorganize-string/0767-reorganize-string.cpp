class Solution {
public:
    string reorganizeString(string s) {
    unordered_map<char,int> mp;
    
    string result;
    
    // hashmap for the string
    for (auto c :s){
        mp[c]++;
    }
    
    
    priority_queue< pair<int,char>> maxheap;
    
    for(auto &[ch,count]:mp){
        maxheap.push({count,ch});
    }
    
    
    // we will iterate over the max-heap to get 
    // highet element 
    
    
    while(maxheap.size()>1){
        
        auto [count1,ch1] = maxheap.top(); // {3,a}
        maxheap.pop();
        auto [count2,ch2] = maxheap.top();
        maxheap.pop();



        
        
        result += ch1;  // a 
        result += ch2;

        count1--;
        count2--;

        if(count1>0){
         maxheap.push({count1,ch1});
        }


        if (count2>0){
            maxheap.push({count2,ch2});
        }
        



        
        // maxheap.push({count-1,ch});
        
    }

    // while the maxheap is not empty 
    while(!maxheap.empty()){
        auto [count,ch] = maxheap.top();
        if(count >1){
            return "";
        }
        result += ch;
        maxheap.pop();
    }
    
    return result;
    }
};