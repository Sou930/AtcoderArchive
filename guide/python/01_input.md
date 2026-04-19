# 入力の受け取り方

競プロでは「標準入力からデータを読む」のが基本。  
Pythonでの主なパターンをまとめる。

---

## 1行・1値

**入力**
```
5
```

**コード**
```python
n = int(input())
print(n)  # 5
```

`input()` は文字列で返ってくるので、数値が必要なときは `int()` や `float()` で変換する。

```python
x = float(input())   # 小数
s = input()          # 文字列のまま使う
```

---

## 1行・複数値（空白区切り）

**入力**
```
3 7
```

**コード**
```python
a, b = map(int, input().split())
print(a + b)  # 10
```

`split()` で空白分割 → `map(int, ...)` で全部 `int` に変換 → アンパックで受け取る。

3つ以上も同じ：

**入力**
```
1 2 3
```

```python
a, b, c = map(int, input().split())
print(a + b + c)  # 6
```

---

## 1行・複数値をリストで受け取る

**入力**
```
1 2 3 4 5
```

**コード**
```python
a = list(map(int, input().split()))
print(a)        # [1, 2, 3, 4, 5]
print(a[0])     # 1
print(sum(a))   # 15
```

要素数が不定なときや、後でインデックスアクセスしたいときはリストにする。

---

## N行の入力

**入力**
```
4
10
20
30
40
```

**コード**
```python
n = int(input())
a = [int(input()) for _ in range(n)]
print(a)      # [10, 20, 30, 40]
print(sum(a)) # 100
```

---

## N行・各行が複数値

**入力**
```
3
1 2
3 4
5 6
```

**コード**
```python
n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    print(a, b)
```

**出力**
```
1 2
3 4
5 6
```

---

## N×M の行列（2次元リスト）

**入力**
```
3 4
1 2 3 4
5 6 7 8
9 10 11 12
```

**コード**
```python
n, m = map(int, input().split())  # 行数・列数
grid = [list(map(int, input().split())) for _ in range(n)]

print(grid)
# [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]]

print(grid[1][2])  # 7  （2行目・3列目）
```

---

## 文字列を複数行

**入力**
```
3
apple
banana
cherry
```

**コード**
```python
n = int(input())
words = [input() for _ in range(n)]
print(words)  # ['apple', 'banana', 'cherry']
```

---

## 1文字ずつ扱う

**入力**
```
atcoder
```

**コード**
```python
s = input()
print(list(s))   # ['a', 't', 'c', 'o', 'd', 'e', 'r']
print(s[0])      # a
print(len(s))    # 7

for c in s:
    print(c)
```

---

## 高速入力（大量データのとき）

`input()` は行数が多い（10万行以上など）と遅くなることがある。  
そのときは `sys.stdin` を使う。

```python
import sys
input = sys.stdin.readline
```

これを冒頭に書くだけで以降の `input()` がそのまま速くなる。  
ただし `readline()` は末尾に `\n` が残るので、文字列を受け取るときは `strip()` が必要。

**入力**
```
5
hello
```

```python
import sys
input = sys.stdin.readline

n = int(input())       # 数値はそのままOK（int() が \n を無視する）
s = input().strip()    # 文字列は strip() を忘れずに
print(n, s)            # 5 hello
```

---

## よく使うパターン一覧

| 入力の形                  | コード |
|--------------------------|--------|
| 整数1つ                   | `n = int(input())` |
| 小数1つ                   | `x = float(input())` |
| 文字列1つ                 | `s = input()` |
| 空白区切り2値             | `a, b = map(int, input().split())` |
| 空白区切りをリストで       | `a = list(map(int, input().split()))` |
| N行をリストで             | `a = [int(input()) for _ in range(n)]` |
| N行・各行2値              | `for _ in range(n): a, b = map(int, input().split())` |
| N行・文字列リスト          | `words = [input() for _ in range(n)]` |
| N×M の行列               | `grid = [list(map(int, input().split())) for _ in range(n)]` |
| 高速入力                  | `import sys; input = sys.stdin.readline` |

---

## 例題：ABC086A

**問題**  
2つの整数 A, B が与えられる。A×B が偶数なら `Even`、奇数なら `Odd` を出力せよ。

**入力例**
```
3 4
```

**出力例**
```
Even
```

**コード**
```python
a, b = map(int, input().split())
print("Even" if a * b % 2 == 0 else "Odd")
```

---

## 例題：ABC081A

**問題**  
3つの整数が1行に空白区切りで与えられる。すべて奇数なら `YES`、そうでなければ `NO` を出力せよ。

**入力例1**
```
1 3 5
```

**出力例1**
```
YES
```

**入力例2**
```
2 3 5
```

**出力例2**
```
NO
```

**コード**
```python
a, b, c = map(int, input().split())
if a % 2 == 1 and b % 2 == 1 and c % 2 == 1:
    print("YES")
else:
    print("NO")
```

`all()` を使うと短く書ける：

```python
nums = list(map(int, input().split()))
print("YES" if all(x % 2 == 1 for x in nums) else "NO")
```
