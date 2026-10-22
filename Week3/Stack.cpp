#include <iostream>
using namespace std;

struct Lstack{
    int a[1000];
    int n;
    Lstack(){
        n=0;
    }
    bool isEmpty(){
        return n == 0;
    }
    int size() {
        return n;
    }
    void push(int data){
        a[n]=data;
        n++;
    }
    int pop(){
        if(isEmpty()) return -1;
        int popData = a[n-1];
        n--;
        return popData;
    }
    int top(){
        if(isEmpty()) return -1;
        return a[n-1];
    }
};

struct Node{
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* themdau(Node* head,int data) {
    Node* p = new Node(data);
    p->next = head;
    return p;
}

Node* xoadau(Node* head) {
    if(head == NULL) return NULL;
    Node* temp = head;
    head=head->next;
    delete temp;
    return head;
}

struct LLstack{
    Node* head;
    int n;
    LLstack() {
        head = NULL;
        n=0;
    }
    bool isEmpty() {
    return head == NULL;
    }
    int size() {
        return n;
    }
    int top() {
        if(isEmpty()) return -1;
        return head->data;
    }
    void push(int item) {
        head = themdau(head, item);
        n++;
    }
    int pop() {
        if(isEmpty()) return -1;
        int popItem = head->data;
        head = xoadau(head);
        n--;
        return popItem;
    }
};

int main(){
    Lstack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout<<"Kich thuoc s1: "<<s1.size()<<endl;
    cout<<s1.pop()<<" ";
    cout<<s1.pop()<<" ";
    cout<<s1.pop()<<endl;
    LLstack s2;
    s2.push(4);
    s2.push(5);
    s2.push(6);
    cout<<"Kich thuoc s2: "<<s2.size()<<endl;
    cout<<s2.pop()<<" ";
    cout<<s2.pop()<<" ";
    cout<<s2.pop()<<endl;
    return 0;
}