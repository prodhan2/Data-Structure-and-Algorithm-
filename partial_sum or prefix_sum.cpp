#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int>v ={1,3,4,2,2,4,5,6};
    vector<int>a(v.size());
    partial_sum(v.begin(),v.end(),a.begin());
    for(auto X : a)
    {
        cout<<X<<endl;
    }

    return 0;
}

