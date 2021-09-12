def check(arr,length0): 
	array=[0]*length0
	for i in range(length0):
		if (arr[i]=='{'):
			array[i]=1
		elif (arr[i]=='['):
			array[i]=2
		elif (arr[i]=='('):
			array[i]=3
		elif (arr[i]==']'):
			array[i]=-2
		elif (arr[i]==')'):
			array[i]=-3
		elif (arr[i]=='}'):
			array[i]=-1
	print(*array)	
	sum1=0
	i=0
	j=0
	for j in range(length0):
			for i in range(j,length0):
				sum1=sum1+array[i]
				if (sum1==0):					
					if ((array[i]==array[j]*-1) and array[j]>0):
						break
					else:
						print("Not correct")
						return 0
	print ("correct")
	return 0
spam=input("Enter your string")
x=check(spam,4)
		
