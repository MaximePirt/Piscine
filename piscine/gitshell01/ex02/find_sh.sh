#find .name *.sh | tr ".sh" " "
find . -name '*.sh' -exec basename {} .sh ';'

