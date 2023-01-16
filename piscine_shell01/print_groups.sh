id -Gn $FT_USER | tr " " "," | awk '{printf $0}'
