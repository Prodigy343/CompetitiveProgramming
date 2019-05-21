def orientation(points):
	o = 0
	i = 0
	for x,y in points:
		if i == len(points)-1: break
		o += (points[i+1][0]-x)*(points[i+1][1]+y)
		i += 1
	o += (points[0][0]-points[len(points)-1][0])*(points[0][1]+points[len(points)-1][1])
	return 'CW' if o>0 else 'CCW'

def area(points):
	t = 0
	i = 0
	for x,y in points:
		if i == len(points)-1: break
		t+=(((x*points[i+1][1]) - (y*points[i+1][0]))/2.0)
		i+=1
	t += ((points[len(points)-1][0]*points[0][1]) - (points[len(points)-1][1]*points[0][0]))/2.0
	return abs(t)

while True:
	N = int(raw_input())
	if N==0: break
	points = []
	i = 0 
	while i<=N-1:
		x,y = [int(s) for s in raw_input().split(" ")]
		i+=1
		points.append([x,y])
	print "{} {}".format(orientation(points), area(points))
	