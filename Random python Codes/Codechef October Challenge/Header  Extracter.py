import re
re1 = r'^class="hj'
re2 = 'strong$'

string = 
generic_re = re.compile("(%s|%s)" % (re1, re2)).findall(string)

for i in lines:
    print(i)