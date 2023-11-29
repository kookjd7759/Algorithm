main(n, a) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        printf("%d ", n - a + 1);
    }
}