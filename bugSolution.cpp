std::vector<int> myVector = {1, 2, 3, 4, 5};

for (int i = 0; i < myVector.size(); ++i) {
  std::cout << myVector[i] << std::endl;
}

This corrected code uses the condition i < myVector.size(), ensuring that the loop terminates before accessing any element outside the valid range of the vector.