#include <iostream>
using namespace std;

struct node
{
    int val;
    node* next; //wskaznik na kolejny element
};
void push(node*&H, int x){
    node* tmp = new node;
    tmp -> val = x;

    tmp -> next =H;
    H=tmp;
}

void push_ost(node*&H, int x) // dodawanie jako ostatni element
{
    node* tmp = new node;
    tmp -> val = x;

    node* p = H;
    while(p->next != NULL)
        p = p->next;
        p-> next = tmp;
        tmp->next = NULL;
    

}

void pop(node*&H){
    node* p = H; // p jest tworzone - mozemy sie dowolne poruszac, jezel uzyjemy HEADA to lsita bedzie zmodyfikowana

    if(p == NULL){
        cout << "lista jest pusta";
    }
    else if(p->next == NULL){
        H = NULL;
        delete p;
    }
    else
    {
        while(p->next != NULL)
        {
            p =p->next;
        }
        node*s =H;
        while(s->next != p){
            s = s->next;
        }
        s->next = p->next;
        delete p;
    }
    
}

void pop_poczatek(node *&H){
    node*p = H;
    H = H->next;
    delete p;

}

void show(node* H)
{
    node* p =H;
    while (p != NULL)
    {
        cout<<p->val<<" -> " ;
        p = p->next;
    }
    cout <<  endl;

}

void push_x(node*&H, int x, int po_ktorym){

    node* tmp = new node;
    tmp -> val = x;
    node* p = H;

    while(p->val != po_ktorym)
        p = p->next;
    tmp->next =p->next;
    p->next =tmp;

}

int main()
{
    node* H = NULL;
    push(H,1);
    push(H,2);
    push(H,3);
    show(H);
    push_ost(H,4);
    show(H);
    pop_poczatek(H);
    show(H);
    push_x(H,4,2);
    show(H);

    return 0;
}