#include<iostream>
using namespace std;

#define Size 11

struct Node {
    int value;
    Node* next;
};

Node* hash_table[Size];

int hash_func(int data){
    return data % Size;
}

void insert(int data) {
    int index = hash_func(data);
    Node* temp = new Node;
    temp->value = data;
    temp->next = hash_table[index];
    hash_table[index] = temp; 
} 

int find(int data) {
    int index = hash_func(data);
    Node* fid = hash_table[index]; 
    while(fid != NULL){
        if(fid->value == data)
        return 1;
        fid = fid->next;
    }
    return 0;
}

int main() {
    insert(34);
    insert(45);
    insert(14);
    int check = find(14);
    cout << check;
    return 0;
}