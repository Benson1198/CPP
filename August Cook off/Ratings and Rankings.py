t = int(input())
for _ in range(t):
	n,m = [int(y) for y in input().split()]
	arr = [int(y) for y in input().split()]

	max_rating = [int(y) for y in input().split()]

	res_lst = []

	for i in range(n):
		max_rating[i] = arr[i] + max_rating[i]
		arr = max_rating.copy()

	for _ in range(m-1):
		update = [int(y) for y in input().split()]
		for i in range(n):
			arr[i] = arr[i] + update[i]

			if arr[i] >= max_rating[i]:
				max_rating[i] = arr[i]
			mx = max(arr)

			if arr[i] != mx and arr[i] == max_rating[i]:
				res_lst.append(i)

	st = set(res_lst)

	print(len(st))