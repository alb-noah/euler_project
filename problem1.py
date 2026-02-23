# If we list all the natural numbers below 10 that are multiples 3 of or 5,
# we get 3,5,6 and 9. The sum of these multiples is 23.
# Find the sum of all the multiples of 3 or 5 below 1000.

# *********the Algorithm***********
#*
# - determine the threshold varibale (in this case 1000)
# - determine the mulitpleVar1 (in this case 3)
# - determine the mulitpleVar2 (in this case 5)
# - initiate variable sum = 0
# for i=1 i<1000 i++
#   if (i % mulitpleVar1==0 or i % mulitpleVar2 ==0)
#       sum += (i)
# print sum

threshold  = input("Enter your threshold: ")
multiples_of1  = input("Enter your first multiples of: ")
multiples_of2  = input("Enter your second multiples of: ")
sum = 0
for i in range(int(threshold)):
    if  (i % int(multiples_of1) ==0) or (i % int(multiples_of2) ==0):
        sum = int(sum + i)
print(sum)

