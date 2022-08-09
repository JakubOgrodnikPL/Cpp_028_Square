#include <iostream>

using namespace std;

int n;

int main()
{
    cout << "This program should draw a square of a side given by n as well as diagonals of the square" << endl;
    cout << "Give n: " << endl;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
            if(i==1 || i==n || j==1 || j==n || i==j || i+j==n+1)
                cout<<"* ";
            else
                cout<<"  ";
        cout<<endl;
    }

    cout<< "Press any key to exit"<<endl;
    getchar(); getchar();
    return 0;
}
