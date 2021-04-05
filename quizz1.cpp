#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter rows";
    cin >> rows;

    int *arr = new int[rows];

    int queryTotal;
    
    std::cout <<"Total Queries = ";
    std::cin >> queryTotal;
    int* queryArr = new int[2 * queryTotal];

    for (int i = 0; i < queryTotal; i++)
    {
        cin >> queryArr[i];
    }

    for (int j = 0; j < rows; j++)
    {
        arr[j] = 0;
    }
    
    int temp1;
    int temp2;

    for (int i = 0; i < rows; i++)
    {
        if(i == queryArr[i])
        {
            temp1 = queryArr[i];
            temp2 = queryArr[i + 1];
        }

        for (int k = temp1; k < temp2; k++)
        {
            arr[k]++;
        }
        
    }

    for (int i = 0; i < rows; i++)
    {
        cout << arr[i] << " ";
    }
    

}