#include <iostream>

using namespace std;

const int TABLE_SIZE = 128;

class HashNode
{  
    public:
        int key;
        int value;
        HashNode* next;
        HashNode(int key, int value)
        {
            this->key = key;
            this->value = value;
            this->next = NULL;
        }
};

class HashTable{
    private:
    HashNode **table ;

    public:
    HashTable(){
        table = new HashNode*[TABLE_SIZE];
        for(int i=0;i<TABLE_SIZE;i++){
            table[i] = NULL;
        }
    }
    void search(int key){
        int hash = (key % TABLE_SIZE);
        if(table[hash] == NULL){
            cout << "Key not found" << endl;
        }
        else{
            HashNode *entry = table[hash];
            while(entry != NULL && entry->key != key){
                entry = entry->next;
            }
            if(entry == NULL){
                cout << "Key not found" << endl;
            }
            else{
                cout << "Key found: " << entry->value << endl;
            }
        }
    }
    void insert(int key, int value){
        int hash = (key % TABLE_SIZE);
        if(table[hash] == NULL){
            table[hash] = new HashNode(key, value);
        }
        else{
            HashNode *entry = table[hash];
            while(entry->next != NULL){
                entry = entry->next;
            }
            if(entry->key == key){
                entry->value = value;
            }
            else{
                entry->next = new HashNode(key, value);
            }
        }
    }
};

int main(){
    HashTable hash;
    hash.insert(1, 10);
    hash.insert(2, 20);
    hash.insert(3, 30);
    hash.insert(4, 40);
    hash.insert(5, 50);
    hash.insert(6, 60);
    hash.insert(7, 70);
    hash.insert(8, 80);
    hash.insert(9, 90);
    hash.insert(10, 100);
    hash.search(1);
    hash.search(2);
    hash.search(3);
    hash.search(4);
    hash.search(5);
    hash.search(6);
    hash.search(7);
    hash.search(8);
    hash.search(9);
    hash.search(10);
    return 0;
}

