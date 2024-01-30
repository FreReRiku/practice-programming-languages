#!/bin/bash

#初期化
#sum = 0

# ループで1から5までの数字を足し合わせる
for ((i=1; i<=5; i++)); do
    sum=$((sum + i))
done

echo "1から5までの和は $sum です"
