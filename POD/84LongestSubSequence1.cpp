// You are using GCC
#include<iostream>
#include<vector>
using namespace std;
vector<string> sub(string a){
    vector<string>v;
    for(int i=0;i<a.length();i++){
        string c="";
        c+=a[i];
        v.push_back(c);
        int k=i;
        while(k<a.length()){
            c="";
            c+=a[i];
            for(int j=k+1;j<a.length();j++){
                c+=a[j];
                v.push_back(c);
            }
            k++;
        }
    }
    for(int i=a.length()-1;i>=0;i--){
        string c="";
        c+=a[i];
        int k=i;
        while(k>=0){
            c="";
            c+=a[i];
            for(int j=k-1;j>=0;j--){
                c+=a[j];
                v.push_back(c);
            }
            k--;
        }
    }
    return v;
}
int main(){
    string a,b;
    cin>>a>>b;
    vector<string>v,k;
    v=sub(a);
    k=sub(b);
    int max=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<k.size();j++){
            if(v[i]==k[j] && max>v[i].length()){
                cout<<v[i]<<" "<<v[j]<<endl;
                max=v[i].length();
            }
        }
    }
    cout<<max;
}