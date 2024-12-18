std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i <= vec.size(); ++i) { //Error: Accessing vec[vec.size()] is out of bounds
    std::cout << vec[i] << std::endl; 
}

int *ptr = new int[5];
ptr[5] = 10; //Error: Accessing memory outside allocated block
delete[] ptr;