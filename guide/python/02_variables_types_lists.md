# 変数・型・リスト

プログラムで値を扱うには「変数」に入れる。  
Pythonの主な型と、複数の値をまとめる「リスト」を学ぼう。

---

## 変数とは

値に名前をつけて保存するもの。`=` で代入する。

```python
x = 10
name = "Alice"
pi = 3.14

print(x)     # 10
print(name)  # Alice
print(pi)    # 3.14
```

変数は上書きできる：

```python
x = 10
x = 20
print(x)  # 20
```

---

## 主な型

| 型       | 名前         | 例                  |
|----------|--------------|---------------------|
| `int`    | 整数         | `1`, `42`, `-5`     |
| `float`  | 小数（浮動小数点） | `3.14`, `-0.5` |
| `str`    | 文字列       | `"hello"`, `"abc"`  |
| `bool`   | 真偽値       | `True`, `False`     |

```python
a = 10          # int
b = 3.14        # float
c = "hello"     # str
d = True        # bool

print(type(a))  # <class 'int'>
print(type(b))  # <class 'float'>
print(type(c))  # <class 'str'>
print(type(d))  # <class 'bool'>
```

---

## 型変換

`input()` は文字列で返ってくるので、計算するときは変換が必要。

```python
s = "42"
n = int(s)      # 文字列 → 整数
print(n + 1)    # 43

x = float("3.14")  # 文字列 → 小数
print(x)            # 3.14

print(str(100))     # 整数 → 文字列 "100"
```

---

## 文字列の操作

```python
s = "hello"
print(len(s))       # 5（文字数）
print(s[0])         # h（先頭の文字）
print(s[-1])        # o（末尾の文字）
print(s[1:3])       # el（スライス：1番目〜2番目）
print(s.upper())    # HELLO（大文字化）
print(s + "!")      # hello!（連結）
```

---

## リストとは

複数の値をまとめて管理できる。`[...]` で作る。

```python
a = [1, 2, 3, 4, 5]
print(a)        # [1, 2, 3, 4, 5]
print(a[0])     # 1（先頭）
print(a[-1])    # 5（末尾）
print(a[1:3])   # [2, 3]（スライス）
print(len(a))   # 5（要素数）
```

インデックスは **0始まり**。

---

## リストの変更

```python
a = [1, 2, 3]
a[0] = 10         # 先頭を書き換え
print(a)          # [10, 2, 3]

a.append(4)       # 末尾に追加
print(a)          # [10, 2, 3, 4]

a.pop()           # 末尾を削除
print(a)          # [10, 2, 3]
```

---

## よく使うリスト操作

```python
a = [3, 1, 4, 1, 5, 9]

print(sum(a))     # 23（合計）
print(max(a))     # 9（最大値）
print(min(a))     # 1（最小値）

a.sort()
print(a)          # [1, 1, 3, 4, 5, 9]（昇順ソート）

a.sort(reverse=True)
print(a)          # [9, 5, 4, 3, 1, 1]（降順ソート）
```

---

## 複数代入・スワップ

```python
a, b = 1, 2
print(a, b)   # 1 2

a, b = b, a   # スワップ
print(a, b)   # 2 1
```

---

## 例題：合計を求める

**問題**  
5つの整数が1行に空白区切りで与えられる。合計を出力せよ。

**入力例**
```
1 2 3 4 5
```

**出力例**
```
15
```

**コード**
```python
a = list(map(int, input().split()))
print(sum(a))
```

---

## よく使うパターン一覧

| やりたいこと             | コード |
|--------------------------|--------|
| 整数の変数               | `n = 10` |
| 文字列の変数             | `s = "hello"` |
| 型変換（文字列→整数）    | `int("42")` |
| 型変換（文字列→小数）    | `float("3.14")` |
| リストを作る             | `a = [1, 2, 3]` |
| 先頭の要素               | `a[0]` |
| 末尾の要素               | `a[-1]` |
| 要素数                   | `len(a)` |
| 合計                     | `sum(a)` |
| 最大値・最小値           | `max(a)`, `min(a)` |
| 末尾に追加               | `a.append(x)` |
| ソート（昇順）           | `a.sort()` |
| ソート（降順）           | `a.sort(reverse=True)` |
