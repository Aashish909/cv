#include<iostream>
#include<set>

using namespace std;

int main()

{
    set<int> s;

    s.insert(8);
    s.insert(4);
    s.insert(0);
    s.insert(9);
    s.insert(0);
    s.insert(9);
    

    for(auto i:s)
    {
        cout<<i<<endl;
    }
}