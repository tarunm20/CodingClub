#Example 1 - data types
print("Example 1")
string = "abc"
integer = 1
float = 1.00
boolean = False
array = [1,2,3,4,5,6,7,8,9]
twodimarray = [[1,2,3],[4,5,6],[7,8,9]]
print("Data types: \n\"", string, "\"", "\n", integer, "\n", float, "\n", boolean, "\n", array, "\n", twodimarray)
# Example 2 - scanning and printing
print("\n\n\n\n\n\n\n\n Example 2")
a = input("Enter your string here:")
print(a)
#Example 3 - if statements
print("\n\n\n\n\n\n\n\n Example 3")
integer = int(input("Enter number here:"))
if integer > 0:
    print("Your integer is greater than 0")
else:
    print("Your integer is less than 0")
#Example 4 - for loops
print("\n\n\n\n\n\n\n\n Example 4")
size = int(input("Enter size of loop here: "))
for i in range(size+1):
    print(i)
#Example 5 - functions
print("\n\n\n\n\n\n\n\n Example 5")
def function(input1, input2):
    output = input1 * input2
    return output
a = int(input("\n Enter Integer 1: "))
b = int(input("\n Enter Integer 2: "))
print("\nThe product of your two numbers is", function(a,b))
#Example 6 - classes
print("\n\n\n\n\n\n\n\n Example 6")
class Point:
    def __init__(self,x,y):
        self.x = x
        self.y = y

    def slope(self, p2):
        slope = (p2.y - self.y)/(p2.x - self.x)
        return slope

    def toString(self):
        return (self.x,self.y)

obj1 = Point(1,2)
obj2 = Point(4,5)
slope = obj1.slope(obj2)
print("The point 1 is: ", obj1.toString(), "and point 2 is: ", obj2.toString())
print("The slope of the line connecting the two points is: ", slope)
