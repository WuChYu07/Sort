#include<iostream>

using namespace std;

class Mergesort{
	/*
	Merge sort(合併排序)
	-A recursive sorting algorithm
	-Performance is independent of the initial order of the array item.
	-Strategy
	 -Divide an array into halves(先:分組)
	 -Sort each half(各自排序)
	 -Merge the sort halves into one sorted array(後:合併)
	 -Divide-and-conquer
	優點:Mergesort is an extremely fast algorithm.
	缺點: Mergesort requires a second array as large as the original array.
	O(n*log2n)

	*/

	
	int n = 10 ;
	int A[10] = { 10, 4, 8, 2, 1, 6, 5, 3, 9, 7 } ;
	int first = 0, last = 9 ;
	int Answer[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	public:
		
		void Callmergesort(){
			mergesort( A, first, last);
			DisplaygoalA(A) ;
		}
		
		void mergesort( int A[], int first, int last ){
			if( first < last ){
				int mid = ( first + last ) / 2 ;
				mergesort( A, first, mid ) ;
				mergesort( A, mid+1, last ) ;
				merge( A, first, mid, last) ;
			}
			
		} // end of mergesort
		
		void merge( int A[], int first, int mid, int last ){
			int i, j, k;
			int n1 = mid - first + 1 ;
			int n2 = last - mid ;
			
			int L[n1], R[n2] ;
			
			for ( i = 0; i < n1; i++ ){
				L[i] = A[first + i]; 
			} // for
			   
			for ( j = 0; j < n2; j++ ){
				R[j] = A[mid + 1 + j] ;
			} // for				
				
			i = 0 ;
			j = 0 ;
			k = first ;
			
			while (i < n1 && j < n2) {
			    if (L[i] <= R[j])
			        A[k++] = L[i++] ;
			    else
			        A[k++] = R[j++] ;
			}
			
			while ( i < n1 ){
				A[k++] = L[i++] ;
			} // while
			    
			    
			while ( j < n2 ){
				A[k++] = R[j++] ;
			} // while
			
		} // merge
		
		void Display(){
			for( int i = 0 ; i < 10 ; i++ ){
				cout << A[i] << " " ;
			} // for
			
			cout << endl ;
		} // end of Display
		
		void DisplaygoalA( int tempA[] ){
			for( int i = 0 ; i < 10 ; i++ ){
				cout << tempA[i] << " " ;
			} // for
			
			cout << endl ;
		} // end of Display
};

int main(){
	Mergesort sort ;
	int first = 0, last = 10 ;
	sort.Callmergesort() ;
} 
