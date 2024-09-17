#include<bits/stdc++.h>
using namespace std;
struct node{
    int profit, weight;
};
bool cmp(node a, node b){
    double r1 = (double)a.profit/ (double)a.weight;
    double r2 = (double)b.profit/ (double)b.weight;
    return r1 > r2;
}
void knapSack(node a[], int n, int W){
    double res = 0;
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        if(a[i].weight <= W){
            res += a[i].profit;
            W -= a[i].weight;
        } 
        else{
            res += a[i].profit * ((double)W/ (double)a[i].weight);
            break;
        }
    }
    cout<<res;
}
int main(){
    node a[] = {{60, 10}, {100, 20}, {120, 30}};
    int n = 3;
    int W = 50;
    knapSack(a, n, W);
}