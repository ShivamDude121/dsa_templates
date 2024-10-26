void set_ith_bit(int n, int i) {

    n = (n | (1 << i));
    cout << n;
}

void unset_ith_bit(int n, int i) {

    n = ( n &  ~(1 << i) );

    cout << n;
}

void toggle_ith_bit(int n , int i) {
    n = ( n ^ (1 << i));
    cout << n;
}

