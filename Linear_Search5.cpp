#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n ; cin >> n; 
    vector<int> v;

    bool  f = false ;
    for (int i = 0; i <n; i++)
    {
        int val;
        cin >> val;
      
        v.push_back(val);
    }
    int target;
    cin >> target;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == target){

            cout << "The Value is " << v[i] << " at index " << i << endl;
            f = true;
        }

    }
    if(!f)
        cout << "NOT Found ";

    
    return 0;
}
