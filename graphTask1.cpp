#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<vector<int>> mas(n);

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int temp; 
            cin >> temp;
            mas[i].push_back(temp);
        }
        
    }
    
    for (int i = 0; i < mas.size(); i++)
    {
        cout << i << ": ";
        for (int j = 0; j < mas[i].size(); j++)
        {
            cout  << mas[i][j] << " ";
        }

        cout << "\n";
        
    }


    return 0;
}