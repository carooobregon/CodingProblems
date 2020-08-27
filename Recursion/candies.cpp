#include <iostream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'findNumJars' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER count
 *  2. INTEGER capacity
 */

int jars = 0;

// Base case is when your count is smaller or equal than your capacity
// Increase jar number and apply recursion

// watch out for floats !!!
int findNumJars(float count, float capacity) {
    if(count <= capacity){
        return 1;
    }

    return findNumJars(ceil(count/2), capacity) + findNumJars(floor(count/2), capacity);
}

int main(){
    float cap, count;
    cin >> cap;
    cin >> count;
    findNumJars(count,cap);
}