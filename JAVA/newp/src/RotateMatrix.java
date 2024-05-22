import java.util.*;
class RotateMatrix
{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int row=s.nextInt();
		int col=s.nextInt();
		int [][]a=new int[row][col];
		for(int i=0;i<row;i++)
		{
		    for(int j=0;j<col;j++)
		    {
		        a[i][j]=s.nextInt();
		    }
		}
		int n=s.nextInt();
		Clock cl=new Clock();
 		Clock cc=new Clockwise();
 		Clock ac=new Anticlockwise();
 			int [][]b=new int[row][col];
		for(int i=0;i<row;i++)
		{
		    for(int j=0;j<col;j++)
		    {
		        b[i][j]=a[i][j];
		    }
		}
		Anticlockwise acw=new Anticlockwise();
 		for(int k=0;k<n;k++)
 		cc.rotate(row,col,a,n);
 		System.out.println("Clockwise ");
 		 for (int i = 0; i < row; i++)
           {
               for (int j = 0; j < col; j++)
               System.out.print( a[i][j] + " ");
               System.out.print("\n");
           }
 		System.out.println("Anti clockwise ");
       int r=row;
       int c=col;
       int k=n;
       int f,K;
       int l = 0;
       int m = 0;
       int Row = r-1;
       int Col = c-1;
       while(l < Row && m < Col)
       {
              int rot = 2*(Row-l)+2*(Col-m);
              f = n%rot;
              for(int i=1;i<=f;i++)
              {
                    ac.rotate(row,col,b,n);
                    
                    acw.rotation(l,m,Row,Col,b);
              }
              l++;
              m++;
              Row--;
              Col--;
       }
           for (int i = 0; i < row; i++)
           {
               for (int j = 0; j < col; j++)
               System.out.print( b[i][j] + " ");
               System.out.print("\n");
           }
           
           
           
	}
}
class Clock
{
    public Clock()
    {
        
    }
    void rotate(int row,int col,int a[][],int num)
    {
        
    }
}
class Clockwise extends Clock
{
    static int R;
   static int C;

    void rotate(int m,int n,int mat[][],int num)
    {
        R = m;
        C = n;

        int row = 0, col = 0;
       int prev, curr;
       while (row < m && col < n)
       {
           if (row + 1 == m || col + 1 == n)
               break;
           prev = mat[row + 1][col];
           for (int i = col; i < n; i++)
           {
               curr = mat[row][i];
               mat[row][i] = prev;
               prev = curr;
           }
           row++;
           for (int i = row; i < m; i++)
           {
               curr = mat[i][n-1];
               mat[i][n-1] = prev;
               prev = curr;
           }
           n--;
           if (row < m)
           {
               for (int i = n-1; i >= col; i--)
               {
                   curr = mat[m-1][i];
                   mat[m-1][i] = prev;
                   prev = curr;
               }
           }
           m--;
           if (col < n)
           {
               for (int i = m-1; i >= row; i--)
               {
                   curr = mat[i][col];
                   mat[i][col] = prev;
                   prev = curr;
               }
           }
           col++;
       }
       
     
    }
}
class Anticlockwise extends Clock
{
     void rotate(int m,int n,int mat[][],int num)
   {}
   void rotation(int l, int m, int Row, int Col,int mat[][])
{
       int si,sj,i,j,t,f;
       si = l;
       sj = m;
       t = mat[l][m];
      
       for(i=l+1;i<=Row;i++)
       {
              f = mat[i][m];
              mat[i][m] = t;
              t = f;
       }
       l++;
       for(i=m+1;i<=Col;i++)
       {
              f = mat[Row][i];
              mat[Row][i] = t;
              t = f;
       }
       m++;
       if(l-1 < Row)
       {
              for(i=Row-1;i>=l-1;i--)
              {
                     f = mat[i][Col];
                     mat[i][Col] = t;
                     t = f;
              }
       }
       Col--;
       if(m-1 < Col)
       {
              for(i=Col;i>=m;i--)
              {
                     f = mat[l-1][i];
                     mat[l-1][i] = t;
                     t = f;
              }                         
       }
       Row--;
       mat[si][sj] = t;
       return;
}

}
