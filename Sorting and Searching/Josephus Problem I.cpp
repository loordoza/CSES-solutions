#include <bits/stdc++.h>

using namespace std;

struct Node{
    int x;
    Node* next;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    Node* head = new Node();
    head->x=1;
    Node* tmp = head;
    for(int i=2; i<=n; ++i){
        tmp->next = new Node();
        tmp->next->x = i;
        tmp = tmp->next;
    }
    tmp->next = head;
    while(1){
        cout<<head->next->x<<' ';
        if(head->next==head)
            break;
        head->next = head->next->next;
        head=head->next;
    }
    return 0;
}