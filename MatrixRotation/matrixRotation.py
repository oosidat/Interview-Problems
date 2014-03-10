## Matrix Rotation for N x N Matrix- http://www.problemotd.com/

def rotate_clockwise(matrix):
	n = len(matrix)
	flatlist = flatten(matrix)
	rotatedMatrix = []
	for i in range (0, n):
		rotatedMatrix.append(flatlist[i::n][::-1])
	return rotatedMatrix

def rotate_counterclockwise(matrix):
	n = len(matrix)
	flatlist = flatten(matrix)
	rotatedMatrix = []
	for i in range (n-1, -1, -1):
		rotatedMatrix.append(flatlist[i::n])
	return rotatedMatrix

def flatten(list):
	flatlist = [item for sublist in list for item in sublist]
	return flatlist


## Tests
# Basic helper for comparing two matrices of N x N
def equal(a,b):
	if (len(a) != len(b)):
		return False
	n = len(a)
	for i in range(0,n):
		if (a[i] != b[i]):
			print "Unequal at row {0}".format(i)
			return False
	return True


# Test data
matrix1=[
	[1, 2],
	[3, 4]
	]

matrix1_rotatedcw=[
	[3, 1],
	[4, 2]
	]

matrix1_rotatedccw=[
	[2, 4],
	[1, 3]
	]

matrix2=[
	[1, 2, 3, 4, 5], 
    [6, 7, 8, 9, 10], 
    [11, 12, 13, 14, 15], 
    [16, 17, 18, 19, 20], 
    [21, 22, 23, 24, 25]
    ]

matrix2_rotatedcw=[
	[21, 16, 11, 6, 1],
    [22, 17, 12, 7, 2],
    [23, 18, 13, 8, 3],
    [24, 19, 14, 9, 4],
    [25, 20, 15, 10, 5]
    ]

matrix2_rotatedccw=[
	[5, 10, 15, 20, 25], 
	[4, 9, 14, 19, 24], 
	[3, 8, 13, 18, 23], 
	[2, 7, 12, 17, 22], 
	[1, 6, 11, 16, 21]
	]

# Run tests
def runtests():
	assert equal(rotate_clockwise(matrix1), matrix1_rotatedcw), \
	 "Error in clockwise rotation of matrix1"
	assert equal(rotate_counterclockwise(matrix1), matrix1_rotatedccw), \
	 "Error in counter clockwise rotation of matrix1"
	assert equal(rotate_clockwise(matrix2), matrix2_rotatedcw), \
	 "Error in clockwise rotation of matrix2"
	assert equal(rotate_counterclockwise(matrix2), matrix2_rotatedccw), \
	 "Error in counter clockwise rotation of matrix2"