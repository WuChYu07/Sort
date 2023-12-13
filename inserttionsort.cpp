#include<iostream>

using namespace std;

class Inserttionsort{
	/*
	Insertion Sort:將未排序區的第一筆正確插入已排序區中
	Worst case(順序顛到): comparsion/move: O(n^2)  
	Best case(排好順序): comparsion/move: O(n)
	*/

	int A[10] = { 2, 4, 8, 10, 1, 3, 5, 7, 9, 0 } ;
	int n = 10 ;
	
	public:
		
		void inserttionsort(){
			for( int unsorted = 1 ; unsorted < 10 ; ++unsorted ){ //n-1回合 
				cout << "------------------------------orgin" << endl;
				Display() ;
				cout << "------------------------------" << endl;
				
				int loc = unsorted, nextitem = A[unsorted ] ;
				
				cout << "*****************************" << endl;
				cout << unsorted << "----------" << A[unsorted] << endl;
				for( ; ( loc > 0 ) && ( A[loc-1] > nextitem ) ; --loc ) {
					A[loc] = A[loc-1] ;
					Display() ;
				} // for
				
				A[loc] = nextitem ;
				cout << "*****************************" << endl;
					
				Display() ;
				
			}
			
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
	Inserttionsort sort ;
	sort.inserttionsort() ;
} 
