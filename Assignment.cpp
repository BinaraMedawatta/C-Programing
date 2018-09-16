#include <math.h>

#include <iostream>
#include <iomanip>

using namespace std;

float myMatrix(float (&arr)[6][2]){
	
	cout << "Enter the x y pairs" << endl;
	for(int i=0; i<6; i++){
		for(int j=0; j<2; j++){
			cin >> arr[i][j];
		}
	}
}

float sumOfXvalues(float arr[6][2]){
	float sumX=0;
	
	for(int i=0; i<6; i++){
		sumX += arr[i][0];	
	}
	
	return sumX;
}

float sumOfYvalues(float arr[6][2]){
	float sumY=0;
	
	for(int i=0; i<6; i++){
		sumY += arr[i][1];	
	}
	
	return sumY;
}

float sumOfProducts(float arr[6][2]){
	float sumP=0;
	
	for(int i=0; i<6; i++){
		sumP += arr[i][0] * arr[i][1];
	}	
	
	return sumP;
}

float sumOfSquaredValues(float arr[6][2], int j){
	
	float sumS=0;
	
	for(int i=0; i<6; i++){
		sumS += arr[i][j] * arr[i][j];
	}	
	
	return sumS;
}

float numerator(float prod, float sumX, float sumY){
	return ((6 * prod) - (sumX * sumY));
}

float denominator(float sumOfXsq, float sumOfX, float sumOfYsq, float sumOfY){
	float x = ((6 * sumOfXsq) - (sumOfX * sumOfX));
	float y = ((6 * sumOfYsq) - (sumOfY * sumOfY));
	
	float sqrX = sqrt(x);
	float sqrY = sqrt(y);
	
	return (sqrX * sqrY);
}

float rCoefficient(float numer, float denom){
	return (numer / denom);
}

float showMeTheMatrix(float arr[6][2]){
	
	cout << "Your Matrix" << endl;
	cout << " x\ty" << endl;
	
	for(int i=0; i<6; i++){
		cout << " ";
		for(int j=0; j<2; j++){	
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}	
	
}

float showMeMore(float matrix[6][2]){
	
	float sumOfX = sumOfXvalues(matrix);
	float sumOfY = sumOfYvalues(matrix);
	float prod = sumOfProducts(matrix);
	float sumOfXsq = sumOfSquaredValues(matrix, 0);
	float sumOfYsq = sumOfSquaredValues(matrix, 1);
	
	float numer = numerator(prod, sumOfX, sumOfY);
	float denom = denominator(sumOfXsq, sumOfX, sumOfYsq, sumOfY);
	float r = rCoefficient(numer, denom);
	
	cout << "Sum of x : " << sumOfX << endl;
	cout << "Sum of y : " << sumOfY << endl;
	cout << "Sum of prod : " << prod << endl;
	cout << "Sum of x sq : " << sumOfXsq << endl;
	cout << "Sum of y sq : " << sumOfYsq << endl;
	cout << "Numerator : " << numer << endl;
	cout << "Denominator : " << denom << endl;
	cout << "r : " << r << endl;
	
}

int main(){
	
	float matrix[6][2];
		
	myMatrix(matrix);
	
	showMeTheMatrix(matrix);	
	
	showMeMore(matrix);
	
	return 0;	
}
