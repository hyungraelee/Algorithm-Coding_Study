num_list = list()

while True:
	num = input()
	if (num == '0'):
		break
	num_list.append(num)

for i in num_list:
	if (i == i[::-1]):
		print("yes")
	else:
		print("no")
