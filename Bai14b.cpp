#include<bits/stdc++.h>

using namespace std ;
int main(){
  	int x, y;
  	cout << "Nhap vao toa do BV truc x: ";
  	cin >> x;
  	cout << "Nhap vao toa do BV truc y: ";
  	cin >> y;
  	int d1, d2;
  	cout << "Nhap vao d1: ";
  	cin >> d1;
  	cout << "Nhap vao d2: ";
  	cin >> d2;
  	cout<< x - abs(x) -d1 <<"," << y - abs(y) - d1 <<" ";
  	cout<< x - abs(x) -d1 <<"," << y + abs(y) + d1 << " ";
  	cout<< x + abs(x) +d1 <<"," << y + abs(y) + d1 << " ";
  	cout<< x + abs(x) +d1 <<"," << y - abs(y) - d1 <<"\n";
  	cout<< x - abs(x) -(d1 + d2) <<"," << y - abs(y) - (d1+d2) << " ";
  	cout<< x - abs(x) -(d1 + d2) <<"," << y + abs(y) + (d1+d2) << " ";
  	cout<< x + abs(x) +(d1 + d2) <<"," << y + abs(y) + (d1+d2) << " ";
  	cout<< x + abs(x) +(d1 + d2) <<"," << y - abs(y) - (d1+d2) << " ";
  	return 0;
  }
