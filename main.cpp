void peinrtf_binary (int n) {
    while (n) {
        if (n & 1)
            printf("1");
        else
            printf("0");
        n >>= 1;
    }
    printf ("\n");
}
