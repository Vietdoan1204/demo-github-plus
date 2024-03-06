#include<bits/stdc++.h>
using namespace std;
 class hospital{
 private:
 	int x, y, width , height;
 public:
    void field(int centerX , int centerY , int rong , int sau){
 	    this ->	x = centerX;
 		this -> y = centerY;
 		this -> width = rong;
 		this -> height = sau;
	 }
	int getX(){
		return this -> x;
	} 
	int getY(){
		return this -> y;
	} 
    void printIn4(){
	 	cout << x <<"," << y <<"," << width <<"," << height << "\n";
	}
 };
 
 
 
 
 int main(){
 	vector< pair<int,int> > corners(4);
 	for(int i = 0 ; i < 4 ; i++){
 		cout <<"Nhap vao toa do benh vien " << i ;
 		cin >> corners[i].first >> corners[i].second;
	 }
	int centerX = (corners[0].first + corners[1].first) / 2;
	int centerY = (corners[0].second + corners[3].second) / 2;
	
	int M , N;
	cout << "Nhap vao M:";
	cin >> M ;
	cout << "Nhap vao N:";
	cin >> N ;
	int chieuNgang , chieuSau;
	cout <<"Nhap vao chieu ngang: ";
	cin >> chieuNgang ;
	cout <<"Nhap vao chieu sau: ";
	cin >> chieuSau;
	int road;
	cout <<"Nhap vao chieu ngang con duong: ";
	cin >> road;
	hospital KhoaVien[M][N];
	

	for(int i = 0; i < N; i++){
		for(int j = 0 ; j < M; j++){
			int a = centerX  / M + j * centerX / M * 2 ;
			int b = centerY / N + i * centerY / N * 2;
			int c = chieuNgang * 2;
			int d = chieuSau * 2;
			KhoaVien[i][j].field(a,b,c,d);
	        KhoaVien[i][j].printIn4();
		}
	}
  
	return 0;
	}
