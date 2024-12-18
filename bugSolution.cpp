std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) { //Corrected loop condition
    std::cout << vec[i] << std::endl;
}

int *ptr = new int[6]; // Allocate enough memory
ptr[5] = 10; // Corrected memory access
delete[] ptr;