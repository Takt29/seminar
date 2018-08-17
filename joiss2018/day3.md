# Day3

## やること
- 実装
- プレゼン担当分け

## 暇な人向け
### 正規表現で回答出来るAtCoderの問題
- [ARC022-A](https://beta.atcoder.jp/contests/arc022/tasks/arc022_1)
- [ABC104-B](https://beta.atcoder.jp/contests/abc104/tasks/abc104_b)
- [CodeFestival2017Final-A](https://beta.atcoder.jp/contests/cf17-final/tasks/cf17_final_a)

### やれそうなこと
- キャプチャ(置換ができる)
- 文脈自由文法(括弧の対応/回文の判定が可能)
- 強欲, 控えめ
- 反復補題(理論/証明)
- 高速化
- 正規言語の補集合(これも正規言語の条件を満たす)

## 発表順

1. p
2. t
3. h
4. k
5. m

## DFA -> 正規表現

$$T^k_{i,j}$$: 途中で、状態$$0,1,2, ..., k-1$$のみを通って、状態$$i$$から$$j$$まで遷移する正規表現

求める正規表現$$R$$は、初期状態を$$S$$, 終了状態を$$F_1, F_2, ... F_M$$とすると、
$$R = T_{S,F_1}^N + T_{S,F_2}^N + ... + T_{S,F_M}^N$$

### Tの求め方

<$$k = 0$$>

$$\alpha :=$$ 状態$$i$$から$$j$$へ直接つなぐ辺に対応する記号の集合

$$T^0_{i,j} = 1 + \alpha_1 + \alpha_2 + ...$$ $$(i = j)$$
$$T^0_{i,j} = 0 + \alpha_1 + \alpha_2 + ...$$ $$(i \ne j)$$

<$$k \ge 1$$>

$$T^k_{i,j} = T^{k-1}_{i,j} + T^{k-1}_{i,k-1}(T^{k-1}_{k-1,k-1})^{*}T^{k-1}_{k-1,j}$$

### 式の簡略化
$$ a = b $$
$$ 0 x = x 0 = 0 $$
$$ 1 x = x 1 = x$$
$$ (0 + x)^{*} = x^{*}$$
$$x + xyy^{*} = xy^{*}$$
$$1^{*} = 1$$
$$(a + b) + c = a + b + c$$
$$(ab)c = abc$$
