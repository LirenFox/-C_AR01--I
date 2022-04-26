#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    char c;
    vector<int> arr;
    int temp;
    while(cin >> temp){
        arr.push_back(temp);
    }
    for(int i=arr.size()-1; i>=1; i--)
                cout << arr[i]<< " ";
            cout << arr[0]<< endl;
    return 0;
}
