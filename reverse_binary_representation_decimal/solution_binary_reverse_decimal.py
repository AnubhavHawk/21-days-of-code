def reverse_binary(n):
 t = 1 <<31
 ans = 0
 while(n):
  ans += (n%2)*t
  t = t>>1
  n = n // 2
 return ans
print(reverse_binary(32768))