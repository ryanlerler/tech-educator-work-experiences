#A12
student_score = {95, 30, 32, 73, 45, 33, 39, 96, 37, 37, 30, 58, 48, 75, 96, 83, 98, 74, 59, 32, 79, 46, 35, 33, 50, 57, 65, 100, 43, 65}

print(student_score)

#Some common set methods:
#set.add(“item”)
student_score = {95, 30, 32, 73, 45, 33, 39, 96, 37, 37, 30, 58, 48, 75, 96, 83, 98, 74, 59, 32, 79, 46, 35, 33, 50, 57, 65, 100, 43, 65}
student_score.add('1')
print(student_score)

#set.update(”item1”,”item2”,”item3”)
student_score = {95, 30, 32, 73, 45, 33, 39, 96, 37, 37, 30, 58, 48, 75, 96, 83, 98, 74, 59, 32, 79, 46, 35, 33, 50, 57, 65, 100, 43, 65}
student_score.update('1','2','3')
print(student_score)

#len(set)
student_score = {95, 30, 32, 73, 45, 33, 39, 96, 37, 37, 30, 58, 48, 75, 96, 83, 98, 74, 59, 32, 79, 46, 35, 33, 50, 57, 65, 100, 43, 65}
print(len(student_score))

#set.remove(”item”)
student_score = {95, 30, 32, 73, 45, 33, 39, 96, 37, 37, 30, 58, 48, 75, 96, 83, 98, 74, 59, 32, 79, 46, 35, 33, 50, 57, 65, 100, 43, 65}
student_score.remove(95)
print(student_score)

#set1.update(set2)/set1 = set1.union(set2)
new = {'a','b'}
student_score.update(new)
print(student_score)

new = {'a','b'}
student_score = new.union(student_score)
print(student_score)

