#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p=0;
		int q=0;
        char X,O;
		int flag=0;
		int flag2=0;
		int count=0;
		int xcount=0;
		int ocount=0;
	    char a[3][3];
	    for(int i=0;i<3;i++){
	        for(int j=0;j<3;j++){
	            cin>>a[i][j];
	           
	        }
			cout<<endl;
	    }

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if(a[i][j]=='_'){
					flag=1;
					count++;
				}
				if(a[i][j]=='X'){
					
					xcount++;
				}
				if(a[i][j]=='O'){
					
					ocount++;
				}


			}
			
		}
		
	    if(flag==1){
	    if((a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') || (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') || (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') ||(a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')|| (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') ||   (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') || (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')||    (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')   || (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')  ||  (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')  || (a[0][2]== 'O' && a[1][2] == 'O' && a[2][2]  == 'O') || (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')   || (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') || (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X') || (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')  )
		{
				flag2=1;
		}
			
		}
		
		
    }
	return 0;
}
