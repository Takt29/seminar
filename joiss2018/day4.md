# Day4

## やること
- プレゼン作成

## 発表に関すること
- 発表時間: 最大10分

## リンク集

### 参加者スライドまとめ

- [夏季セミ2014](https://docs.google.com/spreadsheets/d/1jSAL_gY9HkPFOGiyZmYk7gLS2iDoTjT2Tx1m1aAo1DY/edit#gid=0)
- [夏季セミ2015](https://docs.google.com/spreadsheets/d/1D2LYnbC3m-v3kw7rt9mlD-6DQcU1lgZdpJr2wl9yaCI/edit#gid=0)
- [夏季セミ2016](https://docs.google.com/spreadsheets/d/127eEl3yJ6aLh8e5p37QtMha4nrC1mnCK0TOsOrUsHeo/edit#gid=0)
- [夏季セミ2017](https://docs.google.com/spreadsheets/d/1QRIgxuO8MJW_E2lrAeeHzzRV3Kotio_C4qARzHr9JYI/edit#gid=0)

## テストケース

## ケース7
パターン: `(^ab|c)df(e$|fg)`

- `abdffgot` OK
- `cdfe` OK
- `cdfeg` NG
- `aabdfe` NG
- `abcdffge` OK

## ケース8
パターン: `^(ab|c)?ded?(a*|g)`

- `abdeaaak` OK
- `cdedaag` OK
- `de` OK
- `abcdedg` NG
- `abeaaa` NG

## ケース9
パターン: `(bc+d$|ef*g[a-z]|h?i(j|k))`

- `effgz` OK
- `ij` OK
- `effg` NG
- `bcdd` NG
- `reffgz` OK
- `bd` NG
- `bcccccd` OK
- `efffabcd` OK
