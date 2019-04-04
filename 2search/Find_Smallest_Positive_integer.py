def find(num):
	l, h = 0, len(num)-1

	if num[l] > 1:
		return 1
	if num[h] - num[l] == len(num) - 1:
		return num[h] + 1
	
	while True:
		if h - l == 1 and num[h] - num[l] > 1:
			return num[l] + 1
		else:
			m = (h+l)//2
			if num[m] - num[l] == m - l:
				l = m
			else:
				h = m

num=[1,2,3,5,6,7]
print("num=[1,2,3,5,6,7],",find(num))

num=[1,3,5,6,7]
print("num=[1,2,3,5,6,7],",find(num))

num=[2,3,4]
print("num=[2,3,4],",find(num))

num=[1,2,3,4]
print("num=[1,2,3,4],",find(num))