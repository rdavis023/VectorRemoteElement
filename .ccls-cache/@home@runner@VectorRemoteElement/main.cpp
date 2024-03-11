#include "RemoveElement.h"


void removeElement(vector<int>& nums, int val) {
  //   +=====================================================+
  //   |                 WRITE YOUR CODE HERE                |
  //   | Description:                                        |
  //   | - This function removes all occurrences of a        |
  //   |   given value ('val') from an integer vector.       |
  //   | - It modifies the input vector 'nums'.              |
  //   |                                                     |
  //   | Return type: void                                   |
  //   |                                                     |
  //   | Tips:                                               |
  //   | - Uses two pointers 'i' and 'j' for traversal.      |
  //   | - 'i' points to the last element that is not 'val'. |
  //   | - 'j' is used for iterating over the array.         |
  //   | - Check output from Test.cpp in "User logs".        |
  //   +=====================================================+
  int i = 0; // Pointer to place the next non-val element
    for (int j = 0; j < nums.size(); ++j) {
        if (nums[j] != val) {
            // If the current element is not 'val', place it at the 'i'th index,
            // and then increment 'i'
            nums[i] = nums[j];
            i++;
        }
    }
    // Resize the vector to the new size, removing the 'val' elements from the end
    nums.resize(i);
}