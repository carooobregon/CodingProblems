#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    if(arr.size() <= 2 )
        return 0;
    int len = arr.size();
    int winningSum = -9999;
    int currSum = 0;

    for(size_t i = 0; i < len; i++){
        for(size_t j = 0; j < len; j++){
            if(i < len -2 && j < len-2){
                currSum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            }
            if(currSum > winningSum)
                winningSum = currSum;
        }
    }
    return winningSum;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
