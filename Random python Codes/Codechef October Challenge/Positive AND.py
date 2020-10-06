arr = [2,3,1,5,6,4,8,9,7]

ans = True

for i in range(n-1):
	if(arr[i] & arr[i+1] == 0):
		print(str(arr[i]) + " " + str(arr[i+1]))
		ans = False
		break

print(ans)