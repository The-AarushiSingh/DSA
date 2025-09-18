#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> unionBF(vector<int>& a, vector<int>& b){
    set<int> s;
    for(int x: a) s.insert(x);
    for(int x: b) s.insert(x);

    return vector<int>(s.begin(), s.end());
}
int main(){
    vector<int> a={1,3,5,7,9};
    vector<int> b={1,2,3,4,5,6,9};

    vector<int> result=unionBF(a,b);
    cout<<"Union is: ";
    for(int x:result) cout<<x<<" ";
    cout<<endl;

    return 0;
}