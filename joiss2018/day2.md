# 夏季セミナー2018 Day2

## やること
- 4,5章のまとめ
- 実装


## 4章の流れ
1. 正規表現 -> ε-NFA(ε遷移を含む非決定性オートマトン)
1. ε-NFA -> NFA(εを含まない非決定性オートマトン)
1. NFA -> DFA(決定性オートマトン)

※最後の変換が少し辛い

## 5章の流れ
- 正規表現 -> VM命令列(コンパイル)
- VM命令の実行

※コンパイルを文字列として出す必要性はないです

## テストケース

## ケース1
パターン: `^a*b*$`

- `aab` OK
- `aabbb` NG
- `bb` OK
- `ba` NG

## ケース2
パターン: `^(ab)*c$`

- `abc` OK
- `ababac` OK
- `abcab` NG
- `abaab` NG
- `c` OK
- `ac` NG

## ケース3
パターン: `^(j|i)oi$`

- `joi` OK
- `ioi` OK
- `joioi` NG
- `joioji` NG
- `ioj` NG
- `oi` NG

## ケース4
パターン: `^((a*)*bc*b|d*)b*a*$`

- `aabccba` OK
- `ddb` OK
- `bda` NG
- `aaaaabdbbba` OK
- `dddddbba` OK
- `aaaadba` NG
- `bcbba` OK
