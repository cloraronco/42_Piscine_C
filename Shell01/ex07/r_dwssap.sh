cat /etc/passwd | sed -e '1,10d' | awk 'NR%2==0' | rev | sort -r | sed -n "${FT_LINE1}, ${FT_LINE2} p" | rev | cut -d ':' -f1 | rev | tr "\n" "," | sed -e 's/\,/\,\ /g' | sed "s/..$//" | sed 's/$/./'
