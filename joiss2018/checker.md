# 正規表現エンジン チェッカー

## ダウンロード
- [checker.cpp](./file/checker.cpp)
- [testcase1.txt](./file/testcase1.txt)
- [testcase2.txt](./file/testcase2.txt)

## 使い方
1. checker.cppの`my_regex_match`を完成させる
1. 以下の通りコンパイル&実行

```sh
g++ -std=c++11 checker.cpp -o checker
./checker testcase.txt
```

## テストケースの記述方法

```
T
patternCases_1
patternCases_2
patternCases_3
patternCases_4
...
patternCases_T
```

patternCases_i

```
pattern
N
text_1
text_2
text_3
text_4
...
text_N
```
