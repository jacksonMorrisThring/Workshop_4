int size_of_variable_star_t(){

    int* ptr = new int;
    int size = sizeof(ptr);

    delete ptr;
    return size;
}