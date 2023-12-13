#include<iostream>

using namespace std;

class Shellsort{
	/*
	最壞的情況下需要進行O(n^2)的比較和交換
	希爾排序通過將比較的全部元素分為幾個區域來提升插入排序的效能。
	這樣可以讓一個元素可以一次性地朝最終位置前進一大步。
	然後演算法再取越來越小的步長進行排序，演算法的最後一步就是普通的插入排序，(空格為1 
	*/

	int A[10] = { 2, 4, 8, 10, 1, 3, 5, 7, 9, 0 } ;
	int n = 10 ;
	
	public:
		
		void shellsort(){
			for( int h = n/2 ; h > 0 ; h = h/2 ){
				
				for( int unsorted = h ; unsorted < n ; ++unsorted ){
					cout << "------------------------------orgin" << endl;
					Display() ;
					cout << "------------------------------" << endl ;
					
					int loc = unsorted ;
					int nextitem = A[unsorted] ;
					cout << loc << "*****************************"<< nextitem << endl;
					for( ; ( loc >= h ) && ( A[loc-1] > nextitem ) ; loc = loc - h ){
						A[loc] = A[loc-h] ;
						Display() ;
					} // for
	
					A[loc] = nextitem ;
					cout << "*****************************" << endl;
					
					Display() ;
				} // for
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
		} // end of inserttionsort
		
		void Display(){
			for( int i = 0 ; i < 10 ; i++ ){
				cout << A[i] << " " ;
			} // for
			
			cout << endl ;
		} // end of Display
};

int main(){
	Shellsort sort ;
	sort.shellsort() ;
} 
