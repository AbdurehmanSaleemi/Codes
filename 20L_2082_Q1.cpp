#include <iostream>

char** AllocateMemory(int& rows, int& cols)
{
    std::cout << "Enter Rows = ";
    std::cin >> rows;
    std::cout << "Enter Cols = ";
    std::cin >> cols;

    if(rows > 0 && cols > 0)
    {
        char** arr = new char* [rows];
        for (int i = 0; i < rows; i++)
        {
            arr[i] = new char[cols];
        }

        return arr;
    }
    return nullptr;
}

void Output(char* arr, int rows)
{
    std::cout << "Array \n";
    for (int i = 0; i < rows; i++)
    {
        std::cout << arr[i] << " ";
    }
    
}
void InputMatrix(char** matrix, const int rows, const int cols)
{
    std::cout << "Enter the array of size " << rows << " x " << cols << std::endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cin >> *(*(matrix + i) + j);
        }
    }
}

void DisplayMatrix(char** matrix, const int& rows, const int& cols)
{
    std::cout << "Output of the array \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << *(*(matrix + i) + j) << " ";
        }
        std::cout << std::endl;
    }
}

char* dynamicArray(char** arr, const int rows, const int cols, int returnVal)
{
    //Array 1
    char* alphabets = new char[10];
    
    //Array2
    char* numbers = new char[10];

    //Array 3
    char* specialChars = new char[10];

    //Main Code
    int a = 0, b = 0, c = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j] >= 65 && arr[i][j] <= 90 || arr[i][j] >= 97 && arr[i][j] <= 122)
            {
                alphabets[a] = arr[i][j];
                a++;
            }
            else if(arr[i][j] >= 48 && arr[i][j] <= 57 )
            {
                numbers[b] = arr[i][j];
                b++;
            }
            else if(arr[i][j] >= 33 && arr[i][j] <= 47 || arr[i][j] >= 58 && arr[i][j] <= 64 || arr[i][j] >= 91 && arr[i][j] <= 96)
            {
                specialChars[c] = arr[i][j];
                c++;
            }
        }
        
    }
    if(returnVal == 1)
    {
        return alphabets;
    }
    else if(returnVal == 2)
    {
        return numbers;
    }
    if(returnVal == 3)
    {
        return specialChars;
    }
    return nullptr;
}

void DeallocateMemory(char **arr, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
    arr = NULL; 
}

void dealloc1D(char *arr)
{
    delete [] arr;
    arr = NULL; 
}
int main()
{
    int rows, cols;
    int returnVal = 1;
    char** arr = AllocateMemory(rows, cols);
    InputMatrix(arr, rows, cols);
    DisplayMatrix(arr, rows, cols);
    //Array 1
    char* alphabets = new char[10];
    
    //Array2
    char* numbers = new char[10];

    //Array 3
    char* specialChars = new char[10];

    alphabets = dynamicArray(arr, rows, cols, returnVal);
    returnVal++;

    numbers = dynamicArray(arr, rows, cols, returnVal);
    returnVal++;

    specialChars = dynamicArray(arr, rows, cols, returnVal);

    std::cout << "Alphbets\n";
    Output(alphabets, 3);
    std::cout << std::endl;
    std::cout << "Numbers\n";
    Output(numbers, 3);
    std::cout << std::endl;
    std::cout << "Char\n";
    Output(specialChars, 3);
    std::cout << std::endl;

    DeallocateMemory(arr, rows);
    dealloc1D(alphabets);
    dealloc1D(numbers);
    dealloc1D(specialChars);
}