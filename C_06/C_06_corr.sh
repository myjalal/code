#!bin/bash/
echo "*** starting norminette ***\n"
echo "\nex00===================="
cd ex00
norminette -R CheckForbiddenSourceHeader
cd ..
echo "\nex01===================="
cd ex01
norminette -R CheckForbiddenSourceHeader
cd ..
echo "\nex02===================="
cd ex02
norminette -R CheckForbiddenSourceHeader
cd ..
echo "\nex03===================="
cd ex03
norminette -R CheckForbiddenSourceHeader
cd ..
echo "\n==========DONE=========="

echo "\n*** starting tests...\n"

echo "\nex00===================="
cd ex00
echo "\nShould display\n./a.out: \n"
gcc -Wall -Wextra -Werror ft_print_program_name.c && ./a.out
cd ..
echo "\nex01===================="
cd ex01
echo "\n ./a.out "abcd1" "abcd2" "abcd3""
echo "\nShould display: \nabcd1\nabcd2\nabcd3\n"
gcc -Wall -Wextra -Werror ft_print_params.c && ./a.out "abcd1" "abcd2" "abcd3"
cd ..
echo "\nex02===================="
cd ex02
echo "\n ./a.out "abcd1" "abcd2" "abcd3""
echo "\nShould display: \nabcd3\nabcd2\nabcd1\n"
gcc -Wall -Wextra -Werror ft_rev_params.c && ./a.out "abcd1" "abcd2" "abcd3"
cd ..
echo "\nex03===================="
cd ex03
echo "\n ./a.out "aabc" "abbc" "aabb" "aabd""
echo "\nShould display: \naabb\naabc\naabd\nabbc\n"
gcc -Wall -Wextra -Werror ft_sort_params.c && ./a.out "aabc" "abbc" "aabb" "aabd"
cd ..

echo "\n=======Done with tests=========\n"

echo " \n*** Removing main and a.out ***\n"

echo "ex00===================="
cd ex00
rm main00.c a.out
cd ..
echo "ex01===================="
cd ex01
rm main01.c a.out
cd ..
echo "ex02===================="
cd ex02
rm main02.c a.out
cd ..
echo "ex03===================="
cd ex03
rm main03.c a.out
cd ..
echo "\n=========DONE===========\n"
