cd shell01
rm -rf `ls | grep -i '^ex'`
mkdir ex01
cd ex01
echo "groups $FT_USER | sed 's/ /,/g' | tr -d '\n'" > print_groups.sh
cd ../
mkdir ex02
cd ex02
echo "find . \( -name '*.sh' \) -print | sed 's/\(.*\)\///g' | sed 's/\.sh//g'" > find_sh.sh
chmod 755 find_sh.sh
cd ../
mkdir ex03
cd ex03
echo "( find . -type d && find . -type f ) | wc -l | sed 's/ //g'" > count_files.sh
cd ../
mkdir ex04
cd ex04
echo "ifconfig | grep "ether" | sed 's/\(.*\)ether //g'" > MAC.sh
cd ../
mkdir ex05
cd ex05
echo '"42"' > '"\?$*'\''MaRViN'\''*$?\"'
cd ../
mkdir ex06
cd ex06
echo "ls -l | sed -n 'p;n'" > skip.sh
cd ../
mkdir ex07
cd ex07
# Display the output of cat /etc/passwd.
# Remove comments (lines starting with #).
# Select every other line starting from the second line.
# Reverse each login.
# Sort the logins in reverse alphabetical order.
# Keep only logins between FT_LINE1 and FT_LINE2 inclusive.
# Separate logins by ", ".
# End the output with a ".".
echo "cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | sed 's/:\(.*\)//g' | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | tr -d '\n'" > r_dwssap.sh







