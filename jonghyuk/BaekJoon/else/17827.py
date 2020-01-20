# 연결리스트 문제
# 17827
# 시간초과
import sys
import time


class Node:
    def __init__(self, key):
        self.key = key
        self.next = None

# 과연 최선인지 생각하기..
# 클래스를 정의하는게 최선일까?
# 너무 자료구조 그 자체로 풀려고 한 건 아닐까?


class SnailList:
    def __init__(self, key_list, snail_num):
        self.head = Node(key_list[0])
        current = self.head
        for key_list_index in range(1, len(key_list)):
            current.next = Node(key_list[key_list_index])
            if snail_num == key_list_index + 1:
                snail_node = current.next
            current = current.next
        current.next = snail_node

    def traversal(self, num):
        curr = self.head
        for num_index in range(num):
            curr = curr.next
        return curr.key


command_list = list(map(int, sys.stdin.readline().split()))
input_key_list = list(map(int, sys.stdin.readline().split()))

sl = SnailList(input_key_list, command_list[2])

result_list = []

for command_list_index in range(command_list[1]):
    traversal_num = int(sys.stdin.readline())
    result_list.append(sl.traversal(traversal_num))

for elem in result_list:
    print(elem)

# 모범답안

N, M, V = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))
# 핵심 아이디어 : 리스트를 달팽이 앞부분, 뒷부분으로 나눈다
front, back = arr[:V-1], arr[V-1:]
l_back = len(back)
for _ in range(M):
    k = int(sys.stdin.readline())
    # 달팽이 앞부분의 한칸씩 이동 - 리스트 앞부분 에서 이동한 결과
    if k < V - 1:
        sys.stdout.write(f"{front[k]}\n")
    # 달팽이 뒷부분의 한칸씩 이동
    else:
        # 이동값에서 달팽이 앞부분만큼 뺌
        k -= (V - 1)
        # 뒷 리스트의 길이만큼 modulo
        k %= l_back
        sys.stdout.write(f"{back[k]}\n")
