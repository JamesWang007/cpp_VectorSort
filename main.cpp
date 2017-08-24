// Example program
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
     
int main()
{
    vector <int> v1;
     
    for( int i = 0;i < 10;i ++)
    {
        v1.push_back(i+1);
    }  
    
    class Student {
          public:
          string name;  
    };
    
    struct {
        bool operator() (int a, int b) const 
        {
            return a > b;  
        };
    } CustomLess;
     
    //sort(v1.begin(), v1.end(), CustomLess);
    
    sort(v1.begin(),v1.end(),[](int a, int b){
         return b < a;
         });
    
    for (auto &x : v1)
    {
         x = pow(x, 2);
    }
    
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
