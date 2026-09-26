#include <iostream>
#include <vector>
using namespace std;

int main(){

    int equations;
    std::cout << "Number of equations: ";
    cin >> equations;
    
    vector<vector<double>> A(equations);
    vector<double> x(equations);
    vector<double> b(equations);

    std::cout << "Coefficietns \n";
    cout << "---------------\n";
    for (int i = 0; i<equations; i++){
        for (int j = 0; j<equations; j++){
            double temp;
            cin >> temp;
            A[i].push_back(temp);
        }
    }
    cout << '\n';
    cout << "Right Hand Side\n";
    cout << "---------------\n";
    for (int i = 0; i<equations; i++){
        cin >> b[i];
    }

    for (int j = 0; j<equations-1; j++){
        for (int i = j+1; i<equations; i++){
            double m = -A[i][j]/A[j][j];
            for (int k = 0; k<equations; k++){
                A[i][k] = A[i][k] + m*A[j][k];
                
            }
            b[i] = b[i]+m*b[j];
            
        }

    }
    

    for (int i = equations-1; i>=0 ; i--){
        double sum = 0;
        for (int j = i+1; j<=equations-1; j++)
            sum += A[i][j]*x[j];
        x[i] = (b[i]-sum)/A[i][i];
        // cout << sum << " " << A[i][i] << '\n';
    }

    
    std::cout <<"\n------------------\n";

    for (int i = 0; i<equations; i++)
        std::cout << "x" << i+1 << " = " << x[i] << endl;


    return 0;
}