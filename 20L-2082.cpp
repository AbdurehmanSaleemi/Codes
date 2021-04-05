#include <iostream>

int *alloc (int &rows)
{
    return nullptr;
}

void InputOfQuery(int *arr, int rowsQuery)
{
    std::cout << "Enter rows of Query";
    std::cin >> rowsQuery;
    for (int i = 0; i < rowsQuery; i++)
    {
       std::cin >> arr[i];
    }
}

void assigningZeors(int *arr, int &rows)
{
    for (int i = 0; i < rows; i++)
    {
        *(arr + i) = 0;
    }
}

void findQuery(int *arr, int &rows, int *arr1, int rowsQuery)
{
    int tempIndex1;
    int tempIndex2;

    for (int i = 0; i < rows; i++)
    {
        if(i == *(arr1 + rowsQuery))
        {
            tempIndex1 = arr1[i];
            tempIndex2 = arr1[i + 1];
        }

        if(i == tempIndex1)
        {
            for (int j = tempIndex1; j < tempIndex2; j++)
            {
                arr[j]++;
            }
        }
    }
}

void deallocate(int *arr)
{
    delete [] arr;
    arr = NULL;
}

int main()
{
    int rows;
    int *arr = alloc(rows);
    int queryRows;
    int *queryArray = new int[queryRows];
    InputOfQuery(queryArray, rows);
    assigningZeors(arr, rows);
    findQuery(arr, rows, queryArray, queryRows);
    deallocate(arr);
    deallocate(queryArray);
}