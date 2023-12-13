#include<iostream>

using namespace std;

class Selectionsort{
	/*
	Selection sort:選擇最大或最小的放在首位或尾位(最差的)，優點不需要搬動太多
	Worst case(順序顛到) comparsion/move: O(n^2) /O(n)
	Best case(排好順序) comparsion/move: O(n)/O(n), if ( largest != latest ) swap();=>O(1)
	*/

	int A[10] = { 2, 4, 8, 10, 1, 3, 5, 7, 9, 0 } ;
	int n = 10 ;
	
	public:
		
		void selectionsort(){
			for( int i = 0; i < 10 ; i++ ){
				cout << A[i] << " " ;
			} 
			
			cout << endl;
			
			for( int last = n-1 ; last > 0 ; --last ){
				int largest = indexOfLargest( A, last+1 ) ;
				cout << largest << "------" << A[largest] << "-----------" << last << "-----------" << A[last] << endl;
				swap( largest, last ) ;
				Display() ;
			} // for
			
		} // end of selectionsort
		
		int indexOfLargest( int A[], int num ){
			int temp = 0 ;
			int max = A[temp] ;
			
			for( int i = 0 ; i < num ; i++ ){
				if( max <= A[i] ){
					max = A[i] ;
					temp = i ;
				} // if
				 
			} // for
			
			return temp ;	
		} // end of indexOfLargest
		
		void swap( int num1, int num2 ){
			int temp ; 
			temp = A[num1] ;
			A[num1] = A[num2] ;
			A[num2] = temp ;
		} // end of swap
		
		void Display(){
			for( int i = 0 ; i < 10 ; i++ ){
				cout << A[i] << " " ;
			} // for
			
			cout << endl ;
		} // end of Display
};

int main(){
	Selectionsort sort ;
	sort.selectionsort() ;
} 
