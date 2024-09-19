# mkdir output
cd intra-uuid-4ebeed31-53f5-4be4-b827-ddecdf70d011-5981325-nimalaye
rm -rf `ls | grep -i '^ex'`
mkdir ex00
cd ./ex00
echo "Z" > z
cd ../
mkdir ex01
cd ./ex01
echo "111111111111111111111111111111111111111" > testShell00
touch -a -m -t 202406012342 testShell00
chmod 455 testShell00
tar -cf testShell00.tar testShell00
rm -f testShell00
cd ../
mkdir ex02
cd ex02
mkdir test0
touch -a -m -t 202406012047 test0
chmod 715 test0
echo "111" > test1
touch -a -m -t 202406012146 test1
chmod 714 test1
mkdir test2
touch -a -m -t 202406012245 test2
chmod 504 test2
echo "" > test3
touch -a -m -t 202406012344 test3
chmod 404 test3
echo "1" > test4
touch -a -m -t 202406012343 test4
chmod 641 test4
ln test3 test5
# echo "" > test5
# touch -a -m -t 202406012344 test5
chmod 404 test5
ln -s test0 test6
touch -h -t 202401012220 test6
tar -cf exo2.tar *
#find . -name "test*" -delete
cd ../
mkdir ex03
cd ex03
cat ~/.ssh/id_rsa.pub >> id_rsa_pub
cd ../
mkdir ex04
cd ex04
echo "ls -m -t -F" >> midLS
cd ../
mkdir ex05
cd ex05
echo "git log -n 5 --format="%H"" >> git_commit.sh
cd ../
mkdir ex06
cd ex06
echo "git ls-files --others --ignored --exclude-standard" >> git_ignore.sh
cd ../
mkdir ex07
cd ex07
patch ../../resources/shell00/ex07/a < ../../resources/shell00/ex07/sw.diff -o b
cd ../
mkdir ex08
cd ex08
echo "find . \( -name "#*#" -o -name "*~" \) -print -delete" > clean
cd ../
mkdir ex09
cd ex09
printf '0x29\tstring\t42\t42 file type\n' > ft_magic



































