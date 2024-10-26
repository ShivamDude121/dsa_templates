void binary_to_string(int n) {

    string ans = "";

    while (n) {

        if (n % 2 == 1) ans += '1';
        else ans += '0';

        n /= 2;

    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}
