#include<iostream>
#define max 50
using namespace std;
int queue[max],top=-1,rear=-1;
void push(int n){
    if(top==max-1){
        cout<<"Queue Overflow"<<endl;
    }
    else{
        rear++;
        queue[rear]=n;
        if(top==-1)
        top=0;
    }
}
int pop(){
    if(top==-1){
        cout<<"Queue Underflow"<<endl;
    }
    else{
        int item=queue[top];
        top++;
        return item;
        
    }
}
void display(){
    cout<<"Queue is: \n";
    for(int i=top;i<=rear;i++){
        cout<<queue[i]<<" ";
    }
}
int main(){
    int n,val,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        push(val);
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cout<<"Element deleted from queue is : "<<pop()<<endl;
    }
    display();
}