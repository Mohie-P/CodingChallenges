#include <bits/stdc++.h>

using namespace std;

// Global array 
int arr[8][9] = { 8, 1, 6, 3, 5, 7, 4, 9, 2,
            6, 1, 8, 7, 5, 3, 2, 9, 4,
            4, 9, 2, 3, 5, 7, 8, 1, 6,
            2, 9, 4, 7, 5, 3, 6, 1, 8, 
            8, 3, 4, 1, 5, 9, 6, 7, 2,
            4, 3, 8, 9, 5, 1, 2, 7, 6, 
            6, 7, 2, 1, 5, 9, 8, 3, 4, 
            2, 7, 6, 9, 5, 1, 4, 3, 8}  ; 

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> &s) 
{
    int cost = 100 ; // At worst , we can get an input of total sum 0. So max cost can be 45. [Distinct postive integers] 
    int itr = 0 ; 
    int input_Arr [9] ;

    // Massage the inputs for faster computation 
    for (auto o_i : s)
    {
        for (auto o_j : o_i)
        {
            input_Arr[itr] = o_j ;
            itr++ ;    
        }
    }

    // Compare input_Arr with global arr to find min cost
    for (int i = 0 ; i < 8 ; ++i)
    {
        int temp_c = 0 ; 
        for (int j = 0 ; j < 9 ; ++j)
        {
            int magic_num = arr[i][j];
            int orig_num = input_Arr[j];
            temp_c += abs (magic_num - orig_num) ;
        }
        if (temp_c < cost)
        {
            cost = temp_c ;
        }
    }
    
    return cost ;

}






int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    vector<int> p {1,2,3,4,5,6,7,8,9};
    vector<vector<int>> j ; 
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
