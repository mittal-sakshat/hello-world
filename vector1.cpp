#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1;
    for(int i=0;i<5;i++)
    {
        v1.push_back(i);
    }
    for(auto i=v1.begin();i!=v1.end();i++)
    cout<<*i<<" ";
    for(auto i=v1.rbegin();i!=v1.rend();i++)
    cout<<*i<<" ";
    cout<<endl<<v1.size();
    v1.resize(4);
    cout<<endl<<v1.capacity();
}