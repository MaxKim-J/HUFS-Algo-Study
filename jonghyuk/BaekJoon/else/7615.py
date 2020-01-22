# 해시테이블 백준 7615번
# 메모리 초과됨;; 좀더 연구해보자

import sys

commands = int(sys.stdin.readline())
for command in range(commands):
    a, b, x, n, c, d, m = map(int, sys.stdin.readline().split())
    modulo = b % m
    min_num = (c - modulo) / a
    max_num = (d - modulo) / a
    result = tuple(filter(lambda x: min_num <= x <=
                          max_num, range(x, x + n + 1)))
    sys.stdout.write(f"{len(result)}\n")
