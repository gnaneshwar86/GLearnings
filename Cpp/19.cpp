#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    list<int>ls;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        ls.push_back(a);
    }
    const list<int>::const_iterator result=find_if(ls.begin(),ls.end(),[](int n){ return (n%2==0);});
    if(result!=ls.end()){
        cout << "The first even number in the list is " << *result << "." << endl;
    } 
    else {
    cout << "The list contains no even numbers." << endl;
    }

    
}