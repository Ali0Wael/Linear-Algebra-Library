#include <iostream>
#include <vector>
using namespace std;

int main(){

    // row(r) column (c)
    int r, c;

    // input dimensions of matrix
    cout << "Columns: ";
    cin >> c;

    cout << "Rows: ";
    cin >> r;

    // matrix
    vector<vector<float>> m(r, vector<float>(c));


    // input elements of matrix
    for (int i = 0; i<r; i++){
        for (int j = 0; j<c; j++){
            cin >> m[i][j];
        }
    }

    
    cout << "Matrix M \n";
    for (int i = 0; i<r; i++){
        for (int j = 0; j<c; j++){
            cout << m[i][j] << " ";
        }
        cout << '\n';
    }

    vector<vector<float>> mt(c, vector<float>(r));

    for (int i = 0; i<r; i++){
        for (int j = 0; j<c; j++){
            mt[j][i] = m[i][j];
        }
    }
    
    cout << "Matrix M transpose\n";
    for (int i = 0; i<c; i++){
        for (int j = 0; j<r; j++){
            cout << mt[i][j] << " ";
        }
        cout << '\n';
    }

    
    

    return 0;
}