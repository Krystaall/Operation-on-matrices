/*
 * Roll no.- 2459
 * Name- Sharvari Sonkusare
 * CNumber- C22019221458
 * Assignment number- 1
 * Problem Statement:
Write C++ program to perform following operations on matrices:
1. Check matrix is square matrix .
2. Check matrix is upper triangular.
3. Compute transpose of matrix .
4. Add two matrices .
5. Multiply two matrices.
*/

#include<iostream>
using namespace std;

class matrix{
	int a[20][20];
	int r,c;  //r= row, c=columns
	int i,j,k;
public:
	matrix(){

	}
	matrix(int row, int column){
		r=row;
		c=column;
	}
		void accept();
		void display();
		void add(matrix m,matrix n);
		void multiplication(matrix m,matrix n);
		void transpose();
		void square();
		void uppertraingular();

};

void matrix::accept()
{
	cout<<"\nEnter number of rows:";
	      cin>>r;
	      cout<<endl;
	      cout<<"\nEnter number of columns:";
	      cin>>c;
	      cout<<endl;
	      for(i=0;i<r;i++)
	      {
	      	for(j=0;j<c;j++)
	         {
	         	cout<<"\nEnter element : ";
	                cin>>a[i][j];
	          }
	      }
}
void matrix::display()
{
	cout<<"\nThe matrix is:"<<endl;
	           for(i=0;i<r;i++)
	           {
	         	        for(j=0;j<c;j++)
	                   {
	            	        cout<<a[i][j]<<"\t";
	                   }
	                   cout<<endl;
	            }
}
void matrix ::add(matrix m,matrix n)
{
	matrix res;
	if(m.r==n.r && m.c==n.c){   //checking equality of rows and columns of 2 matrices
	int r=m.r;
	int c=n.c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		 res.a[i][j]=  m.a[i][j] + n.a[i][j];
	    }

	 }
	cout<<"\nThe result of matrix addition is is:"<<endl;
		           for(i=0;i<r;i++)
		           {
		         	        for(j=0;j<c;j++)
		                   {
		            	        cout<<res.a[i][j]<<"\t";
		                   }
		                   cout<<endl;
		            }
	}
	else cout<<"Addition not possible";  //if rows and columns equality  for 2 matrices not satisfied

}

void matrix::uppertraingular(){
	int flag;
		   for (i = 1; i < r; i++)
			   for (j = 0; j < i; j++)
		   		   if (a[i][j] != 0)
		   			flag = 0;
		   		   else
		   			flag = 1;

		   	if (flag == 1)
		   		cout<<"It is an upper triangular matrix";
		   	else
		   		cout<<"It is not an upper triangular matrix";
		   	cout<<endl;
}

void matrix::square(){
	   if(r==c){
		   cout<<"It is a square matrix" ;
		   }
		   else{
			   cout<<"It is not a square matrix" ;
		   }
	   cout<<endl;

}

void matrix::transpose(){
	 cout<<"\nTranspose of matrix:"<<endl;
		    for(i=0;i<r;i++)
		   {
		   	for(j=0;j<c;j++)
		        {
		      	      cout<<a[j][i]<<"\t";
		        }
		        cout<<endl;
		   }


}

void matrix::multiplication(matrix m, matrix n){
	matrix res;
	if( m.c==n.r){  //multiplication condition for 2 matrices, columns of a= rows of b
		int r=m.r;
		 int c=n.c;

	for(int i=0;i<m.r;i++){
		for(j=0;j<n.c;j++)
		{
			res.a[i][j]=0;
	    for(k=0;k<m.c;k++)
	    res.a[i][j]=res.a[i][j]+ (m.a[i][k] * n.a[k][j]);
	    }
	}
	cout<<"\nThe result of multiplication is is:"<<endl;
		 for(i=0;i<r;i++)
		 {
		    for(j=0;j<c;j++)
               {
	   	        cout<<res.a[i][j]<<"\t";
		       }
		       cout<<endl;
		 }
	}
	else{
		cout<<"multiplication is not possible"<<endl;        //multiplication condition not satisfied
	}


}

