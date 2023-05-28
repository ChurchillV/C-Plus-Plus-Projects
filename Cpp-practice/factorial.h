int factorial(int number) {
    int fact = 1;
    int iter = 1;
    for (iter; iter <= number; iter++) {
        fact*= iter;
    }
    return fact;
}