#include <list>
#include <unordered_map>
#include <algorithm>
using namespace std;
class LRUCache
{
public:
    LRUCache(int capacity)
    {
        _capacity = capacity;
    }

    int get(int key)
    {
        if (_cache.count(key)) {
            int ret = _cache[key]->second;
            _list.splice(_list.begin(), _list, _cache[key]);
            _cache[key] = _list.begin();
            return ret;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if (!_cache.count(key)) {
            if (_list.size() >= _capacity) {
                _cache.erase(_list.back().first);
                _list.pop_back();
            }
            _list.emplace_front(key, value);
            _cache.emplace(key, _list.begin());
        } else {
            _cache[key]->second = value;
            _list.splice(_list.begin(), _list, _cache[key]);
            _cache[key] = _list.begin();
        }
    }
private:
    int _capacity;
    list<pair<int, int>> _list;
    unordered_map<int, list<pair<int, int>>::iterator> _cache;
};
