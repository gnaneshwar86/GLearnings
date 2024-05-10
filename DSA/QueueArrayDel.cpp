#include<iostream>
using namespace std;
int queue[5],top=-1,rear=-1;
void enqueue(int n){
    if(top==4){
        cout<<"Queue Overflow"<<endl;
    }
    else{
        rear++;
        queue[rear]=n;
        if(top==-1)
        top=0;
    }
}
int dequeue(){
    if(top==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        int item=queue[top];
        if(top==rear){
            top=-1;
            rear=-1;
        }
        else
        top++;
        return item;
        
    }
}
void display(){
    for(int i=top;i<=rear;i++){
        cout<<queue[i]<<" ";
    }cout<<endl;
}
int main(){
    int val,k;
    for(int i=0;i<5;i++){
        cin>>val;
        enqueue(val);
    }
    display();
    dequeue();dequeue();
    display();
    dequeue();dequeue();dequeue();
    dequeue();

}