int main()
{
	int ch;
matrix a,b,result;

do{
	cout<<"MENU"<<endl;
	cout<<"1. accept 2 matrices \n2.display 2 matrices \n3. check if 1st matrix is a  square matrix \n4. check if the 1st matrix is upper triangular matrix \n5.transpose  of first \n6. add 2 matrices \n7.multiply 2 matrices \n8. EXIT"<<endl;
	cout<<"Enter a choice"<<endl;
	cin>>ch;
	switch(ch){
	case 1:
		a.accept();
		b.accept();
		break;
	case 2:
		a.display();
		b.display();
		break;
	case 3:
		a.square();
		break;
	case 4:
		a.uppertraingular();
		break;
	case 5:
		a.transpose();
		break;
	case 6:
		result.add(a, b);
		break;
	case 7:
		result.multiplication(a, b);
		break;
	case 8:
		cout<<"EXIT";
		break;
	default:
		cout<<"enter a valid choice";
		break;
	}
}while(ch!=8);



return 0;
}

/*
 Output:

 MENU
1. accept 2 matrices
2.display 2 matrices
3. check if 1st matrix is a  square matrix
4. check if the 1st matrix is upper triangular matrix
5.transpose  of first
6. add 2 matrices
7.multiply 2 matrices
8. EXIT
Enter a choice
1

Enter number of rows:2


Enter number of columns:2


Enter element : 1

Enter element : 2

Enter element : 3

Enter element : 4

Enter number of rows:2


Enter number of columns:2


Enter element : 1

Enter element : 2

Enter element : 3

Enter element : 4
MENU
1. accept 2 matrices
2.display 2 matrices
3. check if 1st matrix is a  square matrix
4. check if the 1st matrix is upper triangular matrix
5.transpose  of first
6. add 2 matrices
7.multiply 2 matrices
8. EXIT
Enter a choice
2

The matrix is:
1	2
3	4

The matrix is:
1	2
3	4
MENU
1. accept 2 matrices
2.display 2 matrices
3. check if 1st matrix is a  square matrix
4. check if the 1st matrix is upper triangular matrix
5.transpose  of first
6. add 2 matrices
7.multiply 2 matrices
8. EXIT
Enter a choice
3
It is a square matrix
MENU
1. accept 2 matrices
2.display 2 matrices
3. check if 1st matrix is a  square matrix
4. check if the 1st matrix is upper triangular matrix
5.transpose  of first
6. add 2 matrices
7.multiply 2 matrices
8. EXIT
Enter a choice
4
It is not an upper triangular matrix
MENU
1. accept 2 matrices
2.display 2 matrices
3. check if 1st matrix is a  square matrix
4. check if the 1st matrix is upper triangular matrix
5.transpose  of first
6. add 2 matrices
7.multiply 2 matrices
8. EXIT
Enter a choice
5

Transpose of matrix:
1	3
2	4
MENU
1. accept 2 matrices
2.display 2 matrices
3. check if 1st matrix is a  square matrix
4. check if the 1st matrix is upper triangular matrix
5.transpose  of first
6. add 2 matrices
7.multiply 2 matrices
8. EXIT
Enter a choice
6

The result of matrix addition is is:
2	4
6	8
MENU
1. accept 2 matrices
2.display 2 matrices
3. check if 1st matrix is a  square matrix
4. check if the 1st matrix is upper triangular matrix
5.transpose  of first
6. add 2 matrices
7.multiply 2 matrices
8. EXIT
Enter a choice
7

The result of multiplication is is:
7	10
15	22
MENU
1. accept 2 matrices
2.display 2 matrices
3. check if 1st matrix is a  square matrix
4. check if the 1st matrix is upper triangular matrix
5.transpose  of first
6. add 2 matrices
7.multiply 2 matrices
8. EXIT
Enter a choice
8
EXIT

TIME COMPLEXITIES:

1. accept=O(N^2)
2. display=O(N^2)
3. add= O(N^2)
4. multiplication=O(N^3)
5. transpose=O(N^2)
6. square=O(1)
7. uppertraingular=O(N^2)

 */


