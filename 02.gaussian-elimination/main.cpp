#include <iostream>
#include <vector>
using namespace std;

int main(){

    int equations;
    std::cout << "Number of equations: ";
    cin >> equations;
    
    vector<vector<double>> A(equations); // coefficient matrix
    vector<double> x(equations); // matrix to store value of unknowns
    vector<double> b(equations); // vector to store right hand side


    // take inputs of A
    std::cout << "Coefficietns \n";
    cout << "---------------\n";
    for (int i = 0; i<equations; i++){
        for (int j = 0; j<equations; j++){
            double temp;
            cin >> temp;
            A[i].push_back(temp);
        }
    }

    // take inputs of b
    for (int i = 0; i<equations; i++){
        cin >> b[i];
    }


    // elimination to form upper triangle (U)
    for (int j = 0; j<equations-1; j++){
        for (int i = j+1; i<equations; i++){
            double m = -A[i][j]/A[j][j];
            for (int k = 0; k<equations; k++){
                A[i][k] = A[i][k] + m*A[j][k];
                
            }
            b[i] = b[i]+m*b[j];
            
        }

    }
    
    // back substitution
    for (int i = equations-1; i>=0 ; i--){
        double sum = 0;
        for (int j = i+1; j<=equations-1; j++)
            sum += A[i][j]*x[j];
        x[i] = (b[i]-sum)/A[i][i];
    }

    std::cout <<"\n------------------\n";
    for (int i = 0; i<equations; i++){
        for (int j = 0; j<equations; j++){
            std::cout << A[i][j] << " ";
        }
        std::cout << "= " << b[i] << '\n';
    }
    std::cout <<"\n------------------\n";

    for (int i = 0; i<equations; i++)
        std::cout << "x" << i+1 << " = " << x[i] << endl;


    return 0;
}