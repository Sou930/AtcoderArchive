# if・for・while

プログラムの流れを制御する構文を学ぼう。  
条件分岐の `if`、繰り返しの `for` と `while` が基本。

---

## if 文（条件分岐）

条件が `True` のときだけ処理を実行する。

```python
x = 10

if x > 5:
    print("5より大きい")   # こちらが実行される
```

`else` で「それ以外」も書ける：

```python
x = 3

if x > 5:
    print("5より大きい")
else:
    print("5以下")         # こちらが実行される
```

`elif` で複数の条件を並べられる：

```python
x = 5

if x > 5:
    print("5より大きい")
elif x == 5:
    print("ちょうど5")     # こちらが実行される
else:
    print("5より小さい")
```

---

## 比較演算子

| 演算子 | 意味         | 例           |
|--------|--------------|--------------|
| `==`   | 等しい       | `a == b`     |
| `!=`   | 等しくない   | `a != b`     |
| `>`    | より大きい   | `a > b`      |
| `<`    | より小さい   | `a < b`      |
| `>=`   | 以上         | `a >= b`     |
| `<=`   | 以下         | `a <= b`     |

---

## 論理演算子

複数の条件を組み合わせる：

| 演算子 | 意味               | 例                    |
|--------|--------------------|-----------------------|
| `and`  | 両方True           | `a > 0 and b > 0`    |
| `or`   | どちらかTrue       | `a > 0 or b > 0`     |
| `not`  | 反転               | `not a > 0`           |

```python
a, b = 3, 7

if a > 0 and b > 0:
    print("両方正")    # こちらが実行される

if a > 5 or b > 5:
    print("どちらか5超え")  # こちらが実行される
```

---

## 1行 if（三項演算子）

短い条件分岐は1行でも書ける：

```python
x = 10
print("偶数" if x % 2 == 0 else "奇数")  # 偶数
```

---

## for 文（繰り返し）

決まった回数だけ繰り返す：

```python
for i in range(5):
    print(i)
# 0
# 1
# 2
# 3
# 4
```

`range(n)` は `0` から `n-1` まで。

---

## range のバリエーション

```python
range(5)        # 0, 1, 2, 3, 4
range(1, 6)     # 1, 2, 3, 4, 5
range(0, 10, 2) # 0, 2, 4, 6, 8（2ずつ増える）
range(5, 0, -1) # 5, 4, 3, 2, 1（逆順）
```

---

## リストのループ

リストの各要素を順番に取り出す：

```python
a = [10, 20, 30]

for x in a:
    print(x)
# 10
# 20
# 30
```

インデックスも一緒に欲しいときは `enumerate`：

```python
for i, x in enumerate(a):
    print(i, x)
# 0 10
# 1 20
# 2 30
```

---

## while 文（条件が続く限り繰り返す）

条件が `True` の間、ループを続ける：

```python
n = 1

while n <= 5:
    print(n)
    n += 1
# 1
# 2
# 3
# 4
# 5
```

`n += 1` を忘れると無限ループになるので注意。

---

## break と continue

`break` でループを抜ける：

```python
for i in range(10):
    if i == 5:
        break
    print(i)
# 0, 1, 2, 3, 4（5で止まる）
```

`continue` でその回だけスキップする：

```python
for i in range(5):
    if i == 2:
        continue
    print(i)
# 0, 1, 3, 4（2だけ飛ばす）
```

---

## ループの中でのカウント・合計

```python
total = 0
for i in range(1, 6):
    total += i      # total = total + i
print(total)  # 15（1+2+3+4+5）
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

**コード**
```python
a, b, c = map(int, input().split())
if a % 2 == 1 and b % 2 == 1 and c % 2 == 1:
    print("YES")
else:
    print("NO")
```

---

## 例題：1からNまでの合計

**問題**  
整数 N が与えられる。1 から N までの合計を出力せよ。

**入力例**
```
5
```

**出力例**
```
15
```

**コード**
```python
n = int(input())
total = 0
for i in range(1, n + 1):
    total += i
print(total)
```

`sum()` を使うとより短く：

```python
n = int(input())
print(sum(range(1, n + 1)))
```

---

## よく使うパターン一覧

| やりたいこと             | コード |
|--------------------------|--------|
| 条件分岐                 | `if x > 0: ...` |
| それ以外                 | `else: ...` |
| 複数条件                 | `elif x == 0: ...` |
| N回繰り返す              | `for i in range(n): ...` |
| 1〜Nまで繰り返す         | `for i in range(1, n+1): ...` |
| リストをループ           | `for x in a: ...` |
| インデックス付きループ   | `for i, x in enumerate(a): ...` |
| 条件付きループ           | `while n > 0: ...` |
| ループを抜ける           | `break` |
| その回だけスキップ       | `continue` |
| 1行 if                   | `"Yes" if cond else "No"` |
