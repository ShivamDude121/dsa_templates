void binary_to_decimal(string s) {

    int ans = 0;
    int pow = 1;

    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '1') ans += pow;

        pow *= 2;
    }

    cout << ans;
}
