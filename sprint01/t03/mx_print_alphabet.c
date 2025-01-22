void mx_print_alphabet(void) {
    char letter;
    for (int i = 0; i < 26; i++) {
        letter = (i % 2 == 0) ? ('A' + i) : ('a' + i);
        mx_printchar(letter);
    }
    mx_printchar('\n');
}