class Solution {
    boolean checkPalindrome(String a) {
        return a.equals(new StringBuilder(a).reverse().toString());
    }

    public boolean validPalindrome(String s) {
        int i, t1 = -1, t2 = -1, n = s.length();
        for (i = 0; i < n / 2; i++) {
            if (s.charAt(i) != s.charAt(n - i - 1)) {
                t1 = i;
                t2 = n - 1 - i;
                break;
            }
        }
        if (t1 == -1)
            return true;
        String a = s.substring(0, t1) + s.substring(t1 + 1);
        String b = s.substring(0, t2) + s.substring(t2 + 1);
        return checkPalindrome(a) || checkPalindrome(b);
    }
}