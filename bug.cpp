std::vector<int> myVector = {1, 2, 3, 4, 5};

for (int i = 0; i <= myVector.size(); ++i) {
  std::cout << myVector[i] << std::endl;
}

This code will cause a crash because it attempts to access myVector[5], which is out of bounds. The correct condition in the for loop should be i < myVector.size().