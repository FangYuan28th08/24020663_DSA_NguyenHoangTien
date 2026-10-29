#include<iostream>
using namespace std;

#define Size 11
#define EMPTY -1 

int hash_table[Size];

int hash_func(int data) {
    return data % Size;
}

void init() {
    for(int i = 0;i < Size; i++) {
        hash_table[i] = EMPTY;
    }
}

void insert(int data) {
    int index = hash_func(data);
    int start_index = index;
    while (hash_table[index] != EMPTY) {
        if(hash_table[index] == data) return;
        index = (index + 1) % Size;
        if(index == start_index) return; 
    }
    hash_table[index] = data;
}

int find(int data) {
    int index = hash_func(data);
    int start_index = index;

    while (hash_table[index] != EMPTY) {
        if (hash_table[index] == data) return 1; 
        
        index = (index + 1) % Size;
        if (index == start_index) break; 
    }
    return 0; 
}

int main() {
    init(); 
    insert(34); 
    insert(45); 
    insert(14); 
    insert(11); 
    cout << "Tim 14: " << (find(14) ? "Co" : "Khong") << "\n";
    return 0;
}