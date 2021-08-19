#include <iostream>

using namespace std;

// Bruh the c in school was more detailed than this...
// What happened to malloc, sizeof, etc...

int main()
{
    int numberGrid[2][3] = {{1, 2, 3},
                            {4, 5, 6}};

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cout << "Array [" << i << "][" << j << "] = " << numberGrid[i][j] << endl;

    // My way

    int *A = NULL, n, m;

    do
    {
        cout << "Number of rows: ";

        cin >> n;
    } while (n <= 0);

    cin.ignore();

    do
    {
        cout << "Number of columns: ";

        cin >> m;
    } while (m <= 0);

    if ((A = (int *)calloc((n * m), sizeof(int))) == NULL)
    {
        cout << "Not enough memory!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            *(A + i * m + j) = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> *(A + i * m + j);

            cin.ignore();
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cout << "Array [" << i << "][" << j << "] = " << *(A + i * m + j) << " at memory adress (" << A + i * m + j << ")" << endl;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            free(A + i * m + j);

    return 0;
}