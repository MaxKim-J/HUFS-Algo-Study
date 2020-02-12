#탐색 알고리즘
---
2020.02.11

저장된 정보들 중에 원하는 값을 찾는 알고리즘
탐색 문제 해결방법 2가지로는 선형 탐색 알고리즘(Linear search algorithm)과 이진 탐색 알고리즘(Binary search algorithm)이 있다.

##선형 탐색 알고리즘 (linear search algorithm)
순서대로 하나하나씩 찾는 알고리즘이다.
1. 왼쪽부터 하나하나씩 원하는 값을 찾아본다.
2. 원하는 값을 발견하게 되면, 더 이상 그 뒤를 보지 않고 종료한다.

- 특징
1. 수행시간이 극과 극이다.
``최적인 경우: 정답이 리스트 첫 원소인 경우
->길이에 상관없이 1번만에 탐색종료 ``
``최악의 경우: 정답이 마지막 원소이거나 없는 경우
->그 리스트의 길이만큼 수행시간이 소요됨.``
2. 리스트가 정렬되지 않은 상태에서도 사용가능하다.
- Python
```python
def linear_search(element,somelist):
  for i in range(len(some_list)):
    if some_list[i] == element:
      return i
  return None
```
##이진 탐색 알고리즘 (binary search algorithm)
반씩 제외하면서 찾는 알고리즘이다.
1. 중간값을 먼저 선택한 뒤, 왼쪽 or 오른쪽만 남긴다.
2. 남은 값들 중에 중간 값을 선택하고 왼쪽 or 오른쪽을 남긴다.
3. 이를 계속 반복하여 찾고자 하는 수를 찾아간다.

- 특징
1. 리스트의 길이가 길어지더라도, 수행시간에 크게 영향을 받지 않는다.
``최적의 경우: 찾고자 하는 값이 가운데 있는 경우``->1번만에 바로 끝남
``최악의 경우: 정답이 없는 경우`` ->log<sub>2</sub>n

2. **이진탐색의 전제조건**은 정렬된 리스트이다.

- Python (일반 구현)
```python
def binary_search(target, data):
  start = 0
  end = len(data) - 1

  while start <= end:
    mid = (start + end) // 2

    if target = data[mid]:
      return mid
    elif target < data[mid]:
      end = mid -1
    else:
      start = mid + 1

  return None
```
- Python 재귀적 구현
```python
def binary_search_recursion(target, start, end, data):
    if start > end:
        return None

    mid = (start + end) // 2

    if data[mid] == target:
        return mid
    elif data[mid] > target:
        end = mid - 1
    else:
        start = mid + 1        

    return binary_search_recursion(target, start, end, data)
```
