#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> prices;
    int temp;
    while(cin >> temp){
        cout << temp << " ";
        prices.push_back(temp);
    }
    cout << endl;
        
    cout << prices[0];
    return 1;
}