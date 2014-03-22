## For a non-zero number and n... since zeroes were making my head hurt...
def ispowerofn(number, n):
	if (number == 1):
		return True
	if ((number % n) != 0):
		return False
	return ispowerofn(number/n, n)

def runtests():
	assert ispowerofn(125, 5) == True, "125 is a power of 5"
	assert ispowerofn(120, 5) == False, "120 is not a power of 5"
	assert ispowerofn(27, 9) == False, "27 is not a power of 9"
	assert ispowerofn(27, 3) == True, "27 is a power of 3"
	assert ispowerofn(1, 3) == True, "3 to the power of 0 is equal to 1"

runtests()