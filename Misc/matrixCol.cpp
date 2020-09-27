#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

int main() {

    Matrix matrix{
        {1,2,3,4},
        {5,1,2,3},
        {9,5,1,2}
    };
    // Shortcut for the width and height of the matrix
    const size_t width{ matrix.at(0).size() };
    const size_t height{ matrix.size() };

    // Set start row and start column
    size_t startRow{ height-1 };
    size_t startColumn{ 0 };
    size_t column{};

    // for all possible start positions
    do {
        // set the row and column values to the start values
        size_t row{ startRow };
        column = startColumn;

        //Now go through the diagonal
        do {
            // Show current value
            std::cout << matrix[row][column] << ' ';

            // Set next position in the diagonal
            ++row;      // Go one row down
            ++column;   // Go one column to the right

          // As long as we do not cross the border
        } while ((row < height) && (column < width));

        std::cout << '\n';

        // Calculate new start row and start column
        // If possible
        if (startRow > 0) {
            // Go up
            --startRow;
        }
        else {
            // Else go right
            ++startColumn;
        }
    } while (startColumn < width);

    return 0;
}
