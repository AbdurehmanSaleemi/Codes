#include <iostream>
#include <fstream>
using namespace std;

void loadMatrix(char *filename, int**& matrix, int &rows, int &cols)
{
    cin.get(filename, 20, '\n');
    ifstream dataRead;
    dataRead.open(filename);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            dataRead >> *(*(matrix + i)+j);
        }
    }
}
void printData(int **matrix, int &rows)
{
    int index;
    int count = 0;
    int *indexValue;

    for (int i = 0; i < rows; i++)
    {
        if(*(matrix + i) != 0)
        {
            index = i;
            indexValue = *(matrix + i);
            count++;
        }
    }
}
