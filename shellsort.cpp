#include<iostream>

using namespace std;

class Shellsort{
	/*
	���a�����p�U�ݭn�i��O(n^2)������M�洫
	�ƺ��Ƨǳq�L�N������������������X�Ӱϰ�Ӵ��ɴ��J�ƧǪ��į�C
	�o�˥i�H���@�Ӥ����i�H�@���ʦa�³̲צ�m�e�i�@�j�B�C
	�M��t��k�A���V�ӶV�p���B���i��ƧǡA�t��k���̫�@�B�N�O���q�����J�ƧǡA(�Ů欰1 
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
