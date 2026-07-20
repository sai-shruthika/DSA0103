/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int a[r][c];
    cout << "Enter matrix elements:\n";
  for(int i = 0; i < r; i++) 
    {
    for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Matrix is:\n";
    for(int i = 0; i < r; i++)
    {
    for(int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}