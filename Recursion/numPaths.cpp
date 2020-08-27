
using namespace std;

int numPath(int x, int y, int currX, int currY){
    if(currX == x && currY == y)
        return 1;
    if(currX == x){
        return 0;
    }
    if(currY == y){
        return 0;
    }
    return numPath(x,y,currX+1, currY);
    return numPath(x,y,currX,currY+1);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
