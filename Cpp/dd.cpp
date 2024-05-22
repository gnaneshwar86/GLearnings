// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}




// You are using GCC
#include<bits/stdc++.h>
using namespace std;
bool pos(vector<int>&a,int m,int k,int day){
    int n=a.size();
    int c=0,noo=0;
    for(int i=0;i<n;i++){
        if(a[i]<=day)c++;
        else{
            noo+=c/k;
            c=0;
        }
    }
    noo+=c/k;
    if(noo>=m)return true;
    else return false;
}
int mi(vector<int>&a,int m,int k){
    int n=a.size();
    if(n<(long)m*k)return -1;
    int low=*min_element(a.begin(),a.end());
    int high=*max_element(a.begin(),a.end());
    while(low<=high){
        int mid=low+(high-low)/2;
        if(pos(a,m,k,mid))high=mid-1;
        else low=mid+1;
    }
    return low;
}
int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m,k;cin>>m>>k;
    cout<<mi(a,m,k);
}




// You are using GCC
#include<iostream>
#include<numeric>
using namespace std;
struct node{
    int d;
    struct node *next;
}*head=NULL,*pos=NULL,*newn=NULL;
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
void ins(int n){
    newn=new node();
    newn->d=n;
    newn->next=NULL;
    if(head==NULL){
        head=newn;
        pos=newn;
    }
    else{
        pos->next=newn;
        pos=newn;
    }
}
void in(){
    pos=head;
    while(pos!=NULL){
        cout<<pos->d<<" ";
        pos=pos->next;
    }
}
int main(){
    int n,a,b;
    cin>>n;
    n--;
    cin>>a;
    int t=a;
    for(int i=0;i<=n;i++){
        cin>>b;
        ins(t);
        int res=gcd(t,b);
        if(i!=n)
        ins(res);
        t=b;
    }
    in();
}




// You are using Java
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        String[] b=a.split(" ");
        List<String>l=new ArrayList<>();
        for(int i=0;i<b.length;i++){
            for(int j=0;j<b.length;j++){
                if(!b[i].equals(b[j]) && b[j].contains(b[i])){
                    l.add("'"+b[i]+"'");
                    break;
                }
            }
        }
        String c=l.toString();
        System.out.print(c);
    }
}




// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b;cin>>n;
    unordered_set<int>a;
    for(int i=0;i<n;i++){
        cin>>b;
        a.insert(b);
    }
    int m=a.size();
    for(auto i:a){
        if(i%2==0){
            m--;
        }
    }cout<<m;
}




# You are using MYSQL
select t.employee_id from
(select * from Employees left join Salaries using(employee_id) union
select * from Employees right join Salaries using(employee_id)
) as t
where t.name is null or t.salary is null
order by employee_id;





// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void maxs(string a,int k,string& max){
    if(k==0)return;
    int n=a.length();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
                if(a.compare(max)>0)max=a;
                maxs(a,k-1,max);
                swap(a[i],a[j]);
            }
        }  
    }
}
int main(){
    int k;string a;
    cin>>k>>a;
    string max=a;
    maxs(a,k,max);
    cout<<max;
}