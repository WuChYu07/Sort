#include<iostream>
using namespace std ;

class Bubblesort{
	/*
	Bubble sort:�۾F��Ӥ���A�̤p(�ѥk����)�A�̤j(�ѥ����k)
	Worst case:�����A��  Best case:�Ʀn���� 
	worst case comparsion/move: O(n^2) /O(n^2)  
	Best case comparsion/move: O(n^2)/O(n^2), �[�W�P�_�O�_�ƦnBest case:O(n)
	*/
	
	int A[10] = { 2, 4, 8, 10, 1, 3, 5, 7, 9, 0 } ;
	int n = 10 ;
	
	public:
		
		void bubblesort(){
			for( int pass = 1 ; pass < n ; ++pass ){ // �C�@�����|�N�̤j�ȩ�b�̫� 
				for( int index = 0 ; index < n - pass ; index++ ){ //�̫᭱�����ˬd�A�]���@�w�O�̤j�A�ҥH�C�@���ˬd�����ƴ�֡C 
					if( A[index] > A[index+1] )
						swap( index, index+1 );
				}// for
				
				Display( A ) ;
			} // for
			
			
		} // end of bubblesort
		
		void swap( int num1, int num2 ){
			int temp ; 
			temp = A[num1] ;
			A[num1] = A[num2] ;
			A[num2] = temp ;
		} // end of swap
		
		void Display( int A[] ){
			for( int i = 0 ; i < 10 ; i++ ){
				cout << A[i] << " " ;
			} // for
			
			cout << endl ;
		} // end of Display
};

int main(){

	Bubblesort bubble ;
	bubble.bubblesort( ) ;
	
} 
