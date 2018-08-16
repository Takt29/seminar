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
- `aaaaabdbbba` NG
- `dddddbba` OK
- `aaaadba` NG
- `bcbba` OK

## ケース5
パターン: `^(a|b|c)*bcd$`

- `abcd` OK
- `babacbcd` OK
- `bcd` OK
- `cbcd` OK
- `abcbabcabcabcbacbacbacbcbacbabcbabcbacbcbd` NG
- `ababacbabcbcabcabcbcabcbacbcabcbacbcbcbcd` OK
- `abcabcbabcdcbabcbacbabcbcbabcabcabcbadbcb` NG
- `bcabcbacbacbabcabcabcabcbcdbcd` NG
- `bababcbabcbacbcabcbabcbcbabcbcbabcbc` NG

## ケース6
パターン: `^(bc*d|ef*g|h*i(j*|k)*)$`

- `bccd` OK
- `efffg` OK
- `hhijjkj` OK
- `hhijjkjkk` OK
- `bccdeg` NG
- `i` OK
- `hijjkkji` NG
- `eg` OK
- `bcccccccccd` OK
- `ijjjjjjjjjjkj` OK
