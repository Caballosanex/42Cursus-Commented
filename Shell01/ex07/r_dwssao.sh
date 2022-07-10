cat /etc/passwd | grep -v '\#' | sed '1!n;d' | cut -d':' -f1 | rev | sort -r | awk 'NR >= 7 && NR <= 15' | paste -s -d"," - | sed 's/,/, /g' | sed 's/$/./' | tr -d ''
