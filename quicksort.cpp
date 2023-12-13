#include<iostream>

using namespace std;

class Quicksort{
	/*
	Quicksort(快速排序)
	-Choose a pivot
	-Partition the array about pivot(先:分組(軸的位置 
		item < pivot
		item >= pivot
		Piovt is in correct sorted 	posistion
	-sort the left section(後:遞迴 
	-sort the right section 
		 
	Worst case(排好順序):O(n^2)
	Average case:O(n*log2n)
 
	*/

	int A[10] = { 2, 4, 8, 10, 10, 3, 5, 7, 9, 0 } ;
	int n = 10 ;
	int first = 0, last = 10 ;
	public:
		void Callquicksort(){
			quicksort( A, first, last ) ;
		}
		
		void quicksort( int A[], int first, int last ){
			int pivotIndex ;
			if( first < last ){
				partition( A, first, last, pivotIndex ) ;
				quicksort( A, first, pivotIndex-1 ) ;
				quicksort( A, pivotIndex+1, last ) ;
			}
			
		} // end of selectionsort
		
		void partition( int A[], int first, int last, int &pivotIndex ){
			int pivot = A[first] ;
			int lastS1 = first ;
			int firstUnknown = first + 1 ;
			while( firstUnknown <= last ){
				if( A[firstUnknown] < pivot ){
					++lastS1 ;
					swap( lastS1, firstUnknown ) ;
				} // if
				
				++firstUnknown ;
			} // while
			
			swap( first, lastS1 ) ;
			pivotIndex =lastS1 ;
			
		} // end of partition
		
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
	Quicksort sort ;
	sort.Callquicksort() ;
	sort.Display() ;
} 
