#include <iostream>
#include <cstdio>
#include <vector>

#define MAX_AGE 130

using namespace std;

vector<int> create_random_vector(int max_size, int length)
{
    srand (time(NULL));
    vector<int> v;
    for(int i = 0; i < length; i++){
        v.push_back(rand() % 131);
    }
    
    return v;
}
    
vector<int> ageSort(vector<int> a)
{
    vector<int> s(MAX_AGE, 0);
    
    for(long long i = 0; i < a.size(); i++)
    {
        s[a[i]]++;
    }
    return s;
}

void print_vector(vector<int> v)
{
    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            cout << "age" << i << ":" << v[i] << endl;
        }
    }
}

int main() {
    
    vector<int> v = create_random_vector(130, 100);
    vector<int> s(MAX_AGE, 0);
    
    s = ageSort(v);
    
    for(int i = 0; i < s.size(); i++)
    {
        cout << "age" << i << ":" << s[i] << endl;
    }
    
    return 0;
}
