from collections import Counter 

t = int(input())
for _ in range(t):
	n = int(input())
	arr = [int(y) for y in input().split()]

	count = Counter(arr)

	f_dict = dict(count)

	f_arr = f_dict.values()

	f_count = dict(Counter(f_arr))

	arr_set = [set(f_arr)]
	arr_set.sort()

	temp = arr_set[0]

	for i in arr_set:
		if f_count[str(i)] > f_count[str(temp)]:
			temp = i

	print(temp)







