#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename K, typename V>
class KeyValuePair {
private:
    K key;    // Correct type K instead of T
    V value;

public:
    // Constructor
    KeyValuePair(K k, V v) : key(k), value(v) {}

    // Accessor for key
    K getKey() const {
        return key;
    }

    // Accessor for value
    V getValue() const {
        return value;
    }
};

template <typename K, typename V>
class Dictionary {
private:
    vector<KeyValuePair<K, V>> items; // Use KeyValuePair<K, V>

public:
    // Method to add key-value pairs
    void Add(K key, V value) {
        KeyValuePair<K, V> pair(key, value); // Use constructor
        items.push_back(pair);
    }

    // Method to get value by key
    V getValue(const K& key) {
        for (const auto& item : items) {
            if (item.getKey() == key) {
                return item.getValue();
            }
        }
        return V(); // Return default value if key not found
    }

    // Overloading the << operator for easy printing
    friend ostream& operator<<(ostream& os, const Dictionary& dict) {
        for (const auto& item : dict.items) {
            os << item.getKey() << " => " << item.getValue() << endl;
        }
        return os;
    }
};

int main() {
    Dictionary<string, string> mapObj;
    mapObj.Add("blr", "Bangaluru");
    mapObj.Add("chn", "Chennai");
    mapObj.Add("hyd", "Hyderabad");

    cout << mapObj.getValue("blr") << endl; // Expected output: Bangaluru
    cout << mapObj; // Print all key-value pairs

    return 0;
}
