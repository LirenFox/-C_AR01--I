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
        c=cin.get();
        arr.push_back(temp);
        if(c=='\n'){
            for(int i=arr.size()-1; i>=0; i--){
                cout << arr[i]<< ' ';
            }
            arr.clear();
        }
    }
    return 0;
}
