#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(){
	int const maxValue = 6;
	
	int row1, row2;
	int column1, column2;
	
	cout << "enter dimension for matrix1: " << endl;
	
	cin >> row1 >> column1; //enter dimension for matrix1
	if(row1 > maxValue || column2 > maxValue){
		cerr << "matrix should not be greater than 6 by 6. " << endl;
		return 1;
	}
	
	double matrix1[row1][column1]; //create the matrix
	
	cout << "enter dimension for matrix2: " << endl;
	
	cin >> row2 >> column2; //enter dimension for matrix2
	if(row2 > maxValue || column2 > maxValue){
		cerr << "matrix should not be greater than 6 by 6. " << endl;
		return 1;
	}
	
	if(column1 != row2){ //compatibility check
		cerr << "matrix incompatible" << endl;
		return 1;
	}

	double matrix2[row2][column2]; //create the matrix
	
	double matrix3[row1][column2];  // create the product matrix
	
	cout << "enter values for second matrix: " << endl;
	
	for(int i = 0; i < row1; i++){ //input data for matrix1
		for(int j = 0; j < column1; j++){
			cin >> matrix1[i][j];
		}
	}
	
	cout << "enter values for second matrix: " << endl;
	
	for(int i = 0; i < row2; i++){ //input data for matrix2
		for(int j = 0; j < column2; j++){
			cin >> matrix2[i][j];
		}
	}
	
	for(int i = 0; i < row1; i++){ //matrix multiply
		for(int j = 0; j < column2; j++){
			for(int k = 0; k < column1; k++){
				matrix3[i][j] = matrix3[i][j] + matrix1[i][k] * matrix2[k][j];
			}
		}
	}

	cout << "product matrix: " << endl;
	
	for(int i = 0; i < row2; i++){ //display product matrix
		for(int j = 0; j < column2; j++){
			cout << matrix3[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
