#include <unordered_map>

class DoubleLinkedList {
public:
    int key;
    int value;
    DoubleLinkedList* next;
    DoubleLinkedList* prev;
    
    DoubleLinkedList(int k, int v) {
        key = k;
        value = v;
        next = nullptr;
        prev = nullptr;
    }
};

class LRUCache {
public:
    std::unordered_map<int, DoubleLinkedList*> cache;
    int capacity;
    DoubleLinkedList* head;
    DoubleLinkedList* tail;
    
    LRUCache(int c) {
        capacity = c;
        head = new DoubleLinkedList(0, 0);
        tail = new DoubleLinkedList(0, 0);
        head->next = tail;
        tail->prev = head;
    }
    
    void _add(DoubleLinkedList* node) {
        node->prev = head;
        node->next = head->next;
        head->next->prev = node;
        head->next = node;
    }
    
    void _remove(DoubleLinkedList* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    
    int get(int key) {
        if (cache.find(key) != cache.end()) {
            DoubleLinkedList* node = cache[key];
            _remove(node);
            _add(node);
            return node->value;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            _remove(cache[key]);
        }
        DoubleLinkedList* node = new DoubleLinkedList(key, value);
        _add(node);
        cache[key] = node;
        if (cache.size() > capacity) {
            DoubleLinkedList* node = tail->prev;
            _remove(node);
            cache.erase(node->key);
            delete node;
        }
    }
};
