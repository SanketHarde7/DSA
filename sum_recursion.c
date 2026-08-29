int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

void main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
     for (int i=n; i>=0; i--){
        printf("%d ", sum(i));
    }
}