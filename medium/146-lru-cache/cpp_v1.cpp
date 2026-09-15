// Pushed: 2026-09-15 09:02:10 UTC
// Difficulty: Medium
// Runtime: 95 ms
// Memory: 49.4 MB

class LRUCache {
public:
    list<pair<int,int>> l;
    int c;
    LRUCache(int cap) {
        c=cap;
    }
    
    int get(int key) {
        auto it=l.begin();
        for(;it!=l.end();++it){
            if(it->first==key)
                break;
        }
        if(it==l.end())
            return -1;
        l.push_front({*it});
        l.erase(it);
        return l.front().second;
    }
    
    void put(int key, int value) {
        if(get(key)!=-1){
            l.front().second=value;
            return;
        }
        if(c==l.size())
            l.pop_back();
        l.push_front({key,value});

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